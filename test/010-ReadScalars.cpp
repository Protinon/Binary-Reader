#include "catch2/catch_all.hpp"
#include "BinaryReaderBase.h"
#include "TestConstants.h"

TEMPLATE_LIST_TEST_CASE("Reading Bytes", "[template]", bReaderTestTypes)
{
	SECTION("UInt 8")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ByteTest");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readUInt8() == uint8Data[x]);
	}

	SECTION("Int 8")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ByteTest");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readInt8() == int8Data[x]);
	}
}

TEMPLATE_LIST_TEST_CASE("Reading Scalars - Little Endian", "[template]", bReaderTestTypes)
{
	SECTION("UInt 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestLE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readUInt16() == uint16Data[x]);
	}

	SECTION("Int 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestLE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readInt16() == int16Data[x]);
	}

	SECTION("UInt 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestLE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readUInt32() == uint32Data[x]);
	}

	SECTION("Int 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestLE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readInt32() == int32Data[x]);
	}

	SECTION("UInt 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readUInt64() == uint64Data[x]);
	}

	SECTION("Int 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readInt64() == int64Data[x]);
	}
}

TEMPLATE_LIST_TEST_CASE("Reading Scalars - Big Endian", "[template]", bReaderTestTypes)
{
	SECTION("UInt 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestBE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readUInt16BE() == uint16Data[x]);
	}

	SECTION("Int 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestBE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readInt16BE() == int16Data[x]);
	}

	SECTION("UInt 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestBE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readUInt32BE() == uint32Data[x]);
	}

	SECTION("Int 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestBE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readInt32BE() == int32Data[x]);
	}

	SECTION("UInt 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestBE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readUInt64BE() == uint64Data[x]);
	}

	SECTION("Int 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestBE");
		for (int x = 0; x < 12; x++)
			REQUIRE(reader->readInt64BE() == int64Data[x]);
	}
}
TEMPLATE_LIST_TEST_CASE("Reading Floats", "[template]", bReaderTestTypes)
{	
	SECTION("Half Precision Float")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "HalfFloatTest");
		for (int x = 0; x < 10; x++)
		{
			REQUIRE(reader->readHalf() == halfFloatData[x]);
		}
	}
	
	SECTION("Single Precision Float")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "SingleFloatTest");
		for (int x = 0; x < 10; x++)
		{
			REQUIRE(reader->readFloat() == floatData[x]);
		}
	}
	
	SECTION("Double Precision Float")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "DoubleFloatTest");
		for (int x = 0; x < 10; x++)
		{
			REQUIRE(reader->readDouble() == doubleData[x]);
		}
	}
}
