#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68068a0);
CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6806e60);
CLANG_FORWARD_PROC_SYMBOL(public_6806e90);
CLANG_FORWARD_PROC_SYMBOL(public_6806fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6807020);
CLANG_FORWARD_PROC_SYMBOL(public_6807060);
CLANG_FORWARD_PROC_SYMBOL(public_68070c0);
CLANG_FORWARD_PROC_SYMBOL(public_6807120);
CLANG_FORWARD_PROC_SYMBOL(public_68071d0);
CLANG_FORWARD_PROC_SYMBOL(public_6807210);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_68072a0);
CLANG_FORWARD_PROC_SYMBOL(public_6807370);
CLANG_FORWARD_PROC_SYMBOL(public_68073e0);
CLANG_FORWARD_PROC_SYMBOL(public_6807450);
CLANG_FORWARD_PROC_SYMBOL(public_6807770);
CLANG_FORWARD_PROC_SYMBOL(public_6807980);
CLANG_FORWARD_PROC_SYMBOL(public_6807b00);
CLANG_FORWARD_PROC_SYMBOL(public_6808140);
CLANG_FORWARD_PROC_SYMBOL(public_6808880);
CLANG_FORWARD_PROC_SYMBOL(public_68088e0);
CLANG_FORWARD_PROC_SYMBOL(public_6808920);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6806ae0 _public_6806ae0
#define public_6806af6 _public_6806af6
#define public_6806bbc _public_6806bbc
#define public_6806be8 _public_6806be8
#define public_6806c2e _public_6806c2e
#define public_6806c72 _public_6806c72
#define public_6806cbb _public_6806cbb
#define public_6806cee _public_6806cee
#define public_6806d0a _public_6806d0a
#define public_6806d2d _public_6806d2d
#define public_6806d36 _public_6806d36

PROC_DECLARE(0x6806ab0, internal_6806ab0, public_6806ab0);
extern "C" NAKED register_t __cdecl internal_6806ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, dword ptr ds : [ebx+8]
        add eax, 0xFFFFFFDB
        cmp eax, 0xF8
        push esi
        mov esi, dword ptr ds : [ebx+0x1C]
        ja public_6806d2d
