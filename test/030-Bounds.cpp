#include "catch2/catch_all.hpp"
#include "BinaryReaderBase.h"
#include "TestConstants.h"

TEMPLATE_LIST_TEST_CASE("Tell and Seek - Within Bounds", "[template]", bReaderTestTypes)
{
	SECTION("Initital file starts at 0")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");
		REQUIRE(reader->tell() == 0);
	}
	SECTION("Seek relative to beginning")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");
		reader->seek(15, std::ios_base::beg);
		REQUIRE(reader->tell() == 15);
	}
	SECTION("Seek relative to end")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");
		reader->seek(0, std::ios_base::end);
		REQUIRE(reader->tell() == 120);
		reader->seek(-5, std::ios_base::end);
		REQUIRE(reader->tell() == 115);
	}
	SECTION("Seek from current position")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ByteTest");
		reader->seek(50, std::ios_base::cur);
		REQUIRE(reader->tell() == 50);
		reader->seek(-5, std::ios_base::cur);
		REQUIRE(reader->tell() == 45);
		reader->seek(10, std::ios_base::cur);
		REQUIRE(reader->tell() == 55);
	}
}
