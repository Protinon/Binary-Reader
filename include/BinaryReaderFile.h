#pragma once

#include "BinaryReaderBuffered.h"
#include "BinaryReaderExceptions.h"
#include "BinaryReaderBase.h"

#include <fstream>
#include <cstdint>
#include <string>
#include <memory>

#ifdef __cpp_lib_filesystem
	#define USING_FILESYSTEM 1
	#include <filesystem>
	namespace fs = std::filesystem;
#elif __cpp_lib_experimental_filesystem
	#define USING_FILESYSTEM 1
	#include <experimental/filesystem>
	namespace fs = std::experimental::filesystem;
#endif

class BinaryReaderFile : public BinaryReaderBase
{
	std::ifstream _reader;
	size_t m_length;

private:
	void read1Byte(char* dst);
	void read2Bytes(char* dst);
	void read2BytesBE(char* dst);
	void read4Bytes(char* dst);
	void read4BytesBE(char* dst);
	void read8Bytes(char* dst);
	void read8BytesBE(char* dst);

public:
	BinaryReaderFile();
	BinaryReaderFile(const std::string& filePath);
	#ifdef USING_FILESYSTEM
	BinaryReaderFile(const fs::path& filePath) : BinaryReaderFile(filePath.string()) {}
	#endif

	size_t getLength();
	BinaryReaderFile& seek(std::streamoff offset, std::ios_base::seekdir way);
	size_t tell();

private:
	void setLength();
};
