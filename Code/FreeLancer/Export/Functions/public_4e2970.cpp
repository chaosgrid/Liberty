#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_45e360);
CLANG_FORWARD_PROC_SYMBOL(public_468a80);
CLANG_FORWARD_PROC_SYMBOL(public_468c00);
CLANG_FORWARD_PROC_SYMBOL(public_46b400);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4e4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_4e4cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4e54c0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_543320);
CLANG_FORWARD_PROC_SYMBOL(public_5449f0);
CLANG_FORWARD_PROC_SYMBOL(public_544b90);
CLANG_FORWARD_PROC_SYMBOL(public_544c30);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4e29ee _public_4e29ee
#define public_4e2a0f _public_4e2a0f
#define public_4e2a39 _public_4e2a39
#define public_4e2a63 _public_4e2a63
#define public_4e2a88 _public_4e2a88
#define public_4e2a94 _public_4e2a94
#define public_4e2aa3 _public_4e2aa3
#define public_4e2aa5 _public_4e2aa5
#define public_4e2ac6 _public_4e2ac6
#define public_4e2afa _public_4e2afa
#define public_4e2b16 _public_4e2b16
#define public_4e2b46 _public_4e2b46
#define public_4e2b5d _public_4e2b5d
#define public_4e2b92 _public_4e2b92
#define public_4e2bc7 _public_4e2bc7
#define public_4e2bdb _public_4e2bdb
#define public_4e2bea _public_4e2bea
#define public_4e2bf6 _public_4e2bf6
#define public_4e2c0a _public_4e2c0a
#define public_4e2c19 _public_4e2c19
#define public_4e2c25 _public_4e2c25
#define public_4e2c44 _public_4e2c44
#define public_4e2c5c _public_4e2c5c
#define public_4e2c6b _public_4e2c6b
#define public_4e2c6d _public_4e2c6d
#define public_4e2cbf _public_4e2cbf
#define public_4e2ccb _public_4e2ccb
#define public_4e2db4 _public_4e2db4
#define public_4e2dcc _public_4e2dcc
#define public_4e2e01 _public_4e2e01
#define public_4e2e40 _public_4e2e40
#define public_4e2e58 _public_4e2e58
#define public_4e2e89 _public_4e2e89
#define public_4e2e8e _public_4e2e8e
#define public_4e2e9a _public_4e2e9a
#define public_4e2eba _public_4e2eba
#define public_4e2ebc _public_4e2ebc
#define public_4e2ed7 _public_4e2ed7
#define public_4e2ede _public_4e2ede

PROC_DECLARE(0x4e2970, internal_4e2970, public_4e2970);
extern "C" NAKED register_t __cdecl internal_4e2970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call public_45a740
        test al, al
        jne public_4e2ede
        call public_54baf0
        mov esi, eax
        test esi, esi
        je public_4e2ede
        mov eax, dword ptr ds : [esi+0x1C]
        mov ebx, 1
        cmp eax, ebx
        jne public_4e2ede
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_4e2ede
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4e2ede
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4e2ede
        mov edx, dword ptr ss : [esp+0x34]
        lea eax, ds:[edx-0x21]
        cmp eax, 0xAB
        ja public_4e2ede
