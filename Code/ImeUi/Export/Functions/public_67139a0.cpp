#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67139a0);
CLANG_FORWARD_PROC_SYMBOL(public_6714270);
CLANG_FORWARD_PROC_SYMBOL(public_67142e0);
CLANG_FORWARD_PROC_SYMBOL(public_6714360);
CLANG_FORWARD_PROC_SYMBOL(public_6714470);
CLANG_FORWARD_PROC_SYMBOL(public_6714bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6714e20);
CLANG_FORWARD_PROC_SYMBOL(public_6715390);
CLANG_FORWARD_PROC_SYMBOL(public_67154c0);
CLANG_FORWARD_PROC_SYMBOL(public_6715aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6715d30);
CLANG_FORWARD_PROC_SYMBOL(public_6716982);
CLANG_FORWARD_PROC_SYMBOL(public_6716988);

#define public_6713a0b _public_6713a0b
#define public_6713a41 _public_6713a41
#define public_6713a4a _public_6713a4a
#define public_6713a92 _public_6713a92
#define public_6713aca _public_6713aca
#define public_6713af3 _public_6713af3
#define public_6713b1d _public_6713b1d
#define public_6713b2f _public_6713b2f
#define public_6713b5a _public_6713b5a
#define public_6713b73 _public_6713b73
#define public_6713b8d _public_6713b8d
#define public_6713ba2 _public_6713ba2
#define public_6713c42 _public_6713c42
#define public_6713d04 _public_6713d04
#define public_6713d0d _public_6713d0d
#define public_6713d1c _public_6713d1c
#define public_6713d7e _public_6713d7e
#define public_6713d92 _public_6713d92
#define public_6713dac _public_6713dac
#define public_6713db2 _public_6713db2
#define public_6713dfe _public_6713dfe
#define public_6713e1d _public_6713e1d
#define public_6713e40 _public_6713e40
#define public_6713e6d _public_6713e6d
#define public_6713e7f _public_6713e7f
#define public_6713f06 _public_6713f06
#define public_6713f2d _public_6713f2d
#define public_6713f2f _public_6713f2f
#define public_6713f3c _public_6713f3c
#define public_6713f40 _public_6713f40
#define public_6713f4e _public_6713f4e
#define public_6713f52 _public_6713f52
#define public_6713f5f _public_6713f5f
#define public_6713f77 _public_6713f77
#define public_6713fa0 _public_6713fa0
#define public_6713fa6 _public_6713fa6
#define public_6713fd8 _public_6713fd8
#define public_6714019 _public_6714019
#define public_6714063 _public_6714063
#define public_671407a _public_671407a
#define public_67140b0 _public_67140b0
#define public_67140c9 _public_67140c9
#define public_67140ff _public_67140ff
#define public_671410d _public_671410d
#define public_671411e _public_671411e
#define public_6714142 _public_6714142
#define public_6714149 _public_6714149
#define public_6714167 _public_6714167
#define public_6714169 _public_6714169
#define public_671416c _public_671416c
#define public_671416e _public_671416e

PROC_DECLARE(0x67139a0, internal_67139a0, public_67139a0);
extern "C" NAKED register_t __cdecl internal_67139a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x210
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x22C]
        xor ebp, ebp
        mov byte ptr ds : [esi], 0
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_671416e
        cmp dword ptr ds : [public_671cfa8], ebp
        jne public_671416e
        mov eax, dword ptr ss : [esp+0x220]
        push ebx
        cmp eax, 0x10D
        push edi
        ja public_6713ba2
        je public_6713b8d
        add eax, 0xFFFFFFAF
        cmp eax, 0xB4
        ja public_671416c
        mov edi, dword ptr ss : [esp+0x22C]
