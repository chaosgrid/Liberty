#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4c45d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c7970);
CLANG_FORWARD_PROC_SYMBOL(public_4c79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c79d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8120);
CLANG_FORWARD_PROC_SYMBOL(public_4db930);
CLANG_FORWARD_PROC_SYMBOL(public_4dcc60);
CLANG_FORWARD_PROC_SYMBOL(public_4dd4e0);
CLANG_FORWARD_PROC_SYMBOL(public_4de4c0);
CLANG_FORWARD_PROC_SYMBOL(public_4f1da0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5580);
CLANG_FORWARD_PROC_SYMBOL(public_4f5790);
CLANG_FORWARD_PROC_SYMBOL(public_4f5920);
CLANG_FORWARD_PROC_SYMBOL(public_4f6170);
CLANG_FORWARD_PROC_SYMBOL(public_4f6180);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_5756d0);
CLANG_FORWARD_PROC_SYMBOL(public_576240);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_4dba89 _public_4dba89
#define public_4dba95 _public_4dba95
#define public_4dbae3 _public_4dbae3
#define public_4dbafa _public_4dbafa
#define public_4dbb2a _public_4dbb2a
#define public_4dbb40 _public_4dbb40
#define public_4dbb70 _public_4dbb70
#define public_4dbb86 _public_4dbb86
#define public_4dbbb6 _public_4dbbb6
#define public_4dbbcc _public_4dbbcc
#define public_4dbbfc _public_4dbbfc
#define public_4dbc12 _public_4dbc12
#define public_4dbc2d _public_4dbc2d
#define public_4dbc48 _public_4dbc48
#define public_4dbc60 _public_4dbc60
#define public_4dbc79 _public_4dbc79
#define public_4dbc92 _public_4dbc92
#define public_4dbcf5 _public_4dbcf5
#define public_4dbd0c _public_4dbd0c
#define public_4dbd37 _public_4dbd37
#define public_4dbd98 _public_4dbd98
#define public_4dbdb4 _public_4dbdb4
#define public_4dbddc _public_4dbddc
#define public_4dbdf2 _public_4dbdf2
#define public_4dbe07 _public_4dbe07
#define public_4dbe2c _public_4dbe2c
#define public_4dbe51 _public_4dbe51
#define public_4dbe6a _public_4dbe6a
#define public_4dbe87 _public_4dbe87
#define public_4dbea0 _public_4dbea0
#define public_4dbec2 _public_4dbec2
#define public_4dbf1a _public_4dbf1a
#define public_4dbf72 _public_4dbf72
#define public_4dbfca _public_4dbfca
#define public_4dc022 _public_4dc022
#define public_4dc07d _public_4dc07d
#define public_4dc0d8 _public_4dc0d8
#define public_4dc133 _public_4dc133
#define public_4dc18e _public_4dc18e
#define public_4dc1e6 _public_4dc1e6
#define public_4dc220 _public_4dc220
#define public_4dc252 _public_4dc252
#define public_4dc27b _public_4dc27b
#define public_4dc2a6 _public_4dc2a6
#define public_4dc2d1 _public_4dc2d1
#define public_4dc2fc _public_4dc2fc
#define public_4dc32a _public_4dc32a
#define public_4dc358 _public_4dc358
#define public_4dc383 _public_4dc383
#define public_4dc3aa _public_4dc3aa
#define public_4dc3d1 _public_4dc3d1
#define public_4dc3f6 _public_4dc3f6
#define public_4dc409 _public_4dc409
#define public_4dc415 _public_4dc415
#define public_4dc45e _public_4dc45e
#define public_4dc4ad _public_4dc4ad
#define public_4dc4fb _public_4dc4fb
#define public_4dc54a _public_4dc54a
#define public_4dc599 _public_4dc599
#define public_4dc5e7 _public_4dc5e7
#define public_4dc62c _public_4dc62c
#define public_4dc65d _public_4dc65d
#define public_4dc669 _public_4dc669
#define public_4dc682 _public_4dc682
#define public_4dc69b _public_4dc69b
#define public_4dc6b4 _public_4dc6b4
#define public_4dc6cd _public_4dc6cd
#define public_4dc6e6 _public_4dc6e6
#define public_4dc6fd _public_4dc6fd
#define public_4dc715 _public_4dc715
#define public_4dc72d _public_4dc72d
#define public_4dc745 _public_4dc745
#define public_4dc75d _public_4dc75d
#define public_4dc775 _public_4dc775
#define public_4dc7ce _public_4dc7ce
#define public_4dc7e4 _public_4dc7e4
#define public_4dc822 _public_4dc822
#define public_4dc84a _public_4dc84a
#define public_4dc859 _public_4dc859
#define public_4dc86f _public_4dc86f

