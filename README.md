# C++ Binary Reader

This was created to read integers and floats from files. It also includes debug functions which limits numbers to certian ranges, expected to be used during the process of mapping a file's contents.

# Implementation

## Classes

There is a base reader `BinaryReaderBase` that contains data casting methods. Reading bytes from files is abstracted to child classes. This allows for more reading implemenatations to be easily added. Currently there are two implementations - `BinaryReaderFile`: which reads data directly from the file, and `BinaryReaderBuffered`: which reads data from an array.

## Scalars

Pretty simple - data is read from the file directly into the primitive type.

## Arrays

Each array read calls their respective scalar function. Each array method has 2 versions: 
1. No destination pointer is provided - a new array is constructed and returned.
1. A pointer is provided - data is read directly into the destination.

## Floats
[There is a *lot* of information on why comparing floats is difficult.](https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/) This project casts floats to signed integers for comparisons, known as ULP comparisons. It also uses flags to account for special floats. These flags are defined in `BinaryReaderBase.h` and are:
* `CONV_INF` - Converts +/- infinity to their respective integer min and max.
* `CONV_ZERO` - Converts -0 to 0
* `FAIL_SUBNORM` - Throws an exception if a subnormal float is read.

## Little Endian vs Big Endian

Most computers use Little Endian, so all read methods are LE. Big endian methods are identified with *BE* at the end.

Ex. `readUInt32` and `readUInt32BE`
