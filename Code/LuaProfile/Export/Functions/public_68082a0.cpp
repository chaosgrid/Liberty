#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_6807710);
CLANG_FORWARD_PROC_SYMBOL(public_6807b00);
CLANG_FORWARD_PROC_SYMBOL(public_68082a0);
CLANG_FORWARD_PROC_SYMBOL(public_6808480);

#define public_68082bb _public_68082bb
#define public_68082ca _public_68082ca
#define public_68082e5 _public_68082e5
#define public_680830b _public_680830b
#define public_6808342 _public_6808342
#define public_6808357 _public_6808357
#define public_680835a _public_680835a
#define public_680835d _public_680835d
#define public_680836e _public_680836e

PROC_DECLARE(0x68082a0, internal_68082a0, public_68082a0);
extern "C" NAKED register_t __cdecl internal_68082a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xFFFFFFD8
        cmp eax, 0xF4
        push edi
        ja public_680836e
        mov edi, dword ptr ss : [esp+0x10]
/*FIXUP public_68082bb : nop
        xor ecx, ecx @0x68082bb*/
  FIXUP public_68082bb :
/*FIXUP mov cl, byte ptr ds : [eax+public_6808388] @0x68082bd*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6808374] @0x68082c3*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6808342
  JMPTB cmp eax, 1
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 2
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 4
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 5
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 6
  JMPTB mov ecx, 1
  JMPTB je public_68082ca
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 2
  JMPTB je public_680830b
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 3
  JMPTB je public_68082e5
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 0
  JMPTB je public_6808342
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x80
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x81
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x82
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x83
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x84
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x85
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x86
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x87
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x88
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x89
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x8A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x8B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x8C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x8D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x8E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x8F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x90
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x91
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x92
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x93
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x94
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x95
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x96
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x97
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x98
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x99
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x9A
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x9B
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x9C
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x9D
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x9E
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0x9F
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA0
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA1
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA2
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA3
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA4
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA5
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA6
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA7
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA8
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xA9
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xAA
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xAB
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xAC
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xAD
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xAE
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xAF
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB0
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB1
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB2
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB3
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB4
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB5
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB6
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB7
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB8
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xB9
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xBA
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xBB
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xBC
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xBD
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xBE
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xBF
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC0
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC1
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC2
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC3
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC4
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC5
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC6
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC7
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC8
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xC9
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xCA
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xCB
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xCC
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xCD
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xCE
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xCF
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD0
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD1
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD2
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD3
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD4
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD5
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD6
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD7
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD8
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xD9
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xDA
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xDB
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xDC
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xDD
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xDE
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xDF
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE0
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE1
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE2
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE3
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE4
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE5
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE6
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE7
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE8
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xE9
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xEA
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xEB
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xEC
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xED
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xEE
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xEF
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xF0
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xF1
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xF2
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xF3
  JMPTB mov ecx, 4
  JMPTB je public_680836e
  JMPTB cmp eax, 0xF4
  JMPTB mov ecx, 0
  JMPTB je public_6808342
  JMPTB int 3
        public_68082ca : nop
        push esi
        call public_6806a20
        push edi
        push esi
        call public_6807630
        push esi
        mov dword ptr ds : [edi], 2
        call public_6807710
        jmp public_6808357
        public_68082e5 : nop
        push esi
        call public_6806a20
        push edi
        push esi
        call public_6807630
        push esi
        call public_6807b00
        push 0x5D
        push esi
        call public_6807230
        add esp, 0x18
        mov dword ptr ds : [edi], 3
        jmp public_680835d
        public_680830b : nop
        push esi
        call public_6806a20
        push edi
        push esi
        call public_6807630
        add esp, 0xC
        push 1
        push esi
        call public_6807710
        add esp, 4
        push eax
        push 0x14
        push esi
        call public_6806ed0
        push 1
        push esi
        mov dword ptr ds : [edi], 4
        call public_6808480
        add esp, 0x18
        jmp public_680835a
        public_6808342 : nop
        push edi
        push esi
        call public_6807630
        push 0
        push esi
        mov dword ptr ds : [edi], 4
        call public_6808480
        public_6808357 : nop
        add esp, 0x10
        public_680835a : nop
        mov dword ptr ds : [edi+4], eax
        public_680835d : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xFFFFFFD8
        cmp eax, 0xF4
        jbe public_68082bb
        public_680836e : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68082a0)
        ASM_EXPORT_ENTRY_FIRST(0x68082ca, public_68082ca)
        ASM_EXPORT_ENTRY(0x68082e5, public_68082e5)
        ASM_EXPORT_ENTRY(0x680830b, public_680830b)
        ASM_EXPORT_ENTRY(0x6808342, public_6808342)
        ASM_EXPORT_ENTRY_LAST(0x680836e, public_680836e)
    }
}

#undef public_68082bb
#undef public_68082ca
#undef public_68082e5
#undef public_680830b
#undef public_6808342
#undef public_6808357
#undef public_680835a
#undef public_680835d
#undef public_680836e

#pragma init_seg(compiler)
extern "C" void const* const public_68082ca = __AsmFindLabelExport(&internal_68082a0, 0x68082ca);
extern "C" void const* const public_68082e5 = __AsmFindLabelExport(&internal_68082a0, 0x68082e5);
extern "C" void const* const public_680830b = __AsmFindLabelExport(&internal_68082a0, 0x680830b);
extern "C" void const* const public_6808342 = __AsmFindLabelExport(&internal_68082a0, 0x6808342);
extern "C" void const* const public_680836e = __AsmFindLabelExport(&internal_68082a0, 0x680836e);
