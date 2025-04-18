#pragma once
class INI_Reader
{
    public:
    COMMON_DEC INI_Reader(const INI_Reader&);
    COMMON_DEC INI_Reader();
    COMMON_DEC ~INI_Reader();
    COMMON_DEC INI_Reader& operator=(const INI_Reader&);
    COMMON_DEC void close();
    COMMON_DEC bool find_header(const char*);
    COMMON_DEC bool get_bool(unsigned int);
    COMMON_DEC const char* get_file_name() const;
    COMMON_DEC const char* get_header_ptr();
    COMMON_DEC const char* get_indexed_value(unsigned int);
    COMMON_DEC int get_line_num() const;
    COMMON_DEC const char* get_line_ptr();
    COMMON_DEC const char* get_name() const;
    COMMON_DEC const char* get_name_ptr();
    COMMON_DEC unsigned int get_num_parameters() const;
    COMMON_DEC void get_state(struct State&) const;
    COMMON_DEC bool get_value_bool(unsigned int);
    COMMON_DEC float get_value_float(unsigned int);
    COMMON_DEC int get_value_int(unsigned int);
    COMMON_DEC const char* get_value_ptr();
    COMMON_DEC const char* get_value_string(unsigned int);
    COMMON_DEC const char* get_value_string();
    COMMON_DEC const unsigned short* get_value_wstring();
    COMMON_DEC FLHookCore::Vector get_vector();
    COMMON_DEC bool is_end() const;
    COMMON_DEC bool is_header(const char*);
    COMMON_DEC bool is_number(const char*) const;
    COMMON_DEC bool is_value(const char*);
    COMMON_DEC bool is_value_empty(unsigned int);
    COMMON_DEC void log_link(const char*) const;
    COMMON_DEC bool open(const char*, bool);
    COMMON_DEC bool open_memory(const char*, unsigned int);
    COMMON_DEC bool read_header();
    COMMON_DEC bool read_value();
    COMMON_DEC void reset();
    COMMON_DEC void seek(unsigned int);
    COMMON_DEC void set_state(const State&);
    COMMON_DEC unsigned int tell() const;
    COMMON_DEC double value_num(unsigned int);

    public:
    unsigned char data[5480];
};