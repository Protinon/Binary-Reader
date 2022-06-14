#include "catch2/catch_all.hpp"
#include "BinaryReaderBase.h"
#include "TestConstants.h"

TEMPLATE_LIST_TEST_CASE("Reading Byte Arrays", "[template]", bReaderTestTypes)
{
	static char buffer[15];

	SECTION("UInt 8")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ByteTest");
		uint8_t* dataReader = reinterpret_cast<uint8_t*>(&buffer);
		reader->readUInt8Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == uint8Data[x]);
	}

	SECTION("Int 8")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ByteTest");
		int8_t* dataReader = reinterpret_cast<int8_t*>(&buffer);
		reader->readInt8Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == int8Data[x]);
	}
}

TEMPLATE_LIST_TEST_CASE("Reading Arrays - Little Endian", "[template]", bReaderTestTypes)
{
	static char buffer[120];

	SECTION("UInt 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestLE");
		uint16_t* dataReader = reinterpret_cast<uint16_t*>(&buffer);
		reader->readUInt16Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == uint16Data[x]);
	}

	SECTION("Int 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestLE");
		int16_t* dataReader = reinterpret_cast<int16_t*>(&buffer);
		reader->readInt16Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == int16Data[x]);
	}

	SECTION("UInt 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestLE");
		uint32_t* dataReader = reinterpret_cast<uint32_t*>(&buffer);
		reader->readUInt32Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == uint32Data[x]);
	}

	SECTION("Int 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestLE");
		int32_t* dataReader = reinterpret_cast<int32_t*>(&buffer);
		reader->readInt32Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == int32Data[x]);
	}

	SECTION("UInt 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");
		uint64_t* dataReader = reinterpret_cast<uint64_t*>(&buffer);
		reader->readUInt64Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == uint64Data[x]);
	}

	SECTION("Int 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestLE");
		int64_t* dataReader = reinterpret_cast<int64_t*>(&buffer);
		reader->readInt64Array(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == int64Data[x]);
	}
}

TEMPLATE_LIST_TEST_CASE("Reading Arrays - Big Endian", "[template]", bReaderTestTypes)
{
	static char buffer[120];

	SECTION("UInt 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestBE");
		uint16_t* dataReader = reinterpret_cast<uint16_t*>(&buffer);
		reader->readUInt16BEArray(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == uint16Data[x]);
	}

	SECTION("Int 16")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "ShortTestBE");
		int16_t* dataReader = reinterpret_cast<int16_t*>(&buffer);
		reader->readInt16BEArray(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == int16Data[x]);
	}

	SECTION("UInt 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestBE");
		uint32_t* dataReader = reinterpret_cast<uint32_t*>(&buffer);
		reader->readUInt32BEArray(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == uint32Data[x]);
	}

	SECTION("Int 32")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "IntTestBE");
		int32_t* dataReader = reinterpret_cast<int32_t*>(&buffer);
		reader->readInt32BEArray(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == int32Data[x]);
	}

	SECTION("UInt 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestBE");
		uint64_t* dataReader = reinterpret_cast<uint64_t*>(&buffer);
		reader->readUInt64BEArray(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == uint64Data[x]);
	}

	SECTION("Int 64")
	{
		std::unique_ptr<BinaryReaderBase> reader = prepareReader<TestType>(TEST_DIR + PATH_SEP + "LongTestBE");
		int64_t* dataReader = reinterpret_cast<int64_t*>(&buffer);
		reader->readInt64BEArray(dataReader, 12);
		for (int x = 0; x < 12; x++)
			REQUIRE(dataReader[x] == int64Data[x]);
	}
}
