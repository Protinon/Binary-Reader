#include "catch2/catch_all.hpp"
#include "BinaryReaderBase.h"
#include "TestConstants.h"

TEMPLATE_LIST_TEST_CASE("Integers", "[template]", bReaderTestTypes)
{
	static const std::string dbgStr = "Test Exception string";
	SECTION("No Exception when constrianed to single value - Integers")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");	
		for (int x = 0; x < 12; x++)
			REQUIRE_NOTHROW(reader->readUInt64(uint64Data[x], uint64Data[x], dbgStr));
	}

	SECTION("Exception thrown when off by 1 - Integer")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");	
	
		static const uint64_t smallest = 1;
		REQUIRE_THROWS(reader->readUInt64(uint64Data[0] + smallest, uint64Data[0] + smallest, dbgStr));
		for (int x = 1; x < 11; x++)
		{
			REQUIRE_THROWS(reader->readUInt64(uint64Data[x] - smallest, uint64Data[x] - smallest, dbgStr));
			reader->seek(-8, std::ios_base::cur);
			REQUIRE_THROWS(reader->readUInt64(uint64Data[x] + smallest, uint64Data[x] + smallest, dbgStr));
		}
		REQUIRE_THROWS(reader->readUInt64(uint64Data[0] - smallest, uint64Data[0] - smallest, dbgStr));
	}
}

TEMPLATE_LIST_TEST_CASE("Normal Floats", "[template]", bReaderTestTypes)
{
	static const std::string dbgStr = "Test Exception string";
	SECTION("No Exception when constrained to single value - Half-Floats")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "HalfFloatTest");	
		for (int x = 0; x < 6; x++)
			REQUIRE_NOTHROW(reader->readHalf(halfFloatData[x], halfFloatData[x], 0, dbgStr));
	}
	
	SECTION("No Exception when contstrained to single value - Single-Floats")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "SingleFloatTest");	
		for (int x = 0; x < 6; x++)
			REQUIRE_NOTHROW(reader->readFloat(floatData[x], floatData[x], 0, dbgStr));
	}
	
	SECTION("No Exception when contstrained to single value - Double-Floats")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "DoubleFloatTest");	
		for (int x = 0; x < 6; x++)
			REQUIRE_NOTHROW(reader->readDouble(doubleData[x], doubleData[x], 0, dbgStr));
	}
}
