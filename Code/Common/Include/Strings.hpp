#pragma once

struct CacheString
{
    COMMON_DEC void clear();

    public:
    char* value;
};

struct ID_String
{
    COMMON_DEC bool IsEmpty() const;
    COMMON_DEC void clear();
    COMMON_DEC const char* get_string() const;

    public:
    uint id;
    unsigned char data[128];
};
