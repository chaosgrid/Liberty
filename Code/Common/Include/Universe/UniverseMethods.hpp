#pragma once


namespace Universe
{
    COMMON_DEC ISystem* GetFirstSystem();
    COMMON_DEC IBase* GetNextBase();
    COMMON_DEC ISystem* GetNextSystem();
    COMMON_DEC void Shutdown();
    COMMON_DEC bool Startup(const char*);
    COMMON_DEC const IZone* first_zone(unsigned int);
    COMMON_DEC IBase* __cdecl GetFirstBase();
    COMMON_DEC IBase* __cdecl GetNextBase();
    COMMON_DEC unsigned int __cdecl get_base_id(const char*);
    COMMON_DEC IBase* get_base(unsigned int);
    COMMON_DEC unsigned int get_base_id(const char*);
    COMMON_DEC void get_filename(char*, const char*);
    COMMON_DEC unsigned int get_gate_system(unsigned int);
    COMMON_DEC IZone* get_non_const_zone(unsigned int, unsigned int);
    COMMON_DEC IZone* get_non_const_zone(unsigned int, const char*);
    COMMON_DEC const ISystem* get_system(unsigned int);
    COMMON_DEC unsigned int get_system_id(const char*);
    COMMON_DEC const IZone* get_zone(unsigned int);
    COMMON_DEC const IZone* get_zone(unsigned int, const char*);
    COMMON_DEC const IZone* next_zone(const IZone*);
    COMMON_DEC unsigned int num_bases();
    COMMON_DEC unsigned int num_systems();
}