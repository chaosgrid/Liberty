#include "Common-PCH.h"


#define public_62aecb3 _public_62aecb3
#define public_62aecba _public_62aecba
#define public_62aecc1 _public_62aecc1
#define public_62aecc8 _public_62aecc8
#define public_62aeccf _public_62aeccf
#define public_62aecd6 _public_62aecd6
#define public_62aecdd _public_62aecdd
#define public_62aecfb _public_62aecfb
#define public_62aed02 _public_62aed02
#define public_62aed09 _public_62aed09
#define public_62aed17 _public_62aed17
#define public_62aed21 _public_62aed21
#define public_62aed24 _public_62aed24
#define public_62aed2b _public_62aed2b
#define public_62aed30 _public_62aed30

PROC_DECLARE(0x62aec90, internal_62aec90, public_62aec90);
extern "C" NAKED register_t __cdecl internal_62aec90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x303
        jg public_62aecdd
        je public_62aecd6
        dec eax
        cmp eax, 0xA6
        ja public_62aed17
/*FIXUP movzx eax, byte ptr ds : [eax+public_62aed6c] @0x62aeca5*/
/*FIXUP jmp dword ptr ds : [eax*4+public_62aed54] @0x62aecac*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c00000000005c97
  JMPTB mov eax, 0
  JMPTB public_4c00000000005c97 : nop
        je public_62aecb3
  JMPTB cmp eax, 1
  JMPTB jne public_4c00000000005c93
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c93 : nop
        je public_62aed17
  JMPTB cmp eax, 2
  JMPTB jne public_4c00000000005c8f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c8f : nop
        je public_62aed17
  JMPTB cmp eax, 3
  JMPTB jne public_4c00000000005c8b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c8b : nop
        je public_62aed17
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000005c87
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c87 : nop
        je public_62aed17
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000005c83
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c83 : nop
        je public_62aed17
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000005c7f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c7f : nop
        je public_62aed17
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000005c7b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c7b : nop
        je public_62aed17
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000005c77
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c77 : nop
        je public_62aed17
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000005c73
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c73 : nop
        je public_62aed17
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000005c6f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c6f : nop
        je public_62aed17
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000005c6b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c6b : nop
        je public_62aed17
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c00000000005c67
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c67 : nop
        je public_62aed17
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000005c63
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c63 : nop
        je public_62aed17
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c00000000005c5f
  JMPTB mov eax, 1
  JMPTB public_4c00000000005c5f : nop
        je public_62aecc8
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c00000000005c5b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c5b : nop
        je public_62aed17
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c00000000005c57
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c57 : nop
        je public_62aed17
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c00000000005c53
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c53 : nop
        je public_62aed17
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c00000000005c4f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c4f : nop
        je public_62aed17
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c00000000005c4b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c4b : nop
        je public_62aed17
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c00000000005c47
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c47 : nop
        je public_62aed17
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c00000000005c43
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c43 : nop
        je public_62aed17
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c00000000005c3f
  JMPTB mov eax, 2
  JMPTB public_4c00000000005c3f : nop
        je public_62aeccf
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c00000000005c3b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c3b : nop
        je public_62aed17
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c00000000005c37
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c37 : nop
        je public_62aed17
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c00000000005c33
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c33 : nop
        je public_62aed17
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c00000000005c2f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c2f : nop
        je public_62aed17
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c00000000005c2b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c2b : nop
        je public_62aed17
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c00000000005c27
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c27 : nop
        je public_62aed17
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c00000000005c23
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c23 : nop
        je public_62aed17
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c00000000005c1f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c1f : nop
        je public_62aed17
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c00000000005c1b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c1b : nop
        je public_62aed17
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c00000000005c17
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c17 : nop
        je public_62aed17
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c00000000005c13
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c13 : nop
        je public_62aed17
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c00000000005c0f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c0f : nop
        je public_62aed17
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c00000000005c0b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c0b : nop
        je public_62aed17
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c00000000005c07
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c07 : nop
        je public_62aed17
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c00000000005c03
  JMPTB mov eax, 5
  JMPTB public_4c00000000005c03 : nop
        je public_62aed17
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c00000000005bff
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bff : nop
        je public_62aed17
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c00000000005bfb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bfb : nop
        je public_62aed17
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c00000000005bf7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bf7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c00000000005bf3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bf3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c00000000005bef
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bef : nop
        je public_62aed17
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c00000000005beb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005beb : nop
        je public_62aed17
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c00000000005be7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005be7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c00000000005be3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005be3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c00000000005bdf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bdf : nop
        je public_62aed17
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c00000000005bdb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bdb : nop
        je public_62aed17
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c00000000005bd7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bd7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c00000000005bd3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bd3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c00000000005bcf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bcf : nop
        je public_62aed17
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c00000000005bcb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bcb : nop
        je public_62aed17
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c00000000005bc7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bc7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c00000000005bc3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bc3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c00000000005bbf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bbf : nop
        je public_62aed17
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c00000000005bbb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bbb : nop
        je public_62aed17
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c00000000005bb7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bb7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c00000000005bb3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bb3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c00000000005baf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005baf : nop
        je public_62aed17
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c00000000005bab
  JMPTB mov eax, 5
  JMPTB public_4c00000000005bab : nop
        je public_62aed17
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c00000000005ba7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ba7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c00000000005ba3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ba3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c00000000005b9f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b9f : nop
        je public_62aed17
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c00000000005b9b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b9b : nop
        je public_62aed17
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c00000000005b97
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b97 : nop
        je public_62aed17
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c00000000005b93
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b93 : nop
        je public_62aed17
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c00000000005b8f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b8f : nop
        je public_62aed17
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c00000000005b8b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b8b : nop
        je public_62aed17
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c00000000005b87
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b87 : nop
        je public_62aed17
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c00000000005b83
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b83 : nop
        je public_62aed17
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c00000000005b7f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b7f : nop
        je public_62aed17
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c00000000005b7b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b7b : nop
        je public_62aed17
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c00000000005b77
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b77 : nop
        je public_62aed17
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c00000000005b73
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b73 : nop
        je public_62aed17
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c00000000005b6f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b6f : nop
        je public_62aed17
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c00000000005b6b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b6b : nop
        je public_62aed17
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c00000000005b67
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b67 : nop
        je public_62aed17
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c00000000005b63
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b63 : nop
        je public_62aed17
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c00000000005b5f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b5f : nop
        je public_62aed17
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c00000000005b5b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b5b : nop
        je public_62aed17
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c00000000005b57
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b57 : nop
        je public_62aed17
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c00000000005b53
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b53 : nop
        je public_62aed17
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c00000000005b4f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b4f : nop
        je public_62aed17
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c00000000005b4b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b4b : nop
        je public_62aed17
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c00000000005b47
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b47 : nop
        je public_62aed17
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c00000000005b43
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b43 : nop
        je public_62aed17
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c00000000005b3f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b3f : nop
        je public_62aed17
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c00000000005b3b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b3b : nop
        je public_62aed17
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c00000000005b37
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b37 : nop
        je public_62aed17
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c00000000005b33
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b33 : nop
        je public_62aed17
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c00000000005b2f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b2f : nop
        je public_62aed17
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c00000000005b2b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b2b : nop
        je public_62aed17
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c00000000005b27
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b27 : nop
        je public_62aed17
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c00000000005b23
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b23 : nop
        je public_62aed17
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c00000000005b1f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b1f : nop
        je public_62aed17
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c00000000005b1b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b1b : nop
        je public_62aed17
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c00000000005b17
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b17 : nop
        je public_62aed17
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c00000000005b13
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b13 : nop
        je public_62aed17
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c00000000005b0f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b0f : nop
        je public_62aed17
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c00000000005b0b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b0b : nop
        je public_62aed17
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c00000000005b07
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b07 : nop
        je public_62aed17
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c00000000005b03
  JMPTB mov eax, 5
  JMPTB public_4c00000000005b03 : nop
        je public_62aed17
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c00000000005aff
  JMPTB mov eax, 3
  JMPTB public_4c00000000005aff : nop
        je public_62aecba
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c00000000005afb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005afb : nop
        je public_62aed17
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c00000000005af7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005af7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c00000000005af3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005af3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c00000000005aef
  JMPTB mov eax, 5
  JMPTB public_4c00000000005aef : nop
        je public_62aed17
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c00000000005aeb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005aeb : nop
        je public_62aed17
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c00000000005ae7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ae7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c00000000005ae3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ae3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c00000000005adf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005adf : nop
        je public_62aed17
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c00000000005adb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005adb : nop
        je public_62aed17
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c00000000005ad7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ad7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c00000000005ad3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ad3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c00000000005acf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005acf : nop
        je public_62aed17
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c00000000005acb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005acb : nop
        je public_62aed17
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c00000000005ac7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ac7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c00000000005ac3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ac3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c00000000005abf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005abf : nop
        je public_62aed17
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c00000000005abb
  JMPTB mov eax, 5
  JMPTB public_4c00000000005abb : nop
        je public_62aed17
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c00000000005ab7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ab7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c00000000005ab3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005ab3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c00000000005aaf
  JMPTB mov eax, 5
  JMPTB public_4c00000000005aaf : nop
        je public_62aed17
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c00000000005aab
  JMPTB mov eax, 5
  JMPTB public_4c00000000005aab : nop
        je public_62aed17
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c00000000005aa7
  JMPTB mov eax, 5
  JMPTB public_4c00000000005aa7 : nop
        je public_62aed17
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c00000000005aa3
  JMPTB mov eax, 5
  JMPTB public_4c00000000005aa3 : nop
        je public_62aed17
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c00000000005a9f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a9f : nop
        je public_62aed17
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c00000000005a9b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a9b : nop
        je public_62aed17
  JMPTB cmp eax, 0x80
  JMPTB jne public_4c00000000005a97
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a97 : nop
        je public_62aed17
  JMPTB cmp eax, 0x81
  JMPTB jne public_4c00000000005a93
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a93 : nop
        je public_62aed17
  JMPTB cmp eax, 0x82
  JMPTB jne public_4c00000000005a8f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a8f : nop
        je public_62aed17
  JMPTB cmp eax, 0x83
  JMPTB jne public_4c00000000005a8b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a8b : nop
        je public_62aed17
  JMPTB cmp eax, 0x84
  JMPTB jne public_4c00000000005a87
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a87 : nop
        je public_62aed17
  JMPTB cmp eax, 0x85
  JMPTB jne public_4c00000000005a83
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a83 : nop
        je public_62aed17
  JMPTB cmp eax, 0x86
  JMPTB jne public_4c00000000005a7f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a7f : nop
        je public_62aed17
  JMPTB cmp eax, 0x87
  JMPTB jne public_4c00000000005a7b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a7b : nop
        je public_62aed17
  JMPTB cmp eax, 0x88
  JMPTB jne public_4c00000000005a77
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a77 : nop
        je public_62aed17
  JMPTB cmp eax, 0x89
  JMPTB jne public_4c00000000005a73
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a73 : nop
        je public_62aed17
  JMPTB cmp eax, 0x8A
  JMPTB jne public_4c00000000005a6f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a6f : nop
        je public_62aed17
  JMPTB cmp eax, 0x8B
  JMPTB jne public_4c00000000005a6b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a6b : nop
        je public_62aed17
  JMPTB cmp eax, 0x8C
  JMPTB jne public_4c00000000005a67
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a67 : nop
        je public_62aed17
  JMPTB cmp eax, 0x8D
  JMPTB jne public_4c00000000005a63
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a63 : nop
        je public_62aed17
  JMPTB cmp eax, 0x8E
  JMPTB jne public_4c00000000005a5f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a5f : nop
        je public_62aed17
  JMPTB cmp eax, 0x8F
  JMPTB jne public_4c00000000005a5b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a5b : nop
        je public_62aed17
  JMPTB cmp eax, 0x90
  JMPTB jne public_4c00000000005a57
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a57 : nop
        je public_62aed17
  JMPTB cmp eax, 0x91
  JMPTB jne public_4c00000000005a53
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a53 : nop
        je public_62aed17
  JMPTB cmp eax, 0x92
  JMPTB jne public_4c00000000005a4f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a4f : nop
        je public_62aed17
  JMPTB cmp eax, 0x93
  JMPTB jne public_4c00000000005a4b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a4b : nop
        je public_62aed17
  JMPTB cmp eax, 0x94
  JMPTB jne public_4c00000000005a47
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a47 : nop
        je public_62aed17
  JMPTB cmp eax, 0x95
  JMPTB jne public_4c00000000005a43
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a43 : nop
        je public_62aed17
  JMPTB cmp eax, 0x96
  JMPTB jne public_4c00000000005a3f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a3f : nop
        je public_62aed17
  JMPTB cmp eax, 0x97
  JMPTB jne public_4c00000000005a3b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a3b : nop
        je public_62aed17
  JMPTB cmp eax, 0x98
  JMPTB jne public_4c00000000005a37
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a37 : nop
        je public_62aed17
  JMPTB cmp eax, 0x99
  JMPTB jne public_4c00000000005a33
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a33 : nop
        je public_62aed17
  JMPTB cmp eax, 0x9A
  JMPTB jne public_4c00000000005a2f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a2f : nop
        je public_62aed17
  JMPTB cmp eax, 0x9B
  JMPTB jne public_4c00000000005a2b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a2b : nop
        je public_62aed17
  JMPTB cmp eax, 0x9C
  JMPTB jne public_4c00000000005a27
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a27 : nop
        je public_62aed17
  JMPTB cmp eax, 0x9D
  JMPTB jne public_4c00000000005a23
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a23 : nop
        je public_62aed17
  JMPTB cmp eax, 0x9E
  JMPTB jne public_4c00000000005a1f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a1f : nop
        je public_62aed17
  JMPTB cmp eax, 0x9F
  JMPTB jne public_4c00000000005a1b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a1b : nop
        je public_62aed17
  JMPTB cmp eax, 0xA0
  JMPTB jne public_4c00000000005a17
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a17 : nop
        je public_62aed17
  JMPTB cmp eax, 0xA1
  JMPTB jne public_4c00000000005a13
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a13 : nop
        je public_62aed17
  JMPTB cmp eax, 0xA2
  JMPTB jne public_4c00000000005a0f
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a0f : nop
        je public_62aed17
  JMPTB cmp eax, 0xA3
  JMPTB jne public_4c00000000005a0b
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a0b : nop
        je public_62aed17
  JMPTB cmp eax, 0xA4
  JMPTB jne public_4c00000000005a07
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a07 : nop
        je public_62aed17
  JMPTB cmp eax, 0xA5
  JMPTB jne public_4c00000000005a03
  JMPTB mov eax, 5
  JMPTB public_4c00000000005a03 : nop
        je public_62aed17
  JMPTB cmp eax, 0xA6
  JMPTB jne public_4c000000000059ff
  JMPTB mov eax, 4
  JMPTB public_4c000000000059ff : nop
        je public_62aecc1
  JMPTB int 3
        public_62aecb3 : nop
        mov eax, offset public_63fc32c
        jmp public_62aed30
        public_62aecba : nop
        mov eax, offset public_63fc398
        jmp public_62aed30
        public_62aecc1 : nop
        mov eax, offset public_63fc38c
        jmp public_62aed30
        public_62aecc8 : nop
        mov eax, offset public_63fc374
        jmp public_62aed30
        public_62aeccf : nop
        mov eax, offset public_63fc368
        jmp public_62aed30
        public_62aecd6 : nop
        mov eax, offset public_63fc35c
        jmp public_62aed30
        public_62aecdd : nop
        cmp eax, 0x1003
        jg public_62aed09
        je public_62aed02
        cmp eax, 0x503
        je public_62aecfb
        cmp eax, 0x803
        jne public_62aed17
        mov eax, offset public_63fc380
        jmp public_62aed30
        public_62aecfb : nop
        mov eax, offset public_63fc3a4
        jmp public_62aed30
        public_62aed02 : nop
        mov eax, offset public_63fc350
        jmp public_62aed30
        public_62aed09 : nop
        cmp eax, 0x2001
        je public_62aed2b
        cmp eax, 0x4001
        je public_62aed24
        public_62aed17 : nop
        mov dword ptr ds : [public_63fc430], 0
        public_62aed21 : nop
        xor eax, eax
        ret 
        public_62aed24 : nop
        mov eax, offset public_63fc344
        jmp public_62aed30
        public_62aed2b : nop
        mov eax, offset public_63fc338
        public_62aed30 : nop
        mov dword ptr ds : [public_63fc430], eax
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_63fc328], ecx
        cmp ecx, dword ptr ds : [eax+4]
        je public_62aed21
        mov edx, dword ptr ds : [ecx]
        mov eax, ecx
        mov dword ptr ds : [public_63fc328], edx
        mov eax, dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x62aec90)
        ASM_EXPORT_ENTRY_FIRST(0x62aecb3, public_62aecb3)
        ASM_EXPORT_ENTRY(0x62aecba, public_62aecba)
        ASM_EXPORT_ENTRY(0x62aecc1, public_62aecc1)
        ASM_EXPORT_ENTRY(0x62aecc8, public_62aecc8)
        ASM_EXPORT_ENTRY(0x62aeccf, public_62aeccf)
        ASM_EXPORT_ENTRY_LAST(0x62aed17, public_62aed17)
    }
}

#undef public_62aecb3
#undef public_62aecba
#undef public_62aecc1
#undef public_62aecc8
#undef public_62aeccf
#undef public_62aecd6
#undef public_62aecdd
#undef public_62aecfb
#undef public_62aed02
#undef public_62aed09
#undef public_62aed17
#undef public_62aed21
#undef public_62aed24
#undef public_62aed2b
#undef public_62aed30

#pragma init_seg(compiler)
extern "C" void const* const public_62aecb3 = __AsmFindLabelExport(&internal_62aec90, 0x62aecb3);
extern "C" void const* const public_62aecba = __AsmFindLabelExport(&internal_62aec90, 0x62aecba);
extern "C" void const* const public_62aecc1 = __AsmFindLabelExport(&internal_62aec90, 0x62aecc1);
extern "C" void const* const public_62aecc8 = __AsmFindLabelExport(&internal_62aec90, 0x62aecc8);
extern "C" void const* const public_62aeccf = __AsmFindLabelExport(&internal_62aec90, 0x62aeccf);
extern "C" void const* const public_62aed17 = __AsmFindLabelExport(&internal_62aec90, 0x62aed17);
