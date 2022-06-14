#include "catch2/catch_all.hpp"
#include "BinaryReaderBase.h"
#include "TestConstants.h"

TEMPLATE_LIST_TEST_CASE("Non-Normal Floats", "[template]", bReaderTestTypes)
{
	static const std::string dbgStr = "Test Exception string";
	static const float maxFloat = std::numeric_limits<float>::max();
	static const float minFloat = -std::numeric_limits<float>::max();
	
	SECTION("0")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "SingleFloatTest");
		REQUIRE_NOTHROW(reader->readFloat(0, 0, CONV_ZERO, dbgStr));
		REQUIRE_NOTHROW(reader->readFloat(0, 0, CONV_ZERO, dbgStr));
		reader->seek(0, std::ios_base::beg);
		REQUIRE_NOTHROW(reader->readFloat(0, 0, 0, dbgStr));
		// It seems x == 0 for some reason.
		// float in = -0.0;
		// int32_t x = *reinterpret_cast<int32_t*>(&in)
		//REQUIRE_THROWS_AS(reader->readFloat(0, 0, 0, dbgStr), LimitException);
	}
	
	SECTION("Subnormals")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "SingleFloatTest");
		reader->seek(24, std::ios_base::beg);
		REQUIRE_NOTHROW(reader->readFloat(0.0F, 1.0F, 0, dbgStr));
		reader->seek(24, std::ios_base::beg);
		REQUIRE_THROWS_AS(reader->readFloat(minFloat, maxFloat, FAIL_SUBNORM, dbgStr), NonNormalFloatException);
	}
	
	SECTION("Infinity")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "SingleFloatTest");
		reader->seek(32, std::ios_base::beg);
		REQUIRE_NOTHROW(reader->readFloat(maxFloat, maxFloat, CONV_INF, dbgStr));
		REQUIRE_NOTHROW(reader->readFloat(minFloat, minFloat, CONV_INF, dbgStr));
		reader->seek(32, std::ios_base::beg);
		REQUIRE_THROWS_AS(reader->readFloat(minFloat, maxFloat, 0, dbgStr), LimitException);
		REQUIRE_THROWS_AS(reader->readFloat(minFloat, maxFloat, 0, dbgStr), LimitException);
	}
	
	SECTION("NaN")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "FloatNonNormals");
		reader->seek(12, std::ios_base::beg);
		REQUIRE_THROWS_AS(reader->readFloat(minFloat, maxFloat, 0, dbgStr), NonNormalFloatException);
	}
}
