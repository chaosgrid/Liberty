#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28e00);

#define public_6d28e29 _public_6d28e29
#define public_6d28e3a _public_6d28e3a
#define public_6d28e4b _public_6d28e4b
#define public_6d28e5c _public_6d28e5c
#define public_6d28e8f _public_6d28e8f
#define public_6d28ea0 _public_6d28ea0
#define public_6d28eb1 _public_6d28eb1
#define public_6d28ec2 _public_6d28ec2
#define public_6d28ed3 _public_6d28ed3
#define public_6d28ee4 _public_6d28ee4
#define public_6d28ef5 _public_6d28ef5
#define public_6d28f06 _public_6d28f06
#define public_6d28f20 _public_6d28f20
#define public_6d28f37 _public_6d28f37
#define public_6d28f53 _public_6d28f53
#define public_6d28f6e _public_6d28f6e
#define public_6d28f73 _public_6d28f73

PROC_DECLARE(0x6d28e00, internal_6d28e00, public_6d28e00);
extern "C" NAKED register_t __cdecl internal_6d28e00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        movzx edx, word ptr ds : [ecx]
        add edx, 0xFFFFFFD3
        xor eax, eax
        cmp edx, 0x31
        push edi
        ja public_6d28f73
/*FIXUP movzx edx, byte ptr ds : [edx+public_6d28f94] @0x6d28e1b*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6d28f7c] @0x6d28e22*/
  JMPTB cmp edx, 0
  JMPTB jne public_4c00000000003cd4
  JMPTB mov edx, 0
  JMPTB public_4c00000000003cd4 : nop
        je public_6d28e29
  JMPTB cmp edx, 1
  JMPTB jne public_4c00000000003cd0
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cd0 : nop
        je public_6d28f73
  JMPTB cmp edx, 2
  JMPTB jne public_4c00000000003ccc
  JMPTB mov edx, 5
  JMPTB public_4c00000000003ccc : nop
        je public_6d28f73
  JMPTB cmp edx, 3
  JMPTB jne public_4c00000000003cc8
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cc8 : nop
        je public_6d28f73
  JMPTB cmp edx, 4
  JMPTB jne public_4c00000000003cc4
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cc4 : nop
        je public_6d28f73
  JMPTB cmp edx, 5
  JMPTB jne public_4c00000000003cc0
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cc0 : nop
        je public_6d28f73
  JMPTB cmp edx, 6
  JMPTB jne public_4c00000000003cbc
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cbc : nop
        je public_6d28f73
  JMPTB cmp edx, 7
  JMPTB jne public_4c00000000003cb8
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cb8 : nop
        je public_6d28f73
  JMPTB cmp edx, 8
  JMPTB jne public_4c00000000003cb4
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cb4 : nop
        je public_6d28f73
  JMPTB cmp edx, 9
  JMPTB jne public_4c00000000003cb0
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cb0 : nop
        je public_6d28f73
  JMPTB cmp edx, 0xA
  JMPTB jne public_4c00000000003cac
  JMPTB mov edx, 5
  JMPTB public_4c00000000003cac : nop
        je public_6d28f73
  JMPTB cmp edx, 0xB
  JMPTB jne public_4c00000000003ca8
  JMPTB mov edx, 5
  JMPTB public_4c00000000003ca8 : nop
        je public_6d28f73
  JMPTB cmp edx, 0xC
  JMPTB jne public_4c00000000003ca4
  JMPTB mov edx, 5
  JMPTB public_4c00000000003ca4 : nop
        je public_6d28f73
  JMPTB cmp edx, 0xD
  JMPTB jne public_4c00000000003ca0
  JMPTB mov edx, 5
  JMPTB public_4c00000000003ca0 : nop
        je public_6d28f73
  JMPTB cmp edx, 0xE
  JMPTB jne public_4c00000000003c9c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c9c : nop
        je public_6d28f73
  JMPTB cmp edx, 0xF
  JMPTB jne public_4c00000000003c98
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c98 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x10
  JMPTB jne public_4c00000000003c94
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c94 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x11
  JMPTB jne public_4c00000000003c90
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c90 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x12
  JMPTB jne public_4c00000000003c8c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c8c : nop
        je public_6d28f73
  JMPTB cmp edx, 0x13
  JMPTB jne public_4c00000000003c88
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c88 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x14
  JMPTB jne public_4c00000000003c84
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c84 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x15
  JMPTB jne public_4c00000000003c80
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c80 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x16
  JMPTB jne public_4c00000000003c7c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c7c : nop
        je public_6d28f73
  JMPTB cmp edx, 0x17
  JMPTB jne public_4c00000000003c78
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c78 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x18
  JMPTB jne public_4c00000000003c74
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c74 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x19
  JMPTB jne public_4c00000000003c70
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c70 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1A
  JMPTB jne public_4c00000000003c6c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c6c : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1B
  JMPTB jne public_4c00000000003c68
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c68 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1C
  JMPTB jne public_4c00000000003c64
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c64 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1D
  JMPTB jne public_4c00000000003c60
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c60 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1E
  JMPTB jne public_4c00000000003c5c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c5c : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1F
  JMPTB jne public_4c00000000003c58
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c58 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x20
  JMPTB jne public_4c00000000003c54
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c54 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x21
  JMPTB jne public_4c00000000003c50
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c50 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x22
  JMPTB jne public_4c00000000003c4c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c4c : nop
        je public_6d28f73
  JMPTB cmp edx, 0x23
  JMPTB jne public_4c00000000003c48
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c48 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x24
  JMPTB jne public_4c00000000003c44
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c44 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x25
  JMPTB jne public_4c00000000003c40
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c40 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x26
  JMPTB jne public_4c00000000003c3c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c3c : nop
        je public_6d28f73
  JMPTB cmp edx, 0x27
  JMPTB jne public_4c00000000003c38
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c38 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x28
  JMPTB jne public_4c00000000003c34
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c34 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x29
  JMPTB jne public_4c00000000003c30
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c30 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2A
  JMPTB jne public_4c00000000003c2c
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c2c : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2B
  JMPTB jne public_4c00000000003c28
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c28 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2C
  JMPTB jne public_4c00000000003c24
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c24 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2D
  JMPTB jne public_4c00000000003c20
  JMPTB mov edx, 5
  JMPTB public_4c00000000003c20 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2E
  JMPTB jne public_4c00000000003c1c
  JMPTB mov edx, 1
  JMPTB public_4c00000000003c1c : nop
        je public_6d28f06
  JMPTB cmp edx, 0x2F
  JMPTB jne public_4c00000000003c18
  JMPTB mov edx, 2
  JMPTB public_4c00000000003c18 : nop
        je public_6d28e5c
  JMPTB cmp edx, 0x30
  JMPTB jne public_4c00000000003c14
  JMPTB mov edx, 3
  JMPTB public_4c00000000003c14 : nop
        je public_6d28e4b
  JMPTB cmp edx, 0x31
  JMPTB jne public_4c00000000003c10
  JMPTB mov edx, 4
  JMPTB public_4c00000000003c10 : nop
        je public_6d28e3a
  JMPTB int 3
        public_6d28e29 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x2F
        pop ebx
        ret 8
        public_6d28e3a : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x2D
        pop ebx
        ret 8
        public_6d28e4b : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x31
        pop ebx
        ret 8
        public_6d28e5c : nop
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, 2
        cmp ecx, edx
        mov eax, 0x2E
        mov dword ptr ds : [esi], ecx
        je public_6d28f73
        movzx edx, word ptr ds : [ecx]
        add edx, 0xFFFFFFBC
        cmp edx, 0x33
        ja public_6d28f73
