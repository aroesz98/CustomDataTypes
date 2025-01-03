/*
 * CustomDataTypes
 * Author: Arkadiusz Szlanta
 * Date: 03 Jan 2025
 *
 * License:
 * Use at your own risk. The author(s) hold no responsibility for any damages
 * or losses resulting from the use of this software.
 *
 */

#ifndef CUSTOM_TYPES_HPP
#define CUSTOM_TYPES_HPP

#include <cstdint>

class int4_t
{
    public:
        int4_t(int8_t value = 0)
        {
            setValue(value);
        }

        int4_t& operator=(int8_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        int8_t getValue() const
        {
            return ((value & 0x0F) | ((value & 0x08) ? 0xF0 : 0x00));
        }

        void setValue(int8_t newValue)
        {
            value = (newValue & 0x0F);
        }

    private:
        int8_t value : 4;
};

class uint4_t
{
    public:
        uint4_t(uint8_t value = 0u)
        {
            setValue(value);
        }

        uint4_t& operator=(uint8_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        uint8_t getValue() const
        {
            return (value & 0x0Fu);
        }

        void setValue(uint8_t newValue)
        {
            value = (newValue & 0x0Fu);
        }

    private:
        uint8_t value : 4u;
};

class int10_t
{
    public:
        int10_t(int16_t value = 0)
        {
            setValue(value);
        }

        int10_t& operator=(int16_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        int16_t getValue() const
        {
            return ((value & 0x03FF) | ((value & 0x0200) ? 0xFC00 : 0));
        }

        void setValue(int16_t newValue)
        {
            value = (newValue & 0x03FF);
        }

    private:
        int16_t value : 10;
};

class uint10_t
{
    public:
        uint10_t(uint16_t value = 0u)
        {
            setValue(value);
        }

        uint10_t& operator=(uint16_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        uint16_t getValue() const
        {
            return (value & 0x03FFu);
        }

        void setValue(uint16_t newValue)
        {
            value = (newValue & 0x03FFu);
        }

    private:
        uint16_t value : 10u;
};

class int12_t
{
    public:
        int12_t(int16_t value = 0)
        {
            setValue(value);
        }

        int12_t& operator=(int16_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        int16_t getValue() const
        {
            return ((value & 0x0FFF) | ((value & 0x0800) ? 0xF000 : 0));
        }

        void setValue(int16_t newValue)
        {
            value = (newValue & 0x0FFF);
        }

    private:
        int16_t value : 12;
};

class uint12_t
{
    public:
        uint12_t(uint16_t value = 0u)
        {
            setValue(value);
        }

        uint12_t& operator=(uint16_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        uint16_t getValue() const
        {
            return (value & 0x0FFFu);
        }

        void setValue(uint16_t newValue)
        {
            value = (newValue & 0x0FFFu);
        }

    private:
        uint16_t value : 12u;
};

class int24_t
{
    public:
        int24_t(int32_t value = 0)
        {
            setValue(value);
        }

        int24_t& operator=(int32_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        int32_t getValue() const
        {
            return ((value & 0x00FFFFFF) | ((value & 0x00800000) ? 0xFF000000 : 0));
        }

        void setValue(int32_t newValue)
        {
            value = (newValue & 0x00FFFFFF);
        }

    private:
        int32_t value : 24;
};

class uint24_t
{
    public:
        uint24_t(uint32_t value = 0u)
        {
            setValue(value);
        }

        uint24_t& operator=(uint32_t newValue)
        {
            setValue(newValue);
            return *this;
        }

        uint32_t getValue() const
        {
            return (value & 0x00FFFFFFu);
        }

        void setValue(uint32_t newValue)
        {
            value = (newValue & 0x00FFFFFFu);
        }

    private:
        uint32_t value : 24u;
};

#endif /* CUSTOM_TYPES_HPP */
