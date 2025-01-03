# Custom Data Types Documentation

## Overview
This implementation provides custom integer types with non-standard bit widths: `int4_t`, `uint4_t`, `int10_t`, `uint10_t`, `int12_t`, `uint12_t`, `int24_t`, and `uint24_t`. These custom types are implemented as C++ classes to simulate 4-bit, 10-bit, 12-bit, and 24-bit integers, both signed and unsigned.

## Classes

## `int4_t`

A class representing a 4-bit signed integer.

**Public Methods:**
- `int4_t(int8_t value = 0)`: Constructor, initializes the value.
- `int4_t& operator=(int8_t newValue)`: Assignment operator to assign an `int8_t` value.
- `int8_t getValue() const`: Returns the stored value with proper sign extension.
- `void setValue(int8_t newValue)`: Sets the stored value, ensuring only the lower 4 bits are used.

**Private Members:**
- `int8_t value : 4`: 4-bit signed integer value stored in an 8-bit integer.

## `uint4_t`

A class representing a 4-bit unsigned integer.

**Public Methods:**
- `uint4_t(uint8_t value = 0u)`: Constructor, initializes the value.
- `uint4_t& operator=(uint8_t newValue)`: Assignment operator to assign a `uint8_t` value.
- `uint8_t getValue() const`: Returns the stored value.
- `void setValue(uint8_t newValue)`: Sets the stored value, ensuring only the lower 4 bits are used.

**Private Members:**
- `uint8_t value : 4u`: 4-bit unsigned integer value stored in an 8-bit integer.

## `int10_t`

A class representing a 10-bit signed integer.

**Public Methods:**
- `int10_t(int16_t value = 0)`: Constructor, initializes the value.
- `int10_t& operator=(int16_t newValue)`: Assignment operator to assign an `int16_t` value.
- `int16_t getValue() const`: Returns the stored value with proper sign extension.
- `void setValue(int16_t newValue)`: Sets the stored value, ensuring only the lower 10 bits are used.

**Private Members:**
- `int16_t value : 10`: 10-bit signed integer value stored in a 16-bit integer.

## `uint10_t`

A class representing a 10-bit unsigned integer.

**Public Methods:**
- `uint10_t(uint16_t value = 0u)`: Constructor, initializes the value.
- `uint10_t& operator=(uint16_t newValue)`: Assignment operator to assign a `uint16_t` value.
- `uint16_t getValue() const`: Returns the stored value.
- `void setValue(uint16_t newValue)`: Sets the stored value, ensuring only the lower 10 bits are used.

**Private Members:**
- `uint16_t value : 10u`: 10-bit unsigned integer value stored in a 16-bit integer.

## `int12_t`

A class representing a 12-bit signed integer.

**Public Methods:**
- `int12_t(int16_t value = 0)`: Constructor, initializes the value.
- `int12_t& operator=(int16_t newValue)`: Assignment operator to assign an `int16_t` value.
- `int16_t getValue() const`: Returns the stored value with proper sign extension.
- `void setValue(int16_t newValue)`: Sets the stored value, ensuring only the lower 12 bits are used.

**Private Members:**
- `int16_t value : 12`: 12-bit signed integer value stored in a 16-bit integer.

## `uint12_t`

A class representing a 12-bit unsigned integer.

**Public Methods:**
- `uint12_t(uint16_t value = 0u)`: Constructor, initializes the value.
- `uint12_t& operator=(uint16_t newValue)`: Assignment operator to assign a `uint16_t` value.
- `uint16_t getValue() const`: Returns the stored value.
- `void setValue(uint16_t newValue)`: Sets the stored value, ensuring only the lower 12 bits are used.

**Private Members:**
- `uint16_t value : 12`: 12-bit unsigned integer value stored in a 16-bit integer.

## `int24_t`

A class representing a 24-bit signed integer.

**Public Methods:**
- `int24_t(int32_t value = 0)`: Constructor, initializes the value.
- `int24_t& operator=(int32_t newValue)`: Assignment operator to assign an `int32_t` value.
- `int32_t getValue() const`: Returns the stored value with proper sign extension.
- `void setValue(int32_t newValue)`: Sets the stored value, ensuring only the lower 24 bits are used.

**Private Members:**
- `int32_t value : 24`: 24-bit signed integer value stored in a 32-bit integer.

## `uint24_t`

A class representing a 24-bit unsigned integer.

**Public Methods:**
- `uint24_t(uint32_t value = 0u)`: Constructor, initializes the value.
- `uint24_t& operator=(uint32_t newValue)`: Assignment operator to assign a `uint32_t` value.
- `uint32_t getValue() const`: Returns the stored value.
- `void setValue(uint32_t newValue)`: Sets the stored value, ensuring only the lower 24 bits are used.

**Private Members:**
- `uint32_t value : 24u`: 24-bit unsigned integer value stored in a 32-bit integer.

## Example Usage

Below is an example usage of the `int4_t`, `uint4_t`, `int10_t`, `uint10_t`, `int12_t`, `uint12_t`, `int24_t`, and `uint24_t` classes.

```cpp
#include <cstdint>
#include <cstdio>

int main() {
    // Example usage of int4_t
    int4_t myInt4 = -5;
    printf("int4_t value: %d\n", myInt4.getValue());

    // Example usage of uint4_t
    uint4_t myUInt4 = 10;
    printf("uint4_t value: %u\n", myUInt4.getValue());

    // Example usage of int10_t
    int10_t myInt10 = -512;
    printf("int10_t value: %d\n", myInt10.getValue());

    // Example usage of uint10_t
    uint10_t myUInt10 = 1023;
    printf("uint10_t value: %u\n", myUInt10.getValue());

    // Example usage of int12_t
    int12_t myInt12 = -2048;
    printf("int12_t value: %d\n", myInt12.getValue());

    // Example usage of uint12_t
    uint12_t myUInt12 = 4095;
    printf("uint12_t value: %u\n", myUInt12.getValue());

    // Example usage of int24_t
    int24_t myInt24 = -8388608;
    printf("int24_t value: %d\n", myInt24.getValue());

    // Example usage of uint24_t
    uint24_t myUInt24 = 16777215;
    printf("uint24_t value: %u\n", myUInt24.getValue());

    return 0;
}
```

## Suggested Use Cases

### Embedded Systems
These classes can be used in embedded systems where memory efficiency and operation on limited bit-width data are crucial. Examples include microcontrollers, industrial control systems, and IoT devices.

### Signal Processing
Limited bit-width variables can be useful in signal processing applications where managing precision and range of data is essential, such as processing sensor data or audio signals.

### Computer Graphics
In computer graphics applications, limited bit-width variables can be used to optimize the storage of color or lighting data, where every bit of memory is important.

### Data Compression
Limited bit-width variables can be useful in data compression algorithms, where the goal is to reduce the size of stored data without losing quality.

---
