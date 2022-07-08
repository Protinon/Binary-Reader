#pragma once

#include "BinaryReaderBase.h"
#include "BinaryReaderExceptions.h"

#include <fstream>
#include <string>
#include <cstring>

class BinaryReaderBuffered : public BinaryReaderBase
{
	char* m_data;
	size_t m_dataLen;
	size_t m_curPos;

	void read1Byte(char* dst);
	void read2Bytes(char* dst);
	void read2BytesBE(char* dst);
	void read4Bytes(char* dst);
	void read4BytesBE(char* dst);
	void read8Bytes(char* dst);
	void read8BytesBE(char* dst);

public:
	BinaryReaderBuffered();
	BinaryReaderBuffered(uint8_t* data, size_t dataLen);
	BinaryReaderBuffered(const BinaryReaderBuffered& other) = delete;
	~BinaryReaderBuffered();

	BinaryReaderBuffered& operator=(const BinaryReaderBuffered& other) = delete;
	size_t getLength();
	const char* getPtr();

	BinaryReaderBuffered& seek(std::streamoff offset, std::ios_base::seekdir way);
	size_t tell();
};
