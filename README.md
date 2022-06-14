# A C++ Binary Reader

This was created to read integers and floats directly from files. It also includes debug functions which limits numbers to certian ranges. This is aimed at people who are in the process of mapping a file's contents.

# Implementation

## Classes

There is a base reader `BinaryReaderBase` that contains data casting methods, but the methods to read data are abstract. Each child if this class is only expected to read bytes and manage the current position. This allows for more implemenatations to be easily added. Currently there are two implementations - `BinaryReaderFile`: which reads data directly from the file, and `BinaryReaderBuffered`: which reads data from an array.

## Scalars

Pretty simple - every data cast uses `reinterpret_cast`.

## Arrays

Each array read uses the appropriate scalar function to get data. There are 2 methods to read arrays: 
1. No destination pointer is provided - a new array is constructed and returned.
1. A pointer is provided - data is read directly into the destination.

## Floats
[There is a *lot* of information on why comparing floats is difficult.](https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/) This library tries to make the process as fluid as possible, but it ain't perfect. Float comparisons here are used for debugging anyway, so it doesn't need to be.

This library uses ULP comparisons (casting to an unsigned int) and adds flags to account for special floats. These flags are defined in `BinaryReaderBase.h` and are:
* `CONV_INF` - Converts infinites to int16 min and max, respecively.
* `CONV_ZERO` - Converts -0 to 0 for comparisons.
* `FAIL_SUBNORM` - Throws an exception if a subnormal float is read.

## Little Endian vs Big Endian

Most computers use Little Endian, so by default the read methods are LE. There are however, Big Endian versions of all scalar reads that end with *BE*.