/*FIXUP xor ecx, ecx @0x6806ad1*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6806d64] @0x6806ad3*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6806d40] @0x6806ad9*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6806cbb
  JMPTB cmp eax, 1
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 2
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 3
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 4
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 5
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 6
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 7
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 8
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 9
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 1
  JMPTB je public_6806d36
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x80
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x81
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x82
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x83
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x84
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x85
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x86
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x87
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x88
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x89
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x8A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x8B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x8C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x8D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x8E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x8F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x90
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x91
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x92
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x93
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x94
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x95
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x96
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x97
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x98
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x99
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x9A
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x9B
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x9C
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x9D
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x9E
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0x9F
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA0
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA1
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA2
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA3
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA4
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA5
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA6
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA7
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA8
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xA9
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xAA
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xAB
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xAC
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xAD
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xAE
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xAF
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB0
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB1
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB2
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB3
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB4
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB5
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB6
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB7
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB8
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xB9
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xBA
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xBB
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xBC
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xBD
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xBE
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xBF
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC0
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC1
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC2
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC3
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC4
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC5
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC6
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC7
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC8
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xC9
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xCA
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xCB
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xCC
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xCD
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xCE
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xCF
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD0
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD1
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD2
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD3
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD4
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD5
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD6
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD7
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD8
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xD9
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xDA
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xDB
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xDC
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xDD
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xDE
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xDF
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xE0
  JMPTB mov ecx, 2
  JMPTB je public_6806bbc
  JMPTB cmp eax, 0xE1
  JMPTB mov ecx, 1
  JMPTB je public_6806d36
  JMPTB cmp eax, 0xE2
  JMPTB mov ecx, 1
  JMPTB je public_6806d36
  JMPTB cmp eax, 0xE3
  JMPTB mov ecx, 1
  JMPTB je public_6806d36
  JMPTB cmp eax, 0xE4
  JMPTB mov ecx, 3
  JMPTB je public_6806c2e
  JMPTB cmp eax, 0xE5
  JMPTB mov ecx, 4
  JMPTB je public_6806ae0
  JMPTB cmp eax, 0xE6
  JMPTB mov ecx, 5
  JMPTB je public_6806c72
  JMPTB cmp eax, 0xE7
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xE8
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xE9
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xEA
  JMPTB mov ecx, 6
  JMPTB je public_6806be8
  JMPTB cmp eax, 0xEB
  JMPTB mov ecx, 1
  JMPTB je public_6806d36
  JMPTB cmp eax, 0xEC
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xED
  JMPTB mov ecx, 1
  JMPTB je public_6806d36
  JMPTB cmp eax, 0xEE
  JMPTB mov ecx, 7
  JMPTB je public_6806af6
  JMPTB cmp eax, 0xEF
  JMPTB mov ecx, 0
  JMPTB je public_6806cbb
  JMPTB cmp eax, 0xF0
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF1
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF2
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF3
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF4
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF5
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF6
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF7
  JMPTB mov ecx, 8
  JMPTB je public_6806d2d
  JMPTB cmp eax, 0xF8
  JMPTB mov ecx, 1
  JMPTB je public_6806d36
  JMPTB int 3
        public_6806ae0 : nop
        push esi
        push ebx
        call public_6807980
        add esp, 8
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806af6 : nop
        mov edx, dword ptr ss : [ebp]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        push ebx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x18], edi
        call public_6806a20
        push ebx
        call public_6807370
        push 0x105
        push ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_6807230
        push ebx
        call public_68073e0
        push esi
        push 0x113
        push 0x108
        push ebx
        call public_68072a0
        mov esi, dword ptr ss : [esp+0x34]
        sub esi, edi
        push esi
        push ebp
        mov dword ptr ss : [esp+0x44], esi
        call public_68068a0
        mov eax, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, esi
        lea esi, ds:[eax+edi]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x50]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x3C]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax+0x10]
        sub ecx, esi
        push ecx
        lea ecx, ds:[eax+edx]
        push ecx
        add eax, esi
        push eax
        call dword ptr ds : [public_680c02c]
        mov edx, dword ptr ss : [ebp+8]
        sub edx, dword ptr ss : [esp+0x50]
        push edx
        push 0x32
        push esi
        push ebx
        call public_6807120
        add esp, 0x48
        lea esi, ds:[esi+eax+2]
        push esi
        push 0x36
        push ebx
        call public_68071d0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806bbc : nop
        push ebx
        call public_6806a20
        push ebx
        call public_68073e0
        push esi
        push 0x105
        push 0x108
        push ebx
        call public_68072a0
        add esp, 0x18
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806be8 : nop
        mov ebp, dword ptr ss : [ebp+8]
        push ebx
        call public_6806a20
        push ebx
        call public_68073e0
        push esi
        push 0x10F
        push 0x112
        push ebx
        call public_68072a0
        push ebx
        call public_6807b00
        push ebp
        push 0x38
        push ebx
        call public_68071d0
        push 0xFFFFFFFF
        push ebx
        call public_6806990
        add esp, 0x30
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806c2e : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6806d36
        push ebx
        call public_6806e90
        push ebx
        call public_6806a20
        lea eax, ss:[esp+0x1C]
        push eax
        push ebx
        call public_6807450
        push esi
        push eax
        push ebx
        call public_6807770
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebx
        call public_68070c0
        add esp, 0x24
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806c72 : nop
        push ebx
        call public_6806e90
        push ebx
        call public_6806a20
        push ebx
        call public_6808880
        lea edx, ss:[esp+0x20]
        push edx
        push ebx
        mov esi, eax
        call public_68088e0
        mov edx, dword ptr ss : [ebp+0x14]
        add edx, esi
        push esi
        push ebx
        mov dword ptr ss : [ebp+0x14], edx
        call public_6806e60
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        push ebx
        call public_6807060
        add esp, 0x28
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806cbb : nop
        push ebx
        call public_6806e90
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        call public_6808140
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        cmp eax, 4
        jne public_6806d0a
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_6806cee
/*FIXUP push offset public_680db60 @0x6806ce0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db60
        push ebx
        call public_680a850
        add esp, 8
        public_6806cee : nop
        mov edx, dword ptr ss : [esp+0x18]
        push 0
        push edx
        push ebx
        call public_6807020
        add esp, 0xC
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806d0a : nop
        push 1
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        call public_6808920
        push eax
        push ebx
        call public_6806fe0
        add esp, 0x14
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6806d2d : nop
        push ebx
        call public_6807210
        add esp, 4
        public_6806d36 : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6806ab0)
        ASM_EXPORT_ENTRY_FIRST(0x6806ae0, public_6806ae0)
        ASM_EXPORT_ENTRY(0x6806af6, public_6806af6)
        ASM_EXPORT_ENTRY(0x6806bbc, public_6806bbc)
        ASM_EXPORT_ENTRY(0x6806be8, public_6806be8)
        ASM_EXPORT_ENTRY(0x6806c2e, public_6806c2e)
        ASM_EXPORT_ENTRY(0x6806c72, public_6806c72)
        ASM_EXPORT_ENTRY(0x6806cbb, public_6806cbb)
        ASM_EXPORT_ENTRY(0x6806d2d, public_6806d2d)
        ASM_EXPORT_ENTRY_LAST(0x6806d36, public_6806d36)
    }
}

#undef public_6806ae0
#undef public_6806af6
#undef public_6806bbc
#undef public_6806be8
#undef public_6806c2e
#undef public_6806c72
#undef public_6806cbb
#undef public_6806cee
#undef public_6806d0a
#undef public_6806d2d
#undef public_6806d36

#pragma init_seg(compiler)
extern "C" void const* const public_6806ae0 = __AsmFindLabelExport(&internal_6806ab0, 0x6806ae0);
extern "C" void const* const public_6806af6 = __AsmFindLabelExport(&internal_6806ab0, 0x6806af6);
extern "C" void const* const public_6806bbc = __AsmFindLabelExport(&internal_6806ab0, 0x6806bbc);
extern "C" void const* const public_6806be8 = __AsmFindLabelExport(&internal_6806ab0, 0x6806be8);
extern "C" void const* const public_6806c2e = __AsmFindLabelExport(&internal_6806ab0, 0x6806c2e);
extern "C" void const* const public_6806c72 = __AsmFindLabelExport(&internal_6806ab0, 0x6806c72);
extern "C" void const* const public_6806cbb = __AsmFindLabelExport(&internal_6806ab0, 0x6806cbb);
extern "C" void const* const public_6806d2d = __AsmFindLabelExport(&internal_6806ab0, 0x6806d2d);
extern "C" void const* const public_6806d36 = __AsmFindLabelExport(&internal_6806ab0, 0x6806d36);