/*FIXUP xor ecx, ecx @0x67139fc*/
/*FIXUP mov cl, byte ptr ds : [eax+public_671418c] @0x67139fe*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_671417c] @0x6713a04*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6713a0b
  JMPTB cmp eax, 1
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 2
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 3
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 4
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 5
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 6
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 8
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 9
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x80
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x81
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x82
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x83
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x84
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x85
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x86
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x87
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x88
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x89
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x8A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x8B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x8C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x8D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x8E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x8F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x90
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x91
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x92
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x93
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x94
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x95
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x96
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x97
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x98
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x99
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x9A
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x9B
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x9C
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x9D
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x9E
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0x9F
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA0
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA1
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA2
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA3
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA4
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA5
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA6
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA7
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA8
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xA9
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xAA
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xAB
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xAC
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xAD
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xAE
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xAF
  JMPTB mov ecx, 1
  JMPTB je public_6713b2f
  JMPTB cmp eax, 0xB0
  JMPTB mov ecx, 2
  JMPTB je public_6713a92
  JMPTB cmp eax, 0xB1
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xB2
  JMPTB mov ecx, 3
  JMPTB je public_671416c
  JMPTB cmp eax, 0xB3
  JMPTB mov ecx, 1
  JMPTB je public_6713b2f
  JMPTB cmp eax, 0xB4
  JMPTB mov ecx, 2
  JMPTB je public_6713a92
  JMPTB int 3
        public_6713a0b : nop
        mov esi, dword ptr ds : [public_671cfc4]
        and esi, 0x3FF
        call public_67154c0
        mov eax, dword ptr ds : [public_671cfc4]
        mov edx, eax
        and edx, 0x3FF
        cmp esi, edx
        je public_6713a4a
        and eax, 0x3FF
        cmp eax, 0x12
        mov eax, 3
        je public_6713a41
        mov eax, dword ptr ds : [public_671b7b4]
        public_6713a41 : nop
        push eax
        call public_6715390
        add esp, 4
        public_6713a4a : nop
        call public_6715d30
        cmp dword ptr ds : [public_671cef4], ebp
        je public_671416c
        mov eax, dword ptr ds : [public_671cf98]
        push eax
        call public_6716988
        mov esi, eax
        cmp esi, ebp
        je public_671416c
        push ebp
        push esi
        call dword ptr ds : [public_671cef4]
        mov ecx, dword ptr ds : [public_671cf98]
        push esi
        push ecx
        call public_6716982
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713a92 : nop
        mov eax, dword ptr ds : [public_67190bc]
        mov esi, dword ptr ds : [public_67170f8]
        mov ebx, 0x80000000
        test ebx, eax
        jne public_6713aca
        cmp edi, 0x12
        je public_6713aca
        push 0x12
        call esi
        test ah, ah
        js public_6713aca
        mov edx, dword ptr ds : [public_67190bc]
        and edx, 0x1FF0000
        or edx, 0xC0000001
        push edx
        push 0x12
        jmp public_6713b1d
        public_6713aca : nop
        test dword ptr ds : [public_67190c0], ebx
        jne public_6713af3
        cmp edi, 0x11
        je public_6713af3
        push 0x11
        call esi
        test ah, ah
        js public_6713af3
        mov eax, dword ptr ds : [public_67190c0]
        and eax, 0x1FF0000
        or eax, 0xC0000001
        push eax
        push 0x11
        jmp public_6713b1d
        public_6713af3 : nop
        test dword ptr ds : [public_67190c4], ebx
        jne public_6713b2f
        cmp edi, 0x10
        je public_6713b2f
        push 0x10
        call esi
        test ah, ah
        js public_6713b2f
        mov ecx, dword ptr ds : [public_67190c4]
        and ecx, 0x1FF0000
        or ecx, 0xC0000001
        push ecx
        push 0x10
        public_6713b1d : nop
        push 0x101
        call dword ptr ds : [public_6717104]
        push eax
        call dword ptr ds : [public_67170f4]
        public_6713b2f : nop
        mov eax, edi
        sub eax, 0x10
        je public_6713b73
        dec eax
        je public_6713b5a
        dec eax
        jne public_671416c
        mov edx, dword ptr ss : [esp+0x230]
        pop edi
        pop ebx
        pop esi
        mov dword ptr ds : [public_67190bc], edx
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713b5a : nop
        mov eax, dword ptr ss : [esp+0x230]
        pop edi
        pop ebx
        mov dword ptr ds : [public_67190c0], eax
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713b73 : nop
        mov ecx, dword ptr ss : [esp+0x230]
        pop edi
        pop ebx
        pop esi
        mov dword ptr ds : [public_67190c4], ecx
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713b8d : nop
        call public_6714470
        pop edi
        mov byte ptr ds : [esi], 1
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713ba2 : nop
        cmp eax, 0x281
        ja public_6713e40
        je public_671416c
        sub eax, 0x10E
        je public_6713e1d
        dec eax
        jne public_671416c
        mov edx, dword ptr ss : [esp+0x224]
        mov byte ptr ds : [esi], 1
        push edx
        call public_6716988
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        je public_671416c
        mov ebx, dword ptr ss : [esp+0x230]
        mov esi, dword ptr ds : [public_6719374]
        test bh, 8
        je public_6713c42
        lea ecx, ss:[esp+0x20]
        push 0x100
        push ecx
        push 0x800
        push eax
        call dword ptr ds : [public_671cf94]
        shr eax, 1
        lea edx, ss:[esp+0x20]
        push edx
        mov word ptr ss : [esp+eax*2+0x24], bp
        call dword ptr ds : [public_671937c]
        push eax
        mov eax, dword ptr ds : [public_671cf98]
        push ebp
        push eax
        call public_6714360
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        push ecx
/*FIXUP push offset public_671b7c0 @0x6713c30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call esi
        call dword ptr ds : [public_671b3fc]
        call public_6714470
        public_6713c42 : nop
        test bl, 8
        je public_6713dfe
        mov edi, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x20]
        push 0x100
        push edx
        push 8
        push edi
        call dword ptr ds : [public_671cf94]
        shr eax, 1
        mov word ptr ss : [esp+eax*2+0x20], 0
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [public_671937c]
        mov ecx, dword ptr ds : [public_671cf98]
        push eax
        push 0
        push ecx
        call public_6714360
        add esp, 0xC
        lea edx, ss:[esp+0x20]
        push edx
/*FIXUP push offset public_671b7c0 @0x6713c8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call esi
        push 0x100
/*FIXUP push offset public_671b410 @0x6713c99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b410
        push 0x10
        push edi
        call dword ptr ds : [public_671cf94]
        cmp word ptr ds : [public_671cfc4], 0x404
        mov byte ptr ds : [eax+public_671b410], 0
        jne public_6713db2
        push 0
        call public_6714bd0
        add esp, 4
        test eax, eax
        jne public_6713db2
/*FIXUP push offset public_671b7c0 @0x6713ccf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [public_671937c]
        xor esi, esi
        cmp eax, esi
        je public_6713dac
        or edi, 0xFFFFFFFF
        lea edx, ds:[eax-1]
        mov dword ptr ds : [public_671ceec], 4
        mov dword ptr ds : [public_671ced8], edi
        mov ecx, 3
        mov eax, offset public_671c0d0
        public_6713d04 : nop
        cmp ecx, edx
        jle public_6713d0d
        mov word ptr ds : [eax], si
        jmp public_6713d1c
        public_6713d0d : nop
        mov bx, word ptr ds : [ecx*2+public_671b7c0]
        mov word ptr ds : [eax+2], si
        mov word ptr ds : [eax], bx
        public_6713d1c : nop
        dec ecx
        sub eax, 0x200
        cmp ecx, esi
        jge public_6713d04
        xor eax, eax
        push esi
        mov dword ptr ds : [public_671b7c0], eax
        mov dword ptr ds : [public_671cee8], 0xA
        mov dword ptr ds : [public_671b7c4], eax
        mov byte ptr ds : [public_671cfac], 1
        call public_6715aa0
        mov al, byte ptr ds : [public_671cfad]
        add esp, 4
        test al, al
        je public_6713db2
        mov eax, dword ptr ds : [public_671ceec]
        xor esi, esi
        cmp eax, esi
        mov dword ptr ds : [public_671b554], edi
        mov word ptr ds : [public_671b560], si
        jbe public_6713db2
        mov ebp, dword ptr ds : [public_6719370]
        mov ebx, dword ptr ds : [public_671937c]
        mov edi, offset public_671bad0
        public_6713d7e : nop
        cmp dword ptr ds : [public_671ced8], esi
        jne public_6713d92
/*FIXUP push offset public_671b560 @0x6713d86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b560
        call ebx
        mov dword ptr ds : [public_671b554], eax
        public_6713d92 : nop
        push edi
/*FIXUP push offset public_671b560 @0x6713d93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b560
        call ebp
        mov eax, dword ptr ds : [public_671ceec]
        inc esi
        add edi, 0x200
        cmp esi, eax
        jb public_6713d7e
        jmp public_6713db2
        public_6713dac : nop
        mov dword ptr ds : [public_671ceec], esi
        public_6713db2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push 0
        push 0
        push 0x80
        push ecx
        call dword ptr ds : [public_671cf94]
        mov dword ptr ds : [public_671cfa0], eax
        mov dword ptr ds : [public_671cfa4], eax
        cmp dword ptr ds : [public_671b400], 3
        jne public_6713dfe
        call dword ptr ds : [public_671b3fc]
        mov edx, dword ptr ds : [public_671cfa0]
        lea eax, ds : [edx*2+public_671b7c0]
        push eax
        call dword ptr ds : [public_671937c]
        push eax
        push 0x25
        call public_67142e0
        add esp, 8
        public_6713dfe : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x224]
        push ecx
        push edx
        call public_6716982
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713e1d : nop
        mov eax, dword ptr ds : [public_671cf98]
        push ebp
        push 1
        push eax
        call public_6714360
        add esp, 0xC
        call public_6714470
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713e40 : nop
        cmp eax, 0x282
        jne public_671416c
        mov ecx, dword ptr ss : [esp+0x22C]
        lea eax, ds:[ecx-3]
        cmp eax, 0xB
        ja public_6714169
/*FIXUP xor edx, edx @0x6713e5e*/
/*FIXUP mov dl, byte ptr ds : [eax+public_6714258] @0x6713e60*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6714244] @0x6713e66*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_6713e7f
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_671407a
  JMPTB cmp eax, 2
  JMPTB mov edx, 0
  JMPTB je public_6713e7f
  JMPTB cmp eax, 3
  JMPTB mov edx, 2
  JMPTB je public_6713e6d
  JMPTB cmp eax, 4
  JMPTB mov edx, 4
  JMPTB je public_6714169
  JMPTB cmp eax, 5
  JMPTB mov edx, 2
  JMPTB je public_6713e6d
  JMPTB cmp eax, 6
  JMPTB mov edx, 4
  JMPTB je public_6714169
  JMPTB cmp eax, 7
  JMPTB mov edx, 4
  JMPTB je public_6714169
  JMPTB cmp eax, 8
  JMPTB mov edx, 4
  JMPTB je public_6714169
  JMPTB cmp eax, 9
  JMPTB mov edx, 4
  JMPTB je public_6714169
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 4
  JMPTB je public_6714169
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 3
  JMPTB je public_67140b0
  JMPTB int 3
        public_6713e6d : nop
        call public_67154c0
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6713e7f : nop
        mov eax, dword ptr ss : [esp+0x224]
        mov byte ptr ds : [public_671cfbb], 1
        push eax
        mov byte ptr ds : [esi], 1
        call public_6716988
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        je public_671416c
        lea ecx, ss:[esp+0x10]
        mov byte ptr ds : [public_671cfac], 0
        push ecx
        push ebp
        push eax
        call dword ptr ds : [public_671ced0]
        add esp, 0xC
        test eax, eax
        je public_671416c
        mov esi, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        cmp word ptr ds : [public_671cfc4], 0x804
        mov dword ptr ss : [esp+0x14], ebp
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [public_671ced8], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [public_671ceec], eax
        jne public_6713f52
        push ebp
        call public_6714bd0
        add esp, 4
        test eax, eax
        je public_6713f4e
        mov eax, dword ptr ds : [public_671ceec]
        xor edi, edi
        xor esi, esi
        test eax, eax
        jbe public_6713f40
        mov ebx, 0x18
        public_6713f06 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+eax]
        add ecx, eax
        push ecx
        call dword ptr ds : [public_671937c]
        inc eax
        lea ecx, ds:[eax+edi]
        cmp ecx, 0x12
        jbe public_6713f2d
        cmp esi, dword ptr ds : [public_671ced8]
        ja public_6713f3c
        mov ebp, esi
        mov edi, eax
        jmp public_6713f2f
        public_6713f2d : nop
        mov edi, ecx
        public_6713f2f : nop
        mov eax, dword ptr ds : [public_671ceec]
        inc esi
        add ebx, 4
        cmp esi, eax
        jb public_6713f06
        public_6713f3c : nop
        mov dword ptr ss : [esp+0x14], ebp
        public_6713f40 : nop
        sub esi, ebp
        mov dword ptr ds : [public_671cee8], esi
        mov esi, dword ptr ss : [esp+0x10]
        jmp public_6713f77
        public_6713f4e : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_6713f52 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, 0xA
        jb public_6713f5f
        mov ecx, 0xA
        public_6713f5f : nop
        mov eax, dword ptr ds : [public_671ced8]
        xor edx, edx
        div ecx
        mov dword ptr ds : [public_671cee8], ecx
        mov ebp, eax
        imul ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        public_6713f77 : nop
        cmp word ptr ds : [public_671cfc4], 0x804
        jne public_6713fa0
        push 0
        call public_6714bd0
        mov esi, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        jne public_6713fa0
        mov dword ptr ds : [public_671ced8], 0xFFFFFFFF
        jmp public_6713fa6
        public_6713fa0 : nop
        sub dword ptr ds : [public_671ced8], ebp
        public_6713fa6 : nop
        mov ecx, 0x500
        xor eax, eax
        mov edi, offset public_671bad0
        mov dword ptr ss : [esp+0x1C], eax
        rep stosd
        cmp ebp, dword ptr ds : [esi+8]
        jae public_6714019
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, 1
        sub eax, edi
        mov ebx, offset public_671bad0
        lea ebp, ds:[edi*4+0x18]
        mov dword ptr ss : [esp+0x14], eax
        public_6713fd8 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_671cee8]
        cmp edx, eax
        jae public_6714019
        mov eax, dword ptr ds : [esi+ebp]
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, esi
        add ecx, edi
        push eax
        push ecx
        push ebx
        call public_6714270
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+8]
        add ebp, 4
        add ebx, 0x200
        inc edi
        cmp edi, eax
        jb public_6713fd8
        public_6714019 : nop
        push esi
        call dword ptr ds : [public_671b404]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x228]
        add esp, 4
        push edx
        push eax
        call public_6716982
        mov eax, dword ptr ds : [public_671cfc4]
        mov ecx, eax
        and ecx, 0x3FF
        cmp ecx, 0x12
        je public_6714063
        cmp ax, 0x404
        jne public_671416c
        push 0
        call public_6714bd0
        add esp, 4
        test eax, eax
        jne public_671416c
        public_6714063 : nop
        pop edi
        pop ebx
        pop esi
        mov dword ptr ds : [public_671ced8], 0xFFFFFFFF
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_671407a : nop
        mov al, byte ptr ds : [public_671cfac]
        mov byte ptr ds : [public_671cfbb], 0
        test al, al
        jne public_6714169
        mov ecx, 0x500
        xor eax, eax
        mov edi, offset public_671bad0
        mov dword ptr ds : [public_671ceec], ebp
        rep stosd
        pop edi
        mov byte ptr ds : [esi], 1
        pop ebx
        pop esi
        pop ebp
        add esp, 0x210
        ret 
        public_67140b0 : nop
        mov al, byte ptr ds : [public_671cfbb]
        test al, al
        jne public_67140c9
        mov edx, dword ptr ss : [esp+0x224]
        push edx
        call public_6714e20
        add esp, 4
        public_67140c9 : nop
        push ebp
        call public_6714bd0
        add esp, 4
        cmp eax, 0x5000404
        ja public_671411e
        je public_6714149
        cmp eax, 0x4020804
        ja public_67140ff
        je public_671410d
        cmp eax, 0x4010804
        je public_671410d
        cmp eax, 0x4020404
        je public_671410d
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_67140ff : nop
        cmp eax, 0x4030404
        je public_671410d
        cmp eax, 0x4040404
        jne public_671416c
        public_671410d : nop
        mov eax, dword ptr ss : [esp+0x230]
        cmp eax, 1
        je public_6714169
        cmp eax, 2
        jmp public_6714167
        public_671411e : nop
        cmp eax, 0x5030804
        ja public_6714142
        je public_6714149
        cmp eax, 0x5010404
        je public_6714149
        cmp eax, 0x5020404
        je public_6714149
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        public_6714142 : nop
        cmp eax, 0x6000404
        jne public_671416c
        public_6714149 : nop
        mov eax, dword ptr ss : [esp+0x230]
        cmp eax, 0x10
        je public_6714169
        cmp eax, 0x11
        je public_6714169
        cmp eax, 0x1A
        je public_6714169
        cmp eax, 0x1B
        je public_6714169
        cmp eax, 0x1C
        public_6714167 : nop
        jne public_671416c
        public_6714169 : nop
        mov byte ptr ds : [esi], 1
        public_671416c : nop
        pop edi
        pop ebx
        public_671416e : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x210
        ret 
        UNREACHABLE_TRAP(0x67139a0)
        ASM_EXPORT_ENTRY_FIRST(0x6713a0b, public_6713a0b)
        ASM_EXPORT_ENTRY(0x6713a92, public_6713a92)
        ASM_EXPORT_ENTRY(0x6713b2f, public_6713b2f)
        ASM_EXPORT_ENTRY(0x6713e6d, public_6713e6d)
        ASM_EXPORT_ENTRY(0x6713e7f, public_6713e7f)
        ASM_EXPORT_ENTRY(0x671407a, public_671407a)
        ASM_EXPORT_ENTRY(0x67140b0, public_67140b0)
        ASM_EXPORT_ENTRY(0x6714169, public_6714169)
        ASM_EXPORT_ENTRY_LAST(0x671416c, public_671416c)
    }
}

#undef public_6713a0b
#undef public_6713a41
#undef public_6713a4a
#undef public_6713a92
#undef public_6713aca
#undef public_6713af3
#undef public_6713b1d
#undef public_6713b2f
#undef public_6713b5a
#undef public_6713b73
#undef public_6713b8d
#undef public_6713ba2
#undef public_6713c42
#undef public_6713d04
#undef public_6713d0d
#undef public_6713d1c
#undef public_6713d7e
#undef public_6713d92
#undef public_6713dac
#undef public_6713db2
#undef public_6713dfe
#undef public_6713e1d
#undef public_6713e40
#undef public_6713e6d
#undef public_6713e7f
#undef public_6713f06
#undef public_6713f2d
#undef public_6713f2f
#undef public_6713f3c
#undef public_6713f40
#undef public_6713f4e
#undef public_6713f52
#undef public_6713f5f
#undef public_6713f77
#undef public_6713fa0
#undef public_6713fa6
#undef public_6713fd8
#undef public_6714019
#undef public_6714063
#undef public_671407a
#undef public_67140b0
#undef public_67140c9
#undef public_67140ff
#undef public_671410d
#undef public_671411e
#undef public_6714142
#undef public_6714149
#undef public_6714167
#undef public_6714169
#undef public_671416c
#undef public_671416e

#pragma init_seg(compiler)
extern "C" void const* const public_6713a0b = __AsmFindLabelExport(&internal_67139a0, 0x6713a0b);
extern "C" void const* const public_6713a92 = __AsmFindLabelExport(&internal_67139a0, 0x6713a92);
extern "C" void const* const public_6713b2f = __AsmFindLabelExport(&internal_67139a0, 0x6713b2f);
extern "C" void const* const public_6713e6d = __AsmFindLabelExport(&internal_67139a0, 0x6713e6d);
extern "C" void const* const public_6713e7f = __AsmFindLabelExport(&internal_67139a0, 0x6713e7f);
extern "C" void const* const public_671407a = __AsmFindLabelExport(&internal_67139a0, 0x671407a);
extern "C" void const* const public_67140b0 = __AsmFindLabelExport(&internal_67139a0, 0x67140b0);
extern "C" void const* const public_6714169 = __AsmFindLabelExport(&internal_67139a0, 0x6714169);
extern "C" void const* const public_671416c = __AsmFindLabelExport(&internal_67139a0, 0x671416c);
