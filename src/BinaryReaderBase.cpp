#include "BinaryReaderBase.h"

#ifndef Byte

uint8_t
BinaryReaderBase::readUInt8()
{
	uint8_t data;
	read1Byte(reinterpret_cast<char*>(&data));
	return data;
}

uint8_t
BinaryReaderBase::readUInt8(uint8_t min, uint8_t max, const std::string& debugMsg)
{
	uint8_t data;
	read1Byte(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((uint64_t)data, min, debugMsg);
	else if (data > max)
		throw LimitException((uint64_t)data, max, debugMsg);
	return data;
}

int8_t
BinaryReaderBase::readInt8()
{
	uint8_t data;
	read1Byte(reinterpret_cast<char*>(&data));
	return data;
}

int8_t
BinaryReaderBase::readInt8(int8_t min, int8_t max, const std::string& debugMsg)
{
	uint8_t data;
	read1Byte(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((int64_t)data, max, debugMsg);
	else if (data > max)
		throw LimitException((int64_t)data, max, debugMsg);
	return data;
}

#endif

#ifndef Short

uint16_t
BinaryReaderBase::readUInt16()
{
	uint16_t data;
	read2Bytes(reinterpret_cast<char*>(&data));
	return data;
}

uint16_t
BinaryReaderBase::readUInt16(uint16_t min, uint16_t max, const std::string& debugMsg)
{
	uint16_t data;
	read2Bytes(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((uint64_t)data, min, debugMsg);
	else if (data > max)
		throw LimitException((uint64_t)data, max, debugMsg);
	return data;
}

int16_t
BinaryReaderBase::readInt16()
{
	int16_t data;
	read2Bytes(reinterpret_cast<char*>(&data));
	return data;
}

int16_t
BinaryReaderBase::readInt16(int16_t min, int16_t max, const std::string& debugMsg)
{
	int16_t data;
	read2Bytes(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((int64_t)data, max, debugMsg);
	else if (data > max)
		throw LimitException((int64_t)data, max, debugMsg);
	return data;
}

#endif

#ifndef ShortBE

uint16_t
BinaryReaderBase::readUInt16BE()
{
	uint16_t data;
	read2BytesBE(reinterpret_cast<char*>(&data));
	return data;
}

uint16_t
BinaryReaderBase::readUInt16BE(uint16_t min, uint16_t max, const std::string& debugMsg)
{
	uint16_t data;
	read2BytesBE(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((uint64_t)data, min, debugMsg);
	else if (data > max)
		throw LimitException((uint64_t)data, max, debugMsg);
	return data;
}

int16_t
BinaryReaderBase::readInt16BE()
{
	int16_t data;
	read2BytesBE(reinterpret_cast<char*>(&data));
	return data;
}

int16_t
BinaryReaderBase::readInt16BE(int16_t min, int16_t max, const std::string& debugMsg)
{
	int16_t data;
	read2BytesBE(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((int64_t)data, max, debugMsg);
	else if (data > max)
		throw LimitException((int64_t)data, max, debugMsg);
	return data;
}

#endif

#ifndef Int

uint32_t
BinaryReaderBase::readUInt32()
{
	uint32_t data;
	read4Bytes(reinterpret_cast<char*>(&data));
	return data;
}

uint32_t
BinaryReaderBase::readUInt32(uint32_t min, uint32_t max, const std::string& debugMsg)
{
	uint32_t data;
	read4Bytes(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((uint64_t)data, min, debugMsg);
	else if (data > max)
		throw LimitException((uint64_t)data, max, debugMsg);
	return data;
}

int32_t
BinaryReaderBase::readInt32()
{
	int32_t data;
	read4Bytes(reinterpret_cast<char*>(&data));
	return data;
}

int32_t
BinaryReaderBase::readInt32(int32_t min, int32_t max, const std::string& debugMsg)
{
	int32_t data;
	read4Bytes(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((int64_t)data, max, debugMsg);
	else if (data > max)
		throw LimitException((int64_t)data, max, debugMsg);
	return data;
}

#endif

#ifndef IntBE

uint32_t
BinaryReaderBase::readUInt32BE()
{
	uint32_t data;
	read4BytesBE(reinterpret_cast<char*>(&data));
	return data;
}

uint32_t
BinaryReaderBase::readUInt32BE(uint32_t min, uint32_t max, const std::string& debugMsg)
{
	uint32_t data;
	read4BytesBE(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((uint64_t)data, min, debugMsg);
	else if (data > max)
		throw LimitException((uint64_t)data, max, debugMsg);
	return data;
}

int32_t
BinaryReaderBase::readInt32BE()
{
	int32_t data;
	read4BytesBE(reinterpret_cast<char*>(&data));
	return data;
}

int32_t
BinaryReaderBase::readInt32BE(int32_t min, int32_t max, const std::string& debugMsg)
{
	int32_t data;
	read4BytesBE(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException((int64_t)data, max, debugMsg);
	else if (data > max)
		throw LimitException((int64_t)data, max, debugMsg);
	return data;
}

#endif

#ifndef Long

uint64_t
BinaryReaderBase::readUInt64()
{
	uint64_t data;
	read8Bytes(reinterpret_cast<char*>(&data));
	return data;
}

uint64_t
BinaryReaderBase::readUInt64(uint64_t min, uint64_t max, const std::string& debugMsg)
{
	uint64_t data;
	read8Bytes(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException(data, min, debugMsg);
	else if (data > max)
		throw LimitException(data, max, debugMsg);
	return data;
}

int64_t
BinaryReaderBase::readInt64()
{
	int64_t data;
	read8Bytes(reinterpret_cast<char*>(&data));
	return data;
}

int64_t
BinaryReaderBase::readInt64(int64_t min, int64_t max, const std::string& debugMsg)
{
	int64_t data;
	read8Bytes(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException(data, min, debugMsg);
	else if (data > max)
		throw LimitException(data, max, debugMsg);
	return data;
}

#endif

#ifndef LongBE

uint64_t
BinaryReaderBase::readUInt64BE()
{
	uint64_t data;
	read8BytesBE(reinterpret_cast<char*>(&data));
	return data;
}

uint64_t
BinaryReaderBase::readUInt64BE(uint64_t min, uint64_t max, const std::string& debugMsg)
{
	uint64_t data;
	read8BytesBE(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException(data, min, debugMsg);
	else if (data > max)
		throw LimitException(data, max, debugMsg);
	return data;
}

int64_t
BinaryReaderBase::readInt64BE()
{
	int64_t data;
	read8BytesBE(reinterpret_cast<char*>(&data));
	return data;
}

int64_t
BinaryReaderBase::readInt64BE(int64_t min, int64_t max, const std::string& debugMsg)
{
	int64_t data;
	read8BytesBE(reinterpret_cast<char*>(&data));

	if (data < min)
		throw LimitException(data, min, debugMsg);
	else if (data > max)
		throw LimitException(data, max, debugMsg);
	return data;
}

#endif

#ifndef Floats

// I saved this from somewhere online
// If I remembered where, I would give credit
float
BinaryReaderBase::readHalf()
{
	int hbits = this->readUInt16();
	int mant = hbits & 0x03ff;            // 10 bits mantissa
	int exp = hbits & 0x7c00;            // 5 bits exponent
	if (exp == 0x7c00)                   // NaN/Inf
		exp = 0x3fc00;                    // -> NaN/Inf
	else if (exp != 0)                   // normalized value
	{
		exp += 0x1c000;                   // exp - 15 + 127
		if (mant == 0 && exp > 0x1c400)  // smooth transition
		{
			uint32_t t = ((hbits & 0x8000) << 16) | (exp << 13);
			float ret;
			std::memcpy(&ret, &t, 4);
			return ret;
		}
	}
	else if (mant != 0)                  // && exp==0 -> subnormal
	{
		exp = 0x1c400;                    // make it normal
		do
		{
			mant <<= 1;                   // mantissa * 2
			exp -= 0x400;                 // decrease exp by 1
		} while ((mant & 0x400) == 0); // while not normal
		mant &= 0x3ff;                    // discard subnormal bit
	}                                     // else +/-0 -> +/-0
	uint32_t t(                      // combine all parts
		((hbits & 0x8000) << 16)         // sign  << ( 31 - 15 )
		| ((exp | mant) << 13));         // value << ( 23 - 10 )
	float ret;
	std::memcpy(&ret, &t, 4);
	return ret;
}

float
BinaryReaderBase::readHalf(float min, float max, uint8_t flags, const std::string& debugMsg)
{
	float data = this->readHalf();
	
	int32_t castData = 0;
	switch(std::fpclassify(data))
	{
		case FP_INFINITE:
		{
			if (flags & CONV_INF)
			{
				if (data == std::numeric_limits<float>::infinity())
				{
					const static float floatMax = std::numeric_limits<float>::max();
					std::memcpy(&castData, &floatMax, 4);
				}
				else
				{
					const static float floatMin = -std::numeric_limits<float>::max();
					std::memcpy(&castData, &floatMin, 4);
				}
			}
			else
				throw LimitException(data, 0, debugMsg);
			break;
		}
		case FP_NAN:
		{
			throw NonNormalFloatException(data, debugMsg);
			break;
		}
		case FP_ZERO:
		{
			if (flags & CONV_ZERO)
				castData = 0;
			break;
		}
		case FP_SUBNORMAL:
		{
			if (flags & FAIL_SUBNORM)
				throw NonNormalFloatException(data, debugMsg);
			break;
		}
		case FP_NORMAL:
		{
			std::memcpy(&castData, &data, 4);
			break;
		}
		default:
			break;
	}

	int32_t intMin;
	int32_t intMax;
	std::memcpy(&intMin, &min, 4);
	std::memcpy(&intMax, &max, 4);
	if (castData < intMin)
		throw LimitException(data, min, debugMsg);
	else if (castData > intMax)
		throw LimitException(data, max, debugMsg);
	return data;
}

float
BinaryReaderBase::readFloat()
{
	float data;
	read4Bytes(reinterpret_cast<char*>(&data));
	return data;
}

float
BinaryReaderBase::readFloat(float min, float max, uint8_t flags, const std::string& debugMsg)
{
	float data;
	read4Bytes(reinterpret_cast<char*>(&data));

	int32_t castData = 0;
	switch(std::fpclassify(data))
	{
		case FP_INFINITE:
		{
			if (flags & CONV_INF)
			{
				if (data == std::numeric_limits<float>::infinity())
				{
					const static float floatMax = std::numeric_limits<float>::max();
					std::memcpy(&castData, &floatMax, 4);
				}
				else
				{
					const static float floatMin = -std::numeric_limits<float>::max();
					std::memcpy(&castData, &floatMin, 4);
				}
			}
			else
				throw LimitException(data, 0, debugMsg);
			break;
		}
		case FP_NAN:
		{
			throw NonNormalFloatException(data, debugMsg);
			break;
		}
		case FP_ZERO:
		{
			if (flags & CONV_ZERO)
				castData = 0;
			break;
		}
		case FP_SUBNORMAL:
		{
			if (flags & FAIL_SUBNORM)
				throw NonNormalFloatException(data, debugMsg);
			break;
		}
		case FP_NORMAL:
		{
			std::memcpy(&castData, &data, 4);
			break;
		}
		default:
			break;
	}

	int32_t intMin;
	int32_t intMax;
	std::memcpy(&intMin, &min, 4);
	std::memcpy(&intMax, &max, 4);
	if (castData < intMin)
		throw LimitException(data, min, debugMsg);
	else if (castData > intMax)
		throw LimitException(data, max, debugMsg);
	return data;
}

double
BinaryReaderBase::readDouble()
{
	double data;
	read8Bytes(reinterpret_cast<char*>(&data));
	return data;
}

double
BinaryReaderBase::readDouble(double min, double max, uint8_t flags, const std::string& debugMsg)
{
	double data;
	read8Bytes(reinterpret_cast<char*>(&data));
	
	int64_t castData = 0;
	switch(std::fpclassify(data))
	{
		case FP_INFINITE:
		{
			if (flags & CONV_INF)
			{
				if (data == std::numeric_limits<double>::infinity())
				{
					const static double doubleMax = std::numeric_limits<double>::max();
					std::memcpy(&castData, &doubleMax, 4);
				}
				else
				{
					const static double doubleMin = -std::numeric_limits<double>::max();
					std::memcpy(&castData, &doubleMin, 4);
				}
			}
			else
				throw LimitException(data, 0, debugMsg);
			break;
		}
		case FP_NAN:
		{
			throw NonNormalFloatException(data, debugMsg);
			break;
		}
		case FP_ZERO:
		{
			if (flags & CONV_ZERO)
				castData = 0;
			break;
		}
		case FP_SUBNORMAL:
		{
			if (flags & FAIL_SUBNORM)
				throw NonNormalFloatException(data, debugMsg);
			break;
		}
		case FP_NORMAL:
		{
			std::memcpy(&castData, &data, 8);
			break;
		}
		default:
			break;
	}

	int64_t intMin;
	int64_t intMax;
	std::memcpy(&intMin, &min, 8);
	std::memcpy(&intMax, &max, 8);
	if (castData < intMin)
		throw LimitException(data, min, debugMsg);
	else if (castData > intMax)
		throw LimitException(data, max, debugMsg);
	return data;
}

std::string
BinaryReaderBase::readAsciiString(size_t len)
{
	char* buffer = (char*)readUInt8Array(len);
	std::string data = std::string(buffer, len);
	delete[] buffer;
	return data;
}

#endif

#ifndef ByteArray

uint8_t*
BinaryReaderBase::readUInt8Array(size_t count)
{
	uint8_t* data = new uint8_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt8();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

uint8_t*
BinaryReaderBase::readUInt8Array(size_t count, uint8_t min, uint8_t max, const std::string& debugMsg)
{
	uint8_t* data = new uint8_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt8(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readUInt8Array(uint8_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt8();
}

void
BinaryReaderBase::readUInt8Array(uint8_t* ptr, size_t count, uint8_t min, uint8_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt8(min, max, debugMsg);
}

int8_t*
BinaryReaderBase::readInt8Array(size_t count)
{
	int8_t* data = new int8_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt8();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

int8_t*
BinaryReaderBase::readInt8Array(size_t count, int8_t min, int8_t max, const std::string& debugMsg)
{
	int8_t* data = new int8_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt8(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readInt8Array(int8_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt8();
}

void
BinaryReaderBase::readInt8Array(int8_t* ptr, size_t count, int8_t min, int8_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt8(min, max, debugMsg);
}

#endif

#ifndef ShortArray

uint16_t*
BinaryReaderBase::readUInt16Array(size_t count)
{
	uint16_t* data = new uint16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt16();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

uint16_t*
BinaryReaderBase::readUInt16Array(size_t count, uint16_t min, uint16_t max, const std::string& debugMsg)
{
	uint16_t* data = new uint16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt16(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readUInt16Array(uint16_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt16();
}

void
BinaryReaderBase::readUInt16Array(uint16_t* ptr, size_t count, uint16_t min, uint16_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt16(min, max, debugMsg);
}

int16_t*
BinaryReaderBase::readInt16Array(size_t count)
{
	int16_t* data = new int16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt16();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

int16_t*
BinaryReaderBase::readInt16Array(size_t count, int16_t min, int16_t max, const std::string& debugMsg)
{
	int16_t* data = new int16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt16(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readInt16Array(int16_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt16();
}

void
BinaryReaderBase::readInt16Array(int16_t* ptr, size_t count, int16_t min, int16_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt16(min, max, debugMsg);
}

#endif

#ifndef ShortBEArray

uint16_t*
BinaryReaderBase::readUInt16BEArray(size_t count)
{
	uint16_t* data = new uint16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt16BE();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

uint16_t*
BinaryReaderBase::readUInt16BEArray(size_t count, uint16_t min, uint16_t max, const std::string& debugMsg)
{
	uint16_t* data = new uint16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt16BE(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readUInt16BEArray(uint16_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt16BE();
}

void
BinaryReaderBase::readUInt16BEArray(uint16_t* ptr, size_t count, uint16_t min, uint16_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt16BE(min, max, debugMsg);
}

int16_t*
BinaryReaderBase::readInt16BEArray(size_t count)
{
	int16_t* data = new int16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt16BE();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

int16_t*
BinaryReaderBase::readInt16BEArray(size_t count, int16_t min, int16_t max, const std::string& debugMsg)
{
	int16_t* data = new int16_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt16BE(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readInt16BEArray(int16_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt16BE();
}

void
BinaryReaderBase::readInt16BEArray(int16_t* ptr, size_t count, int16_t min, int16_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt16BE(min, max, debugMsg);
}

#endif

#ifndef IntArray

uint32_t*
BinaryReaderBase::readUInt32Array(size_t count)
{
	uint32_t* data = new uint32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt32();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

uint32_t*
BinaryReaderBase::readUInt32Array(size_t count, uint32_t min, uint32_t max, const std::string& debugMsg)
{
	uint32_t* data = new uint32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt32(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readUInt32Array(uint32_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt32();
}

void
BinaryReaderBase::readUInt32Array(uint32_t* ptr, size_t count, uint32_t min, uint32_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt32(min, max, debugMsg);
}

int32_t*
BinaryReaderBase::readInt32Array(size_t count)
{
	int32_t* data = new int32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt32();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

int32_t*
BinaryReaderBase::readInt32Array(size_t count, int32_t min, int32_t max, const std::string& debugMsg)
{
	int32_t* data = new int32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt32(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readInt32Array(int32_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt32();
}

void
BinaryReaderBase::readInt32Array(int32_t* ptr, size_t count, int32_t min, int32_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt32(min, max, debugMsg);
}

#endif

#ifndef IntArray

uint32_t*
BinaryReaderBase::readUInt32BEArray(size_t count)
{
	uint32_t* data = new uint32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt32BE();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

uint32_t*
BinaryReaderBase::readUInt32BEArray(size_t count, uint32_t min, uint32_t max, const std::string& debugMsg)
{
	uint32_t* data = new uint32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt32BE(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readUInt32BEArray(uint32_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt32BE();
}

void
BinaryReaderBase::readUInt32BEArray(uint32_t* ptr, size_t count, uint32_t min, uint32_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt32BE(min, max, debugMsg);
}

int32_t*
BinaryReaderBase::readInt32BEArray(size_t count)
{
	int32_t* data = new int32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt32BE();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

int32_t*
BinaryReaderBase::readInt32BEArray(size_t count, int32_t min, int32_t max, const std::string& debugMsg)
{
	int32_t* data = new int32_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt32BE(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readInt32BEArray(int32_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt32BE();
}

void
BinaryReaderBase::readInt32BEArray(int32_t* ptr, size_t count, int32_t min, int32_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt32BE(min, max, debugMsg);
}

#endif

#ifndef LongArray

uint64_t*
BinaryReaderBase::readUInt64Array(size_t count)
{
	uint64_t* data = new uint64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt64();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

uint64_t*
BinaryReaderBase::readUInt64Array(size_t count, uint64_t min, uint64_t max, const std::string& debugMsg)
{
	uint64_t* data = new uint64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt64(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readUInt64Array(uint64_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt64();
}

void
BinaryReaderBase::readUInt64Array(uint64_t* ptr, size_t count, uint64_t min, uint64_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt64(min, max, debugMsg);
}

int64_t*
BinaryReaderBase::readInt64Array(size_t count)
{
	int64_t* data = new int64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt64();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

int64_t*
BinaryReaderBase::readInt64Array(size_t count, int64_t min, int64_t max, const std::string& debugMsg)
{
	int64_t* data = new int64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt64(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readInt64Array(int64_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt64();
}

void
BinaryReaderBase::readInt64Array(int64_t* ptr, size_t count, int64_t min, int64_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt64(min, max, debugMsg);
}

#endif

#ifndef LongArray

uint64_t*
BinaryReaderBase::readUInt64BEArray(size_t count)
{
	uint64_t* data = new uint64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt64BE();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

uint64_t*
BinaryReaderBase::readUInt64BEArray(size_t count, uint64_t min, uint64_t max, const std::string& debugMsg)
{
	uint64_t* data = new uint64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readUInt64BE(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readUInt64BEArray(uint64_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readUInt64BE();
}

void
BinaryReaderBase::readUInt64BEArray(uint64_t* ptr, size_t count, uint64_t min, uint64_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt64BE(min, max, debugMsg);
}

int64_t*
BinaryReaderBase::readInt64BEArray(size_t count)
{
	int64_t* data = new int64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt64BE();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

int64_t*
BinaryReaderBase::readInt64BEArray(size_t count, int64_t min, int64_t max, const std::string& debugMsg)
{
	int64_t* data = new int64_t[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readInt64BE(min, max, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readInt64BEArray(int64_t* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt64BE();
}

void
BinaryReaderBase::readInt64BEArray(int64_t* ptr, size_t count, int64_t min, int64_t max, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readInt64BE(min, max, debugMsg);
}

#endif

#ifndef HalfArray

float*
BinaryReaderBase::readHalfArray(size_t count)
{
	float* data = new float[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readHalf();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

float*
BinaryReaderBase::readHalfArray(size_t count, float min, float max, uint8_t flags, const std::string& debugMsg)
{
	float* data = new float[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readHalf(min, max, flags, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readHalfArray(float* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readHalf();
}

void
BinaryReaderBase::readHalfArray(float* ptr, size_t count, float min, float max, uint8_t flags, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readHalf(min, max, flags, debugMsg);
}

#endif

#ifndef FloatArray

float*
BinaryReaderBase::readFloatArray(size_t count)
{
	float* data = new float[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readFloat();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

float*
BinaryReaderBase::readFloatArray(size_t count, float min, float max, uint8_t flags, const std::string& debugMsg)
{
	float* data = new float[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readFloat(min, max, flags, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readFloatArray(float* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readFloat();
}

void
BinaryReaderBase::readFloatArray(float* ptr, size_t count, float min, float max, uint8_t flags, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readFloat(min, max, flags, debugMsg);
}

#endif

#ifndef DoubleArray

double*
BinaryReaderBase::readDoubleArray(size_t count)
{
	double* data = new double[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readDouble();
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

double*
BinaryReaderBase::readDoubleArray(size_t count, double min, double max, uint8_t flags, const std::string& debugMsg)
{
	double* data = new double[count];
	try
	{
		for (size_t x = 0; x < count; x++)
			data[x] = readDouble(min, max, flags, debugMsg);
	}
	catch (LimitException& ex) {
		delete[] data;
		throw ex;
	}
	return data;
}

void
BinaryReaderBase::readDoubleArray(double* ptr, size_t count)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readDouble();
}

void
BinaryReaderBase::readDoubleArray(double* ptr, size_t count, double min, double max, uint8_t flags, const std::string& debugMsg)
{
	for (size_t x = 0; x < count; x++)
		ptr[x] = readDouble(min, max, flags, debugMsg);
}

#endif
