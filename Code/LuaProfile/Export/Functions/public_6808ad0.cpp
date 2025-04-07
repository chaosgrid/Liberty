#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807210);
CLANG_FORWARD_PROC_SYMBOL(public_68074b0);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_6807b00);
CLANG_FORWARD_PROC_SYMBOL(public_6807b80);
CLANG_FORWARD_PROC_SYMBOL(public_6807ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6808ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6808ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6808d80);
CLANG_FORWARD_PROC_SYMBOL(public_6808e40);

#define public_6808af8 _public_6808af8
#define public_6808b0d _public_6808b0d
#define public_6808b3a _public_6808b3a
#define public_6808b51 _public_6808b51
#define public_6808b5c _public_6808b5c
#define public_6808b5f _public_6808b5f
#define public_6808b86 _public_6808b86
#define public_6808bac _public_6808bac
#define public_6808bcd _public_6808bcd

PROC_DECLARE(0x6808ad0, internal_6808ad0, public_6808ad0);
extern "C" NAKED register_t __cdecl internal_6808ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xFFFFFFC5
        cmp eax, 0xD9
        ja public_6808bcd
/*FIXUP xor ecx, ecx @0x6808ae9*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6808c00] @0x6808aeb*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6808bf0] @0x6808af1*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6808af8
  JMPTB cmp eax, 1
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 2
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 3
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 4
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 5
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 6
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 8
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 9
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 1
  JMPTB je public_6808bac
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 0
  JMPTB je public_6808af8
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x80
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x81
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x82
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x83
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x84
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x85
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x86
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x87
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x88
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x89
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x8A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x8B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x8C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x8D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x8E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x8F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x90
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x91
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x92
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x93
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x94
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x95
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x96
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x97
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x98
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x99
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x9A
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x9B
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x9C
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x9D
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x9E
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0x9F
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA0
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA1
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA2
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA3
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA4
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA5
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA6
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA7
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA8
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xA9
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xAA
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xAB
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xAC
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xAD
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xAE
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xAF
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB0
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB1
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB2
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB3
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB4
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB5
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB6
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB7
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB8
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xB9
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xBA
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xBB
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xBC
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xBD
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xBE
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xBF
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC0
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC1
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC2
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC3
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC4
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC5
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC6
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC7
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC8
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xC9
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xCA
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xCB
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xCC
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xCD
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xCE
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xCF
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD0
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD1
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD2
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD3
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD4
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD5
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD6
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD7
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD8
  JMPTB mov ecx, 3
  JMPTB je public_6808bcd
  JMPTB cmp eax, 0xD9
  JMPTB mov ecx, 2
  JMPTB je public_6808b0d
  JMPTB int 3
        public_6808af8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        pop esi
        add esp, 8
        ret 
        public_6808b0d : nop
        lea eax, ss:[esp+4]
        push eax
        push esi
        call public_6807b80
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        cmp eax, 0x3D
        jne public_6808b86
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0
        je public_6808b51
        dec eax
        je public_6808b3a
        push esi
        call public_6807210
        add esp, 4
        jmp public_6808b5f
        public_6808b3a : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+edx*4+0x124]
        push eax
        push esi
        call public_6807ff0
        jmp public_6808b5c
        public_6808b51 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        push esi
        call public_68074b0
        public_6808b5c : nop
        add esp, 8
        public_6808b5f : nop
        push esi
        call public_6806a20
        push esi
        call public_6807b00
        push esi
        call public_6808ce0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], 1
        pop esi
        add esp, 8
        ret 
        public_6808b86 : nop
        lea edx, ss:[esp+4]
        push edx
        push esi
        call public_6807630
        push esi
        call public_6808d80
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], 0
        pop esi
        add esp, 8
        ret 
        public_6808bac : nop
        push esi
        call public_6808e40
        push esi
        call public_6808ce0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], 1
        pop esi
        add esp, 8
        ret 
        public_6808bcd : nop
        push esi
        call public_6807b00
        push esi
        call public_6808d80
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], 0
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6808ad0)
        ASM_EXPORT_ENTRY_FIRST(0x6808af8, public_6808af8)
        ASM_EXPORT_ENTRY(0x6808b0d, public_6808b0d)
        ASM_EXPORT_ENTRY(0x6808bac, public_6808bac)
        ASM_EXPORT_ENTRY_LAST(0x6808bcd, public_6808bcd)
    }
}

#undef public_6808af8
#undef public_6808b0d
#undef public_6808b3a
#undef public_6808b51
#undef public_6808b5c
#undef public_6808b5f
#undef public_6808b86
#undef public_6808bac
#undef public_6808bcd

#pragma init_seg(compiler)
extern "C" void const* const public_6808af8 = __AsmFindLabelExport(&internal_6808ad0, 0x6808af8);
extern "C" void const* const public_6808b0d = __AsmFindLabelExport(&internal_6808ad0, 0x6808b0d);
extern "C" void const* const public_6808bac = __AsmFindLabelExport(&internal_6808ad0, 0x6808bac);
extern "C" void const* const public_6808bcd = __AsmFindLabelExport(&internal_6808ad0, 0x6808bcd);