/*FIXUP movzx edx, byte ptr ds : [edx+public_6d28fe8] @0x6d28e81*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6d28fc8] @0x6d28e88*/
  JMPTB cmp edx, 0
  JMPTB jne public_4c00000000003da7
  JMPTB mov edx, 0
  JMPTB public_4c00000000003da7 : nop
        je public_6d28eb1
  JMPTB cmp edx, 1
  JMPTB jne public_4c00000000003da3
  JMPTB mov edx, 7
  JMPTB public_4c00000000003da3 : nop
        je public_6d28f73
  JMPTB cmp edx, 2
  JMPTB jne public_4c00000000003d9f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d9f : nop
        je public_6d28f73
  JMPTB cmp edx, 3
  JMPTB jne public_4c00000000003d9b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d9b : nop
        je public_6d28f73
  JMPTB cmp edx, 4
  JMPTB jne public_4c00000000003d97
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d97 : nop
        je public_6d28f73
  JMPTB cmp edx, 5
  JMPTB jne public_4c00000000003d93
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d93 : nop
        je public_6d28f73
  JMPTB cmp edx, 6
  JMPTB jne public_4c00000000003d8f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d8f : nop
        je public_6d28f73
  JMPTB cmp edx, 7
  JMPTB jne public_4c00000000003d8b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d8b : nop
        je public_6d28f73
  JMPTB cmp edx, 8
  JMPTB jne public_4c00000000003d87
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d87 : nop
        je public_6d28f73
  JMPTB cmp edx, 9
  JMPTB jne public_4c00000000003d83
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d83 : nop
        je public_6d28f73
  JMPTB cmp edx, 0xA
  JMPTB jne public_4c00000000003d7f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d7f : nop
        je public_6d28f73
  JMPTB cmp edx, 0xB
  JMPTB jne public_4c00000000003d7b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d7b : nop
        je public_6d28f73
  JMPTB cmp edx, 0xC
  JMPTB jne public_4c00000000003d77
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d77 : nop
        je public_6d28f73
  JMPTB cmp edx, 0xD
  JMPTB jne public_4c00000000003d73
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d73 : nop
        je public_6d28f73
  JMPTB cmp edx, 0xE
  JMPTB jne public_4c00000000003d6f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d6f : nop
        je public_6d28f73
  JMPTB cmp edx, 0xF
  JMPTB jne public_4c00000000003d6b
  JMPTB mov edx, 1
  JMPTB public_4c00000000003d6b : nop
        je public_6d28ed3
  JMPTB cmp edx, 0x10
  JMPTB jne public_4c00000000003d67
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d67 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x11
  JMPTB jne public_4c00000000003d63
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d63 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x12
  JMPTB jne public_4c00000000003d5f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d5f : nop
        je public_6d28f73
  JMPTB cmp edx, 0x13
  JMPTB jne public_4c00000000003d5b
  JMPTB mov edx, 2
  JMPTB public_4c00000000003d5b : nop
        je public_6d28ef5
  JMPTB cmp edx, 0x14
  JMPTB jne public_4c00000000003d57
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d57 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x15
  JMPTB jne public_4c00000000003d53
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d53 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x16
  JMPTB jne public_4c00000000003d4f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d4f : nop
        je public_6d28f73
  JMPTB cmp edx, 0x17
  JMPTB jne public_4c00000000003d4b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d4b : nop
        je public_6d28f73
  JMPTB cmp edx, 0x18
  JMPTB jne public_4c00000000003d47
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d47 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x19
  JMPTB jne public_4c00000000003d43
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d43 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1A
  JMPTB jne public_4c00000000003d3f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d3f : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1B
  JMPTB jne public_4c00000000003d3b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d3b : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1C
  JMPTB jne public_4c00000000003d37
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d37 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1D
  JMPTB jne public_4c00000000003d33
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d33 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x1E
  JMPTB jne public_4c00000000003d2f
  JMPTB mov edx, 3
  JMPTB public_4c00000000003d2f : nop
        je public_6d28e8f
  JMPTB cmp edx, 0x1F
  JMPTB jne public_4c00000000003d2b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d2b : nop
        je public_6d28f73
  JMPTB cmp edx, 0x20
  JMPTB jne public_4c00000000003d27
  JMPTB mov edx, 4
  JMPTB public_4c00000000003d27 : nop
        je public_6d28ea0
  JMPTB cmp edx, 0x21
  JMPTB jne public_4c00000000003d23
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d23 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x22
  JMPTB jne public_4c00000000003d1f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d1f : nop
        je public_6d28f73
  JMPTB cmp edx, 0x23
  JMPTB jne public_4c00000000003d1b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d1b : nop
        je public_6d28f73
  JMPTB cmp edx, 0x24
  JMPTB jne public_4c00000000003d17
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d17 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x25
  JMPTB jne public_4c00000000003d13
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d13 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x26
  JMPTB jne public_4c00000000003d0f
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d0f : nop
        je public_6d28f73
  JMPTB cmp edx, 0x27
  JMPTB jne public_4c00000000003d0b
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d0b : nop
        je public_6d28f73
  JMPTB cmp edx, 0x28
  JMPTB jne public_4c00000000003d07
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d07 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x29
  JMPTB jne public_4c00000000003d03
  JMPTB mov edx, 7
  JMPTB public_4c00000000003d03 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2A
  JMPTB jne public_4c00000000003cff
  JMPTB mov edx, 7
  JMPTB public_4c00000000003cff : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2B
  JMPTB jne public_4c00000000003cfb
  JMPTB mov edx, 7
  JMPTB public_4c00000000003cfb : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2C
  JMPTB jne public_4c00000000003cf7
  JMPTB mov edx, 7
  JMPTB public_4c00000000003cf7 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2D
  JMPTB jne public_4c00000000003cf3
  JMPTB mov edx, 7
  JMPTB public_4c00000000003cf3 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2E
  JMPTB jne public_4c00000000003cef
  JMPTB mov edx, 7
  JMPTB public_4c00000000003cef : nop
        je public_6d28f73
  JMPTB cmp edx, 0x2F
  JMPTB jne public_4c00000000003ceb
  JMPTB mov edx, 5
  JMPTB public_4c00000000003ceb : nop
        je public_6d28ec2
  JMPTB cmp edx, 0x30
  JMPTB jne public_4c00000000003ce7
  JMPTB mov edx, 7
  JMPTB public_4c00000000003ce7 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x31
  JMPTB jne public_4c00000000003ce3
  JMPTB mov edx, 7
  JMPTB public_4c00000000003ce3 : nop
        je public_6d28f73
  JMPTB cmp edx, 0x32
  JMPTB jne public_4c00000000003cdf
  JMPTB mov edx, 7
  JMPTB public_4c00000000003cdf : nop
        je public_6d28f73
  JMPTB cmp edx, 0x33
  JMPTB jne public_4c00000000003cdb
  JMPTB mov edx, 6
  JMPTB public_4c00000000003cdb : nop
        je public_6d28ee4
  JMPTB int 3
        public_6d28e8f : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x30
        pop ebx
        ret 8
        public_6d28ea0 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x13
        pop ebx
        ret 8
        public_6d28eb1 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x14
        pop ebx
        ret 8
        public_6d28ec2 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x15
        pop ebx
        ret 8
        public_6d28ed3 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 8
        public_6d28ee4 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 8
        public_6d28ef5 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0x18
        pop ebx
        ret 8
        public_6d28f06 : nop
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        mov dx, word ptr ds : [ecx]
        add ecx, 0xFFFFFFFE
        cmp dx, 0x3A
        mov dword ptr ds : [esi], ecx
        jne public_6d28f73
        xor edi, edi
        nop 
        lea esp, ss:[esp]
        public_6d28f20 : nop
        cmp edi, dword ptr ds : [public_6d6a24c]
        jae public_6d28f73
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi*8+public_6d6a250]
        je public_6d28f53
        public_6d28f37 : nop
        mov bl, byte ptr ds : [edx]
        test bl, bl
        je public_6d28f53
        movzx ebp, word ptr ds : [ecx]
        movsx ebx, bl
        cmp ebp, ebx
        jne public_6d28f6e
        mov ebx, dword ptr ss : [esp+0x18]
        add ecx, 2
        inc edx
        cmp ecx, ebx
        jne public_6d28f37
        public_6d28f53 : nop
        cmp byte ptr ds : [edx], 0
        sete cl
        test cl, cl
        je public_6d28f6e
        mov edx, dword ptr ds : [edi*8+public_6d6a254]
        mov ecx, dword ptr ds : [esi]
        lea ecx, ds:[ecx+edx*2]
        lea eax, ds:[edi+0x32]
        mov dword ptr ds : [esi], ecx
        public_6d28f6e : nop
        inc edi
        test eax, eax
        je public_6d28f20
        public_6d28f73 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d28e00)
        ASM_EXPORT_ENTRY_FIRST(0x6d28e29, public_6d28e29)
        ASM_EXPORT_ENTRY(0x6d28e3a, public_6d28e3a)
        ASM_EXPORT_ENTRY(0x6d28e4b, public_6d28e4b)
        ASM_EXPORT_ENTRY(0x6d28e5c, public_6d28e5c)
        ASM_EXPORT_ENTRY(0x6d28e8f, public_6d28e8f)
        ASM_EXPORT_ENTRY(0x6d28ea0, public_6d28ea0)
        ASM_EXPORT_ENTRY(0x6d28eb1, public_6d28eb1)
        ASM_EXPORT_ENTRY(0x6d28ec2, public_6d28ec2)
        ASM_EXPORT_ENTRY(0x6d28ed3, public_6d28ed3)
        ASM_EXPORT_ENTRY(0x6d28ee4, public_6d28ee4)
        ASM_EXPORT_ENTRY(0x6d28ef5, public_6d28ef5)
        ASM_EXPORT_ENTRY(0x6d28f06, public_6d28f06)
        ASM_EXPORT_ENTRY_LAST(0x6d28f73, public_6d28f73)
    }
}