PROC_DECLARE(0x4dba50, internal_4dba50, public_4dba50);
extern "C" NAKED register_t __cdecl internal_4dba50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_67ecd0]
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        cmp eax, ebp
        push edi
        mov esi, ecx
        je public_4dba89
        call public_45a740
        test al, al
        je public_4dba95
        cmp dword ptr ss : [esp+0x68], 0x3A
        jne public_4dba89
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_4dba89
        push ebp
        call public_4c7970
        add esp, 4
        public_4dba89 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x54
        ret 4
        public_4dba95 : nop
        call public_54baf0
        mov ebx, eax
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x10], ebx
        je public_4dba89
        cmp dword ptr ds : [ebx+0x1C], 1
        jne public_4dba89
        lea eax, ds:[ebx+0xC]
        cmp eax, ebp
        je public_4dba89
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebp
        je public_4dba89
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4dba89
        mov ecx, dword ptr ss : [esp+0x68]
        lea eax, ds:[ecx-0x3A]
        cmp eax, 0x87
        ja public_4dba89
/*FIXUP movzx edx, byte ptr ds : [eax+public_4dc994] @0x4dbad5*/
/*FIXUP jmp dword ptr ds : [edx*4+public_4dc8a4] @0x4dbadc*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_4dbdb4
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_4dbdf2
  JMPTB cmp eax, 2
  JMPTB mov edx, 2
  JMPTB je public_4dbddc
  JMPTB cmp eax, 3
  JMPTB mov edx, 3
  JMPTB je public_4dbe2c
  JMPTB cmp eax, 4
  JMPTB mov edx, 4
  JMPTB je public_4dbe07
  JMPTB cmp eax, 5
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 6
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 7
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 8
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 9
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x13
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x14
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x15
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x16
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x17
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x18
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x19
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x1A
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x1B
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x1C
  JMPTB mov edx, 5
  JMPTB je public_4dbe51
  JMPTB cmp eax, 0x1D
  JMPTB mov edx, 6
  JMPTB je public_4dbe87
  JMPTB cmp eax, 0x1E
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x1F
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x20
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x21
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x22
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x23
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x24
  JMPTB mov edx, 7
  JMPTB je public_4dbc2d
  JMPTB cmp eax, 0x25
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x26
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x27
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x28
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x29
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x2A
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x2B
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x2C
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x2D
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x2E
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x2F
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x30
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x31
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x32
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x33
  JMPTB mov edx, 8
  JMPTB je public_4dbc12
  JMPTB cmp eax, 0x34
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x35
  JMPTB mov edx, 9
  JMPTB je public_4dbae3
  JMPTB cmp eax, 0x36
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x37
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x38
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x39
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x3A
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x3B
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x3C
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x3D
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x3E
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x3F
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x40
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x41
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x42
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x43
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x44
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x45
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x46
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x47
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x48
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x49
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x4A
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x4B
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x4C
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x4D
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x4E
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x4F
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x50
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x51
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x52
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x53
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x54
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x55
  JMPTB mov edx, 0xA
  JMPTB je public_4dc775
  JMPTB cmp eax, 0x56
  JMPTB mov edx, 0xB
  JMPTB je public_4dc7e4
  JMPTB cmp eax, 0x57
  JMPTB mov edx, 0xC
  JMPTB je public_4dc415
  JMPTB cmp eax, 0x58
  JMPTB mov edx, 0xD
  JMPTB je public_4dc45e
  JMPTB cmp eax, 0x59
  JMPTB mov edx, 0xE
  JMPTB je public_4dc4ad
  JMPTB cmp eax, 0x5A
  JMPTB mov edx, 0xF
  JMPTB je public_4dc4fb
  JMPTB cmp eax, 0x5B
  JMPTB mov edx, 0x10
  JMPTB je public_4dc54a
  JMPTB cmp eax, 0x5C
  JMPTB mov edx, 0x11
  JMPTB je public_4dc599
  JMPTB cmp eax, 0x5D
  JMPTB mov edx, 0x12
  JMPTB je public_4dc252
  JMPTB cmp eax, 0x5E
  JMPTB mov edx, 0x13
  JMPTB je public_4dc27b
  JMPTB cmp eax, 0x5F
  JMPTB mov edx, 0x14
  JMPTB je public_4dc2a6
  JMPTB cmp eax, 0x60
  JMPTB mov edx, 0x15
  JMPTB je public_4dc2d1
  JMPTB cmp eax, 0x61
  JMPTB mov edx, 0x16
  JMPTB je public_4dc2fc
  JMPTB cmp eax, 0x62
  JMPTB mov edx, 0x17
  JMPTB je public_4dc32a
  JMPTB cmp eax, 0x63
  JMPTB mov edx, 0x18
  JMPTB je public_4dc358
  JMPTB cmp eax, 0x64
  JMPTB mov edx, 0x19
  JMPTB je public_4dc383
  JMPTB cmp eax, 0x65
  JMPTB mov edx, 0x1A
  JMPTB je public_4dc3aa
  JMPTB cmp eax, 0x66
  JMPTB mov edx, 0x1B
  JMPTB je public_4dc3d1
  JMPTB cmp eax, 0x67
  JMPTB mov edx, 0x1C
  JMPTB je public_4dbec2
  JMPTB cmp eax, 0x68
  JMPTB mov edx, 0x1D
  JMPTB je public_4dbf1a
  JMPTB cmp eax, 0x69
  JMPTB mov edx, 0x1E
  JMPTB je public_4dbf72
  JMPTB cmp eax, 0x6A
  JMPTB mov edx, 0x1F
  JMPTB je public_4dbfca
  JMPTB cmp eax, 0x6B
  JMPTB mov edx, 0x20
  JMPTB je public_4dc022
  JMPTB cmp eax, 0x6C
  JMPTB mov edx, 0x21
  JMPTB je public_4dc07d
  JMPTB cmp eax, 0x6D
  JMPTB mov edx, 0x22
  JMPTB je public_4dc0d8
  JMPTB cmp eax, 0x6E
  JMPTB mov edx, 0x23
  JMPTB je public_4dc133
  JMPTB cmp eax, 0x6F
  JMPTB mov edx, 0x24
  JMPTB je public_4dc18e
  JMPTB cmp eax, 0x70
  JMPTB mov edx, 0x25
  JMPTB je public_4dc1e6
  JMPTB cmp eax, 0x71
  JMPTB mov edx, 0x26
  JMPTB je public_4dc5e7
  JMPTB cmp eax, 0x72
  JMPTB mov edx, 0x27
  JMPTB je public_4dc669
  JMPTB cmp eax, 0x73
  JMPTB mov edx, 0x28
  JMPTB je public_4dc682
  JMPTB cmp eax, 0x74
  JMPTB mov edx, 0x29
  JMPTB je public_4dc69b
  JMPTB cmp eax, 0x75
  JMPTB mov edx, 0x2A
  JMPTB je public_4dc6b4
  JMPTB cmp eax, 0x76
  JMPTB mov edx, 0x2B
  JMPTB je public_4dc6cd
  JMPTB cmp eax, 0x77
  JMPTB mov edx, 0x2C
  JMPTB je public_4dc6e6
  JMPTB cmp eax, 0x78
  JMPTB mov edx, 0x2D
  JMPTB je public_4dc6fd
  JMPTB cmp eax, 0x79
  JMPTB mov edx, 0x2E
  JMPTB je public_4dc715
  JMPTB cmp eax, 0x7A
  JMPTB mov edx, 0x2F
  JMPTB je public_4dc72d
  JMPTB cmp eax, 0x7B
  JMPTB mov edx, 0x30
  JMPTB je public_4dc745
  JMPTB cmp eax, 0x7C
  JMPTB mov edx, 0x31
  JMPTB je public_4dc75d
  JMPTB cmp eax, 0x7D
  JMPTB mov edx, 0x32
  JMPTB je public_4dbafa
  JMPTB cmp eax, 0x7E
  JMPTB mov edx, 0x33
  JMPTB je public_4dbb40
  JMPTB cmp eax, 0x7F
  JMPTB mov edx, 0x34
  JMPTB je public_4dbb86
  JMPTB cmp eax, 0x80
  JMPTB mov edx, 0x35
  JMPTB je public_4dbbcc
  JMPTB cmp eax, 0x81
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x82
  JMPTB mov edx, 0x36
  JMPTB je public_4dbc48
  JMPTB cmp eax, 0x83
  JMPTB mov edx, 0x37
  JMPTB je public_4dbc92
  JMPTB cmp eax, 0x84
  JMPTB mov edx, 0x38
  JMPTB je public_4dbd37
  JMPTB cmp eax, 0x85
  JMPTB mov edx, 0x3B
  JMPTB je public_4dba89
  JMPTB cmp eax, 0x86
  JMPTB mov edx, 0x39
  JMPTB je public_4dbc60
  JMPTB cmp eax, 0x87
  JMPTB mov edx, 0x3A
  JMPTB je public_4dbc79
  JMPTB int 3
        public_4dbae3 : nop
        lea ecx, ds:[esi-0x384]
        call public_4de4c0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbafa : nop
        mov al, byte ptr ds : [esi+0x236]
        test al, al
        jne public_4dc409
        mov al, byte ptr ds : [esi+0x235]
        test al, al
        push 1
        je public_4dbb2a
        push 0x32
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbb2a : nop
        push 0x2C
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbb40 : nop
        mov al, byte ptr ds : [esi+0x236]
        test al, al
        jne public_4dc409
        mov al, byte ptr ds : [esi+0x235]
        test al, al
        push 1
        je public_4dbb70
        push 0x33
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbb70 : nop
        push 0x2D
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbb86 : nop
        mov al, byte ptr ds : [esi+0x236]
        test al, al
        jne public_4dc409
        mov al, byte ptr ds : [esi+0x235]
        test al, al
        push 1
        je public_4dbbb6
        push 0x34
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbbb6 : nop
        push 0x2A
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbbcc : nop
        mov al, byte ptr ds : [esi+0x236]
        test al, al
        jne public_4dc409
        mov al, byte ptr ds : [esi+0x235]
        test al, al
        push 1
        je public_4dbbfc
        push 0x35
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbbfc : nop
        push 0x2B
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbc12 : nop
        mov eax, dword ptr ds : [esi-0x384]
        lea ecx, ds:[esi-0x384]
        call dword ptr ds : [eax+0x30]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbc2d : nop
        mov edx, dword ptr ds : [esi-0x384]
        lea ecx, ds:[esi-0x384]
        call dword ptr ds : [edx+0x30]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbc48 : nop
        push ebp
        lea ecx, ds:[esi-0x384]
        call public_4dd4e0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbc60 : nop
        push 1
        lea ecx, ds:[esi-0x384]
        call public_4dd4e0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbc79 : nop
        push 2
        lea ecx, ds:[esi-0x384]
        call public_4dd4e0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbc92 : nop
        call public_54baf0
        mov ebx, eax
        cmp ebx, ebp
        je public_4dc409
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x150]
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4dc409
        push 0x20
        lea ecx, ss:[esp+0x18]
        xor esi, esi
        call dword ptr ds : [public_5c64f4]
        mov ebp, dword ptr ds : [public_5c64f0]
        lea edx, ss:[esp+0x14]
        add edi, 0xE4
        push edx
        mov ecx, edi
        call ebp
        test eax, eax
        je public_4dc409
        public_4dbcf5 : nop
        mov ax, word ptr ds : [eax+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov word ptr ss : [esp+esi*2+0x28], ax
        mov ecx, edi
        inc esi
        call ebp
        test eax, eax
        jne public_4dbcf5
        public_4dbd0c : nop
        test esi, esi
        je public_4dc409
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push 0
        lea ecx, ds:[ebx+4]
        push esi
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+0x34]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbd37 : nop
        call public_54baf0
        mov ebx, eax
        cmp ebx, ebp
        je public_4dc409
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x150]
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4dc409
        push 0x40
        lea ecx, ss:[esp+0x18]
        xor esi, esi
        call dword ptr ds : [public_5c64f4]
        mov ebp, dword ptr ds : [public_5c64f0]
        lea ecx, ss:[esp+0x14]
        add edi, 0xE4
        push ecx
        mov ecx, edi
        call ebp
        test eax, eax
        je public_4dc409
        public_4dbd98 : nop
        mov dx, word ptr ds : [eax+8]
        lea eax, ss:[esp+0x14]
        mov word ptr ss : [esp+esi*2+0x24], dx
        push eax
        mov ecx, edi
        inc esi
        call ebp
        test eax, eax
        jne public_4dbd98
        jmp public_4dbd0c
        public_4dbdb4 : nop
        call public_576240
        mov al, byte ptr ds : [eax+0x18]
        xor ecx, ecx
        test al, al
        setne cl
        push ebp
        add ecx, 0x3B
        push ecx
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbddc : nop
        push 1
        call public_4c7970
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbdf2 : nop
        push ebp
        call public_4c7970
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbe07 : nop
        mov dl, byte ptr ds : [public_612700]
        test dl, dl
        sete al
        mov byte ptr ds : [public_612700], al
        push eax
        call public_4c79a0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbe2c : nop
        mov dl, byte ptr ds : [public_674aa4]
        test dl, dl
        sete al
        mov byte ptr ds : [public_674aa4], al
        push eax
        call public_4c79d0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbe51 : nop
        mov al, byte ptr ds : [esi+0x14C]
        test al, al
        jne public_4dbe6a
        mov edx, dword ptr ds : [esi-0x384]
        lea ecx, ds:[esi-0x384]
        call dword ptr ds : [edx+0x30]
        public_4dbe6a : nop
        push ebp
        push 4
        mov dword ptr ds : [esi+0x21C], ebp
        call public_4c8120
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbe87 : nop
        mov al, byte ptr ds : [esi+0x14C]
        test al, al
        jne public_4dbea0
        mov eax, dword ptr ds : [esi-0x384]
        lea ecx, ds:[esi-0x384]
        call dword ptr ds : [eax+0x30]
        public_4dbea0 : nop
        push 1
        push 4
        mov dword ptr ds : [esi+0x21C], 1
        call public_4c8120
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dbec2 : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x68], edx
        je public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dbf1a : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 1
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0x24]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dbf72 : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 2
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0x48]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dbfca : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 3
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0x6C]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dc022 : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 4
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0x90]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dc07d : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 5
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0xB4]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dc0d8 : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 6
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0xD8]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dc133 : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 7
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0xFC]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dc18e : nop
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x210]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 8
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov edx, dword ptr ds : [esi+0x20C]
        mov ax, word ptr ds : [edx+0x120]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], ax
        push ecx
        jmp public_4dc220
        public_4dc1e6 : nop
        lea ecx, ds:[esi+0x208]
        call public_5756d0
        cmp eax, 9
        jbe public_4dc409
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc409
        mov ecx, dword ptr ds : [esi+0x20C]
        mov dx, word ptr ds : [ecx+0x144]
        lea eax, ss:[esp+0x14]
        mov word ptr ss : [esp+0x68], dx
        push eax
        public_4dc220 : nop
        mov ecx, dword ptr ds : [public_674b70]
        call public_4f1da0
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [edi+4]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[edi+4]
        push 1
        lea eax, ss:[esp+0x74]
        push eax
        call dword ptr ds : [edx+0x34]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc252 : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        test eax, eax
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        jmp public_4dc3f6
        public_4dc27b : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 1
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x24]
        jmp public_4dc3f6
        public_4dc2a6 : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 2
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x48]
        jmp public_4dc3f6
        public_4dc2d1 : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 3
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x6C]
        jmp public_4dc3f6
        public_4dc2fc : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 4
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x90]
        jmp public_4dc3f6
        public_4dc32a : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 5
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xB4]
        jmp public_4dc3f6
        public_4dc358 : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 6
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xD8]
        jmp public_4dc3f6
        public_4dc383 : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 7
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xFC]
        jmp public_4dc3f6
        public_4dc3aa : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 8
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x120]
        jmp public_4dc3f6
        public_4dc3d1 : nop
        add esi, 0xFFFFFC7C
        lea ecx, ds:[esi+0x58C]
        call public_5756d0
        cmp eax, 9
        jbe public_4dc409
        mov ecx, dword ptr ds : [esi+0x590]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x144]
        public_4dc3f6 : nop
        push edx
        mov ecx, esi
        call public_4db930
        mov eax, dword ptr ds : [public_5d8484]
        mov dword ptr ds : [esi+0x588], eax
        public_4dc409 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc415 : nop
        mov ecx, offset public_674c0c
        call public_4f6170
        push eax
        mov ecx, offset public_674c0c
        call public_4f5580
        push ebp
        mov ecx, offset public_674c0c
        call public_4f6180
        push ebp
        mov ecx, offset public_674c0c
        call public_4f5920
        mov dword ptr ds : [esi+0x180], ebp
        mov ecx, dword ptr ds : [public_5d8484]
        pop edi
        mov dword ptr ds : [esi+0x204], ecx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc45e : nop
        mov ecx, offset public_674c0c
        call public_4f6170
        push eax
        mov ecx, offset public_674c0c
        call public_4f5580
        push 1
        mov ecx, offset public_674c0c
        call public_4f6180
        push 1
        mov ecx, offset public_674c0c
        call public_4f5920
        mov dword ptr ds : [esi+0x180], 1
        mov edx, dword ptr ds : [public_5d8484]
        pop edi
        mov dword ptr ds : [esi+0x204], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc4ad : nop
        mov ecx, offset public_674c0c
        call public_4f6170
        push eax
        mov ecx, offset public_674c0c
        call public_4f5580
        push 2
        mov ecx, offset public_674c0c
        call public_4f6180
        push 2
        mov ecx, offset public_674c0c
        call public_4f5920
        mov dword ptr ds : [esi+0x180], 2
        mov eax, dword ptr ds : [public_5d8484]
        pop edi
        mov dword ptr ds : [esi+0x204], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc4fb : nop
        mov ecx, offset public_674c0c
        call public_4f6170
        push eax
        mov ecx, offset public_674c0c
        call public_4f5580
        push 3
        mov ecx, offset public_674c0c
        call public_4f6180
        push 3
        mov ecx, offset public_674c0c
        call public_4f5920
        mov dword ptr ds : [esi+0x180], 3
        mov ecx, dword ptr ds : [public_5d8484]
        pop edi
        mov dword ptr ds : [esi+0x204], ecx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc54a : nop
        mov ecx, offset public_674c0c
        call public_4f6170
        push eax
        mov ecx, offset public_674c0c
        call public_4f5580
        push 4
        mov ecx, offset public_674c0c
        call public_4f6180
        push 4
        mov ecx, offset public_674c0c
        call public_4f5920
        mov dword ptr ds : [esi+0x180], 4
        mov edx, dword ptr ds : [public_5d8484]
        pop edi
        mov dword ptr ds : [esi+0x204], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc599 : nop
        mov ecx, offset public_674c0c
        call public_4f6170
        push eax
        mov ecx, offset public_674c0c
        call public_4f5580
        push 5
        mov ecx, offset public_674c0c
        call public_4f6180
        push 5
        mov ecx, offset public_674c0c
        call public_4f5920
        mov dword ptr ds : [esi+0x180], 5
        mov eax, dword ptr ds : [public_5d8484]
        pop edi
        mov dword ptr ds : [esi+0x204], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc5e7 : nop
        call public_54baf0
        mov edi, eax
        cmp edi, ebp
        je public_4dc65d
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_674b70]
        call public_4f1da0
        cmp dword ptr ds : [esi+0x180], ebp
        jne public_4dc62c
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [edi+4]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        lea ecx, ds:[edi+4]
        push ebp
        call dword ptr ds : [edx+0x34]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc62c : nop
        push 0x10
        lea ecx, ss:[esp+0x28]
        push ecx
        push ebp
        mov ecx, offset public_674c0c
        call public_4f5790
        cmp eax, ebp
        jle public_4dc65d
        mov esi, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [edi+4]
        push esi
        lea esi, ss:[esp+0x18]
        push esi
        push eax
        lea eax, ss:[esp+0x30]
        lea ecx, ds:[edi+4]
        push eax
        call dword ptr ds : [edx+0x34]
        public_4dc65d : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc669 : nop
        push 1
        lea ecx, ds:[esi-0x384]
        call public_4dcc60
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc682 : nop
        push 2
        lea ecx, ds:[esi-0x384]
        call public_4dcc60
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc69b : nop
        push 3
        lea ecx, ds:[esi-0x384]
        call public_4dcc60
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc6b4 : nop
        push 4
        lea ecx, ds:[esi-0x384]
        call public_4dcc60
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc6cd : nop
        push 5
        lea ecx, ds:[esi-0x384]
        call public_4dcc60
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc6e6 : nop
        push ebp
        mov ecx, offset public_674c0c
        call public_4f5580
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc6fd : nop
        push 1
        mov ecx, offset public_674c0c
        call public_4f5580
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc715 : nop
        push 2
        mov ecx, offset public_674c0c
        call public_4f5580
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc72d : nop
        push 3
        mov ecx, offset public_674c0c
        call public_4f5580
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc745 : nop
        push 4
        mov ecx, offset public_674c0c
        call public_4f5580
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc75d : nop
        push 5
        mov ecx, offset public_674c0c
        call public_4f5580
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc775 : nop
        mov eax, dword ptr ds : [public_674a8c]
        push eax
        call public_4c45d0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        je public_4dc7ce
        mov ecx, edi
        call dword ptr ds : [public_5c6504]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jnp public_4dc7ce
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        lea ecx, ds:[ebx+4]
        push eax
        call dword ptr ds : [edx+0x58]
        push 0x28
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc7ce : nop
        push 0x2A
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc7e4 : nop
        mov eax, dword ptr ds : [public_674a88]
        push eax
        call public_4c45d0
        mov ebx, eax
        add esp, 4
        cmp ebx, ebp
        je public_4dc859
        push 0x100
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c64f4]
        mov ebp, dword ptr ds : [public_5c64f0]
        lea ecx, ss:[esp+0x14]
        add edi, 0xE4
        push ecx
        mov ecx, edi
        call ebp
        mov esi, eax
        test esi, esi
        je public_4dc859
        public_4dc822 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4dc84a
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4dc86f
        public_4dc84a : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call ebp
        mov esi, eax
        test esi, esi
        jne public_4dc822
        public_4dc859 : nop
        push 0x2B
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_4dc86f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ds:[edx+4]
        mov edx, dword ptr ds : [public_673344]
        push edx
        mov edx, dword ptr ds : [ebx+0x14]
        push edx
        xor edx, edx
        mov dx, word ptr ds : [ebx+2]
        push edx
        call dword ptr ds : [eax+0x58]
        push 0x29
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x4dba50)
        ASM_EXPORT_ENTRY_SINGLE(0x4dba89, public_4dba89)
    }
}

#undef public_4dba89
#undef public_4dba95
#undef public_4dbae3
#undef public_4dbafa
#undef public_4dbb2a
#undef public_4dbb40
#undef public_4dbb70
#undef public_4dbb86
#undef public_4dbbb6
#undef public_4dbbcc
#undef public_4dbbfc
#undef public_4dbc12
#undef public_4dbc2d
#undef public_4dbc48
#undef public_4dbc60
#undef public_4dbc79
#undef public_4dbc92
#undef public_4dbcf5
#undef public_4dbd0c
#undef public_4dbd37
#undef public_4dbd98
#undef public_4dbdb4
#undef public_4dbddc
#undef public_4dbdf2
#undef public_4dbe07
#undef public_4dbe2c
#undef public_4dbe51
#undef public_4dbe6a
#undef public_4dbe87
#undef public_4dbea0
#undef public_4dbec2
#undef public_4dbf1a
#undef public_4dbf72
#undef public_4dbfca
#undef public_4dc022
#undef public_4dc07d
#undef public_4dc0d8
#undef public_4dc133
#undef public_4dc18e
#undef public_4dc1e6
#undef public_4dc220
#undef public_4dc252
#undef public_4dc27b
#undef public_4dc2a6
#undef public_4dc2d1
#undef public_4dc2fc
#undef public_4dc32a
#undef public_4dc358
#undef public_4dc383
#undef public_4dc3aa
#undef public_4dc3d1
#undef public_4dc3f6
#undef public_4dc409
#undef public_4dc415
#undef public_4dc45e
#undef public_4dc4ad
#undef public_4dc4fb
#undef public_4dc54a
#undef public_4dc599
#undef public_4dc5e7
#undef public_4dc62c
#undef public_4dc65d
#undef public_4dc669
#undef public_4dc682
#undef public_4dc69b
#undef public_4dc6b4
#undef public_4dc6cd
#undef public_4dc6e6
#undef public_4dc6fd
#undef public_4dc715
#undef public_4dc72d
#undef public_4dc745
#undef public_4dc75d
#undef public_4dc775
#undef public_4dc7ce
#undef public_4dc7e4
#undef public_4dc822
#undef public_4dc84a
#undef public_4dc859
#undef public_4dc86f

#pragma init_seg(compiler)
extern "C" void const* const public_4dba89 = __AsmFindLabelExport(&internal_4dba50, 0x4dba89);
