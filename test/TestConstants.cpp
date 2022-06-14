#include "TestConstants.h"
	
template <>
std::unique_ptr<BinaryReaderBase> prepareReader<BinaryReaderFile>(std::string filepath)
{
    return std::make_unique<BinaryReaderFile>(filepath);
}

template <>
std::unique_ptr<BinaryReaderBase> prepareReader<BinaryReaderBuffered>(std::string filepath)
{
    std::ifstream infile(filepath);
    infile.seekg(0, std::ios::end);
    size_t byteLen = infile.tellg();
    infile.seekg(0, std::ios::beg);

    uint8_t* buffer = new uint8_t[byteLen];
    infile.read((char*)buffer, byteLen);
    return std::make_unique<BinaryReaderBuffered>(buffer, byteLen);
}