#undef public_6d28e29
#undef public_6d28e3a
#undef public_6d28e4b
#undef public_6d28e5c
#undef public_6d28e8f
#undef public_6d28ea0
#undef public_6d28eb1
#undef public_6d28ec2
#undef public_6d28ed3
#undef public_6d28ee4
#undef public_6d28ef5
#undef public_6d28f06
#undef public_6d28f20
#undef public_6d28f37
#undef public_6d28f53
#undef public_6d28f6e
#undef public_6d28f73

#pragma init_seg(compiler)
extern "C" void const* const public_6d28e29 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28e29);
extern "C" void const* const public_6d28e3a = __AsmFindLabelExport(&internal_6d28e00, 0x6d28e3a);
extern "C" void const* const public_6d28e4b = __AsmFindLabelExport(&internal_6d28e00, 0x6d28e4b);
extern "C" void const* const public_6d28e5c = __AsmFindLabelExport(&internal_6d28e00, 0x6d28e5c);
extern "C" void const* const public_6d28e8f = __AsmFindLabelExport(&internal_6d28e00, 0x6d28e8f);
extern "C" void const* const public_6d28ea0 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28ea0);
extern "C" void const* const public_6d28eb1 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28eb1);
extern "C" void const* const public_6d28ec2 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28ec2);
extern "C" void const* const public_6d28ed3 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28ed3);
extern "C" void const* const public_6d28ee4 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28ee4);
extern "C" void const* const public_6d28ef5 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28ef5);
extern "C" void const* const public_6d28f06 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28f06);
extern "C" void const* const public_6d28f73 = __AsmFindLabelExport(&internal_6d28e00, 0x6d28f73);
