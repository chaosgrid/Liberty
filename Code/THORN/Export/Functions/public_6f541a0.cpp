#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53130);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);
CLANG_FORWARD_PROC_SYMBOL(public_6f53610);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f541a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54380);

#define public_6f541bb _public_6f541bb
#define public_6f541ca _public_6f541ca
#define public_6f541e5 _public_6f541e5
#define public_6f5420b _public_6f5420b
#define public_6f54242 _public_6f54242
#define public_6f54257 _public_6f54257
#define public_6f5425a _public_6f5425a
#define public_6f5425d _public_6f5425d
#define public_6f5426e _public_6f5426e

PROC_DECLARE(0x6f541a0, internal_6f541a0, public_6f541a0);
extern "C" NAKED register_t __cdecl internal_6f541a0()
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
        ja public_6f5426e
        mov edi, dword ptr ss : [esp+0x10]
/*FIXUP public_6f541bb : nop
        xor ecx, ecx @0x6f541bb*/
  FIXUP public_6f541bb :
/*FIXUP mov cl, byte ptr ds : [eax+public_6f54288] @0x6f541bd*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f54274] @0x6f541c3*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6f54242
  JMPTB cmp eax, 1
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 2
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 4
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 5
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 6
  JMPTB mov ecx, 1
  JMPTB je public_6f541ca
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 2
  JMPTB je public_6f5420b
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 3
  JMPTB je public_6f541e5
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 0
  JMPTB je public_6f54242
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x80
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x81
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x82
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x83
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x84
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x85
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x86
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x87
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x88
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x89
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x8A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x8B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x8C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x8D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x8E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x8F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x90
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x91
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x92
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x93
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x94
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x95
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x96
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x97
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x98
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x99
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x9A
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x9B
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x9C
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x9D
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x9E
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0x9F
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA0
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA1
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA2
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA3
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA4
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA5
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA6
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA7
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA8
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xA9
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xAA
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xAB
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xAC
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xAD
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xAE
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xAF
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB0
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB1
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB2
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB3
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB4
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB5
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB6
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB7
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB8
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xB9
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xBA
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xBB
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xBC
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xBD
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xBE
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xBF
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC0
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC1
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC2
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC3
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC4
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC5
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC6
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC7
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC8
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xC9
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xCA
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xCB
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xCC
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xCD
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xCE
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xCF
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD0
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD1
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD2
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD3
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD4
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD5
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD6
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD7
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD8
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xD9
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xDA
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xDB
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xDC
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xDD
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xDE
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xDF
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE0
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE1
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE2
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE3
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE4
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE5
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE6
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE7
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE8
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xE9
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xEA
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xEB
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xEC
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xED
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xEE
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xEF
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xF0
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xF1
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xF2
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xF3
  JMPTB mov ecx, 4
  JMPTB je public_6f5426e
  JMPTB cmp eax, 0xF4
  JMPTB mov ecx, 0
  JMPTB je public_6f54242
  JMPTB int 3
        public_6f541ca : nop
        push esi
        call public_6f52920
        push edi
        push esi
        call public_6f53530
        push esi
        mov dword ptr ds : [edi], 2
        call public_6f53610
        jmp public_6f54257
        public_6f541e5 : nop
        push esi
        call public_6f52920
        push edi
        push esi
        call public_6f53530
        push esi
        call public_6f53a00
        push 0x5D
        push esi
        call public_6f53130
        add esp, 0x18
        mov dword ptr ds : [edi], 3
        jmp public_6f5425d
        public_6f5420b : nop
        push esi
        call public_6f52920
        push edi
        push esi
        call public_6f53530
        add esp, 0xC
        push 1
        push esi
        call public_6f53610
        add esp, 4
        push eax
        push 0x14
        push esi
        call public_6f52dd0
        push 1
        push esi
        mov dword ptr ds : [edi], 4
        call public_6f54380
        add esp, 0x18
        jmp public_6f5425a
        public_6f54242 : nop
        push edi
        push esi
        call public_6f53530
        push 0
        push esi
        mov dword ptr ds : [edi], 4
        call public_6f54380
        public_6f54257 : nop
        add esp, 0x10
        public_6f5425a : nop
        mov dword ptr ds : [edi+4], eax
        public_6f5425d : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xFFFFFFD8
        cmp eax, 0xF4
        jbe public_6f541bb
        public_6f5426e : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f541a0)
        ASM_EXPORT_ENTRY_FIRST(0x6f541ca, public_6f541ca)
        ASM_EXPORT_ENTRY(0x6f541e5, public_6f541e5)
        ASM_EXPORT_ENTRY(0x6f5420b, public_6f5420b)
        ASM_EXPORT_ENTRY(0x6f54242, public_6f54242)
        ASM_EXPORT_ENTRY_LAST(0x6f5426e, public_6f5426e)
    }
}

#undef public_6f541bb
#undef public_6f541ca
#undef public_6f541e5
#undef public_6f5420b
#undef public_6f54242
#undef public_6f54257
#undef public_6f5425a
#undef public_6f5425d
#undef public_6f5426e

#pragma init_seg(compiler)
extern "C" void const* const public_6f541ca = __AsmFindLabelExport(&internal_6f541a0, 0x6f541ca);
extern "C" void const* const public_6f541e5 = __AsmFindLabelExport(&internal_6f541a0, 0x6f541e5);
extern "C" void const* const public_6f5420b = __AsmFindLabelExport(&internal_6f541a0, 0x6f5420b);
extern "C" void const* const public_6f54242 = __AsmFindLabelExport(&internal_6f541a0, 0x6f54242);
extern "C" void const* const public_6f5426e = __AsmFindLabelExport(&internal_6f541a0, 0x6f5426e);