/*FIXUP movzx eax, byte ptr ds : [eax+public_4e2f34] @0x4e29e0*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4e2eec] @0x4e29e7*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000c028
  JMPTB mov eax, 0
  JMPTB public_4c0000000000c028 : nop
        je public_4e2b5d
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000c024
  JMPTB mov eax, 1
  JMPTB public_4c0000000000c024 : nop
        je public_4e2b92
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000c020
  JMPTB mov eax, 2
  JMPTB public_4c0000000000c020 : nop
        je public_4e2e9a
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000c01c
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c01c : nop
        je public_4e2a39
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000c018
  JMPTB mov eax, 4
  JMPTB public_4c0000000000c018 : nop
        je public_4e2a0f
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000c014
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c014 : nop
        je public_4e2a63
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000c010
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000c010 : nop
        je public_4e2ede
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000c00c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000c00c : nop
        je public_4e2ede
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000c008
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000c008 : nop
        je public_4e2ede
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000c004
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000c004 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000c000
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000c000 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000bffc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bffc : nop
        je public_4e2ede
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000bff8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bff8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000bff4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bff4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000bff0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bff0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000bfec
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfec : nop
        je public_4e2ede
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000bfe8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfe8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000bfe4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfe4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000bfe0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfe0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000bfdc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfdc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000bfd8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfd8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000bfd4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfd4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000bfd0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfd0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000bfcc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfcc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000bfc8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfc8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000bfc4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfc4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000bfc0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfc0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000bfbc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfbc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000bfb8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfb8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000bfb4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfb4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000bfb0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfb0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000bfac
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfac : nop
        je public_4e2ede
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000bfa8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfa8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000bfa4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfa4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000bfa0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bfa0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000bf9c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf9c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000bf98
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf98 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000bf94
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf94 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000bf90
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf90 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000bf8c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf8c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000bf88
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf88 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000bf84
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf84 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000bf80
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf80 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000bf7c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf7c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000bf78
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf78 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000bf74
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf74 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000bf70
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf70 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000bf6c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf6c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000bf68
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf68 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000bf64
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf64 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000bf60
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf60 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000bf5c
  JMPTB mov eax, 6
  JMPTB public_4c0000000000bf5c : nop
        je public_4e2bc7
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000bf58
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf58 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000bf54
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf54 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000bf50
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf50 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000bf4c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000bf4c : nop
        je public_4e2c25
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000bf48
  JMPTB mov eax, 8
  JMPTB public_4c0000000000bf48 : nop
        je public_4e2bf6
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000bf44
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf44 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000bf40
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf40 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000bf3c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf3c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000bf38
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf38 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000bf34
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf34 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000bf30
  JMPTB mov eax, 9
  JMPTB public_4c0000000000bf30 : nop
        je public_4e2c0a
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000bf2c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf2c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c0000000000bf28
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf28 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c0000000000bf24
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf24 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c0000000000bf20
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf20 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c0000000000bf1c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf1c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c0000000000bf18
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf18 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c0000000000bf14
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf14 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c0000000000bf10
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf10 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c0000000000bf0c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf0c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c0000000000bf08
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf08 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c0000000000bf04
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf04 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c0000000000bf00
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bf00 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c0000000000befc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000befc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c0000000000bef8
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000bef8 : nop
        je public_4e2bdb
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c0000000000bef4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bef4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c0000000000bef0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bef0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c0000000000beec
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000beec : nop
        je public_4e2ede
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c0000000000bee8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bee8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c0000000000bee4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bee4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c0000000000bee0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bee0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c0000000000bedc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bedc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c0000000000bed8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bed8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c0000000000bed4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bed4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c0000000000bed0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bed0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c0000000000becc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000becc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c0000000000bec8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bec8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c0000000000bec4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bec4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c0000000000bec0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bec0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c0000000000bebc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bebc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c0000000000beb8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000beb8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c0000000000beb4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000beb4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c0000000000beb0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000beb0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c0000000000beac
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000beac : nop
        je public_4e2ede
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c0000000000bea8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bea8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c0000000000bea4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bea4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c0000000000bea0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bea0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c0000000000be9c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be9c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c0000000000be98
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be98 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c0000000000be94
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be94 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c0000000000be90
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be90 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c0000000000be8c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be8c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c0000000000be88
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be88 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c0000000000be84
  JMPTB mov eax, 0xB
  JMPTB public_4c0000000000be84 : nop
        je public_4e2ac6
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c0000000000be80
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000be80 : nop
        je public_4e2a94
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c0000000000be7c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be7c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c0000000000be78
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be78 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c0000000000be74
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be74 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c0000000000be70
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be70 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c0000000000be6c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be6c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c0000000000be68
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be68 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c0000000000be64
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be64 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c0000000000be60
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be60 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c0000000000be5c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be5c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c0000000000be58
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be58 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c0000000000be54
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be54 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c0000000000be50
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be50 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c0000000000be4c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be4c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c0000000000be48
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be48 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c0000000000be44
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be44 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c0000000000be40
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be40 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c0000000000be3c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be3c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c0000000000be38
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be38 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c0000000000be34
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be34 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c0000000000be30
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be30 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c0000000000be2c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be2c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x80
  JMPTB jne public_4c0000000000be28
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be28 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x81
  JMPTB jne public_4c0000000000be24
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be24 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x82
  JMPTB jne public_4c0000000000be20
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be20 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x83
  JMPTB jne public_4c0000000000be1c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be1c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x84
  JMPTB jne public_4c0000000000be18
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be18 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x85
  JMPTB jne public_4c0000000000be14
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be14 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x86
  JMPTB jne public_4c0000000000be10
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be10 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x87
  JMPTB jne public_4c0000000000be0c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be0c : nop
        je public_4e2ede
  JMPTB cmp eax, 0x88
  JMPTB jne public_4c0000000000be08
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be08 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x89
  JMPTB jne public_4c0000000000be04
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be04 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x8A
  JMPTB jne public_4c0000000000be00
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000be00 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x8B
  JMPTB jne public_4c0000000000bdfc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdfc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x8C
  JMPTB jne public_4c0000000000bdf8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdf8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x8D
  JMPTB jne public_4c0000000000bdf4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdf4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x8E
  JMPTB jne public_4c0000000000bdf0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdf0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x8F
  JMPTB jne public_4c0000000000bdec
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdec : nop
        je public_4e2ede
  JMPTB cmp eax, 0x90
  JMPTB jne public_4c0000000000bde8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bde8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x91
  JMPTB jne public_4c0000000000bde4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bde4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x92
  JMPTB jne public_4c0000000000bde0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bde0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x93
  JMPTB jne public_4c0000000000bddc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bddc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x94
  JMPTB jne public_4c0000000000bdd8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdd8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x95
  JMPTB jne public_4c0000000000bdd4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdd4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x96
  JMPTB jne public_4c0000000000bdd0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdd0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x97
  JMPTB jne public_4c0000000000bdcc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdcc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x98
  JMPTB jne public_4c0000000000bdc8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdc8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x99
  JMPTB jne public_4c0000000000bdc4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdc4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x9A
  JMPTB jne public_4c0000000000bdc0
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000bdc0 : nop
        je public_4e29ee
  JMPTB cmp eax, 0x9B
  JMPTB jne public_4c0000000000bdbc
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdbc : nop
        je public_4e2ede
  JMPTB cmp eax, 0x9C
  JMPTB jne public_4c0000000000bdb8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdb8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x9D
  JMPTB jne public_4c0000000000bdb4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdb4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x9E
  JMPTB jne public_4c0000000000bdb0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdb0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0x9F
  JMPTB jne public_4c0000000000bdac
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bdac : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA0
  JMPTB jne public_4c0000000000bda8
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bda8 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA1
  JMPTB jne public_4c0000000000bda4
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bda4 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA2
  JMPTB jne public_4c0000000000bda0
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bda0 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA3
  JMPTB jne public_4c0000000000bd9c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bd9c : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA4
  JMPTB jne public_4c0000000000bd98
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bd98 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA5
  JMPTB jne public_4c0000000000bd94
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bd94 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA6
  JMPTB jne public_4c0000000000bd90
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bd90 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA7
  JMPTB jne public_4c0000000000bd8c
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bd8c : nop
        je public_4e2ede
  JMPTB cmp eax, 0xA8
  JMPTB jne public_4c0000000000bd88
  JMPTB mov eax, 0xE
  JMPTB public_4c0000000000bd88 : nop
        je public_4e2c5c
  JMPTB cmp eax, 0xA9
  JMPTB jne public_4c0000000000bd84
  JMPTB mov eax, 0xF
  JMPTB public_4c0000000000bd84 : nop
        je public_4e2ccb
  JMPTB cmp eax, 0xAA
  JMPTB jne public_4c0000000000bd80
  JMPTB mov eax, 0x11
  JMPTB public_4c0000000000bd80 : nop
        je public_4e2ede
  JMPTB cmp eax, 0xAB
  JMPTB jne public_4c0000000000bd7c
  JMPTB mov eax, 0x10
  JMPTB public_4c0000000000bd7c : nop
        je public_4e2b16
  JMPTB int 3
        public_4e29ee : nop
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push 0
        lea ecx, ds:[esi+4]
        push 0
        push 0
        call dword ptr ds : [edx+0x34]
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2a0f : nop
        call dword ptr ds : [public_5c6568]
        test eax, eax
        je public_4e2a88
        mov ecx, dword ptr ds : [public_5c6368]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        mov ecx, esi
        push edx
        push eax
        call public_544b90
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2a39 : nop
        call dword ptr ds : [public_5c6564]
        test eax, eax
        je public_4e2a88
        mov ecx, dword ptr ds : [public_5c6368]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        mov ecx, esi
        push edx
        push eax
        call public_544b90
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2a63 : nop
        mov eax, dword ptr ds : [public_673344]
        push eax
        mov ecx, esi
        call public_5449f0
        test eax, eax
        je public_4e2a88
        mov ecx, dword ptr ds : [public_5c6368]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        mov ecx, esi
        push edx
        push eax
        call public_544b90
        public_4e2a88 : nop
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2a94 : nop
        mov edi, dword ptr ds : [edi-0x35C]
        test edi, edi
        je public_4e2aa3
        lea ecx, ds:[edi-8]
        jmp public_4e2aa5
        public_4e2aa3 : nop
        xor ecx, ecx
        public_4e2aa5 : nop
        call public_543320
        mov ecx, eax
        call dword ptr ds : [public_5c6348]
        push eax
        mov ecx, esi
        call public_544c30
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2ac6 : nop
        mov ecx, dword ptr ds : [public_5d8864]
/*FIXUP push offset public_5d021c @0x4e2acc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        mov dword ptr ds : [edi+0x1D4], ecx
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4e2afa
        lea ecx, ds:[edi-0x384]
        call public_4e54c0
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2afa : nop
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0xEF02
        mov ecx, eax
        call dword ptr ds : [edx+0x5C]
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2b16 : nop
        mov eax, dword ptr ds : [public_5d8864]
        mov dword ptr ds : [edi+0x1D4], eax
        mov al, byte ptr ds : [edi+0x14C]
        test al, al
        je public_4e2ede
        cmp dword ptr ds : [edi+0x2C4], ebx
        jne public_4e2b46
        mov edx, dword ptr ds : [edi-0x384]
        lea ecx, ds:[edi-0x384]
        call dword ptr ds : [edx+0x3C]
        public_4e2b46 : nop
        mov eax, dword ptr ds : [public_5d8864]
        mov dword ptr ds : [edi+0x1D4], eax
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2b5d : nop
        lea esi, ds:[edi-0x384]
        mov ecx, esi
        call public_4e4ba0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x3C]
        mov edi, dword ptr ds : [edi+0x180]
        mov edx, dword ptr ds : [edi]
        push 0x14
        push ebx
        push 0x50
        mov ecx, edi
        call dword ptr ds : [edx+0xA8]
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2b92 : nop
        lea esi, ds:[edi-0x384]
        mov ecx, esi
        call public_4e4cc0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x3C]
        mov edi, dword ptr ds : [edi+0x180]
        mov edx, dword ptr ds : [edi]
        push 0x14
        push ebx
        push 0x50
        mov ecx, edi
        call dword ptr ds : [edx+0xA8]
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2bc7 : nop
        mov al, byte ptr ds : [edi+0x14C]
        test al, al
        mov dword ptr ds : [edi+0x2C4], 0
        jne public_4e2bea
        public_4e2bdb : nop
        mov eax, dword ptr ds : [edi-0x384]
        lea ecx, ds:[edi-0x384]
        call dword ptr ds : [eax+0x30]
        public_4e2bea : nop
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2bf6 : nop
        mov al, byte ptr ds : [edi+0x14C]
        test al, al
        mov dword ptr ds : [edi+0x2C4], 2
        jne public_4e2c19
        public_4e2c0a : nop
        mov edx, dword ptr ds : [edi-0x384]
        lea ecx, ds:[edi-0x384]
        call dword ptr ds : [edx+0x30]
        public_4e2c19 : nop
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2c25 : nop
        mov al, byte ptr ds : [edi+0x14C]
        test al, al
        mov dword ptr ds : [edi+0x2C4], ebx
        jne public_4e2c44
        mov eax, dword ptr ds : [edi-0x384]
        lea ecx, ds:[edi-0x384]
        call dword ptr ds : [eax+0x30]
        public_4e2c44 : nop
        mov ecx, dword ptr ds : [public_5d8864]
        mov dword ptr ds : [edi+0x1D4], ecx
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2c5c : nop
        mov edi, dword ptr ds : [edi-0x35C]
        test edi, edi
        je public_4e2c6b
        lea ecx, ds:[edi-8]
        jmp public_4e2c6d
        public_4e2c6b : nop
        xor ecx, ecx
        public_4e2c6d : nop
        call public_543320
        mov ecx, eax
        call dword ptr ds : [public_5c6348]
        test eax, eax
        je public_4e2cbf
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4e2cbf
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e2cbf
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        je public_4e2cbf
        push ecx
        mov eax, esp
        push 0
        mov word ptr ds : [eax], cx
        mov byte ptr ds : [eax+2], 0
        mov byte ptr ds : [eax+3], 0
        call public_45e360
        add esp, 8
        public_4e2cbf : nop
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2ccb : nop
        mov al, byte ptr ds : [public_674b00]
        test al, al
        jne public_4e2e8e
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_4e2e8e
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e2e8e
        add eax, 0xC
        test eax, eax
        je public_4e2e8e
        mov ebx, dword ptr ds : [eax+4]
        test ebx, ebx
        je public_4e2e8e
        mov edx, dword ptr ds : [ebx+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_4e2e8e
        mov eax, dword ptr ds : [ebx+0xB4]
        test eax, eax
        je public_4e2e8e
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0x154]
        push ecx
        mov ecx, ebx
        mov byte ptr ds : [public_674b00], 1
        mov esi, esp
        call dword ptr ds : [public_5c6560]
        mov word ptr ds : [esi], ax
        mov byte ptr ds : [esi+2], 0
        mov byte ptr ds : [esi+3], 0
        call public_46b400
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_4e2e8e
        call public_468a80
        lea ecx, ss:[esp+0x18]
        add edi, 0x1A4
        push ecx
        mov ecx, edi
        mov esi, eax
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], ebp
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x38]
        call public_46bba0
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_46baf0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebp
        je public_4e2e01
        public_4e2db4 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        lea ebx, ds:[eax+8]
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_4e2dcc
        mov ebp, eax
        public_4e2dcc : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebx
        push eax
        call public_46ea00
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x34], eax
        jne public_4e2db4
        mov ebx, dword ptr ss : [esp+0x14]
        public_4e2e01 : nop
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], ebp
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x38]
        call public_46bba0
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        call public_46baf0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebp
        je public_4e2e89
        nop 
        public_4e2e40 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        lea ebx, ds:[eax+8]
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_4e2e58
        mov ebp, eax
        public_4e2e58 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebx
        push eax
        call public_46ea00
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x34], eax
        jne public_4e2e40
        public_4e2e89 : nop
        call public_468c00
        public_4e2e8e : nop
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4e2e9a : nop
        mov eax, dword ptr ds : [edi-0x35C]
        test eax, eax
        je public_4e2ed7
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e2ed7
        mov eax, dword ptr ds : [edi-0x35C]
        test eax, eax
        je public_4e2eba
        add eax, 0xFFFFFFF8
        jmp public_4e2ebc
        public_4e2eba : nop
        xor eax, eax
        public_4e2ebc : nop
        mov edx, dword ptr ds : [public_673344]
        push edx
        mov edx, dword ptr ds : [public_5c6368]
        movzx edx, word ptr ds : [edx]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        call dword ptr ds : [eax+0x48]
        public_4e2ed7 : nop
        mov byte ptr ds : [edi+0x2DC], 0
        public_4e2ede : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x4e2970)
        ASM_EXPORT_ENTRY_SINGLE(0x4e2ede, public_4e2ede)
    }
}

#undef public_4e29ee
#undef public_4e2a0f
#undef public_4e2a39
#undef public_4e2a63
#undef public_4e2a88
#undef public_4e2a94
#undef public_4e2aa3
#undef public_4e2aa5
#undef public_4e2ac6
#undef public_4e2afa
#undef public_4e2b16
#undef public_4e2b46
#undef public_4e2b5d
#undef public_4e2b92
#undef public_4e2bc7
#undef public_4e2bdb
#undef public_4e2bea
#undef public_4e2bf6
#undef public_4e2c0a
#undef public_4e2c19
#undef public_4e2c25
#undef public_4e2c44
#undef public_4e2c5c
#undef public_4e2c6b
#undef public_4e2c6d
#undef public_4e2cbf
#undef public_4e2ccb
#undef public_4e2db4
#undef public_4e2dcc
#undef public_4e2e01
#undef public_4e2e40
#undef public_4e2e58
#undef public_4e2e89
#undef public_4e2e8e
#undef public_4e2e9a
#undef public_4e2eba
#undef public_4e2ebc
#undef public_4e2ed7
#undef public_4e2ede

#pragma init_seg(compiler)
extern "C" void const* const public_4e2ede = __AsmFindLabelExport(&internal_4e2970, 0x4e2ede);
