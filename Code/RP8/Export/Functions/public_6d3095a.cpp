#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3095a);

#define public_6d309d1 _public_6d309d1
#define public_6d309db _public_6d309db
#define public_6d309e5 _public_6d309e5
#define public_6d309ef _public_6d309ef
#define public_6d309f9 _public_6d309f9
#define public_6d30a1c _public_6d30a1c
#define public_6d30a26 _public_6d30a26
#define public_6d30a30 _public_6d30a30
#define public_6d30a3a _public_6d30a3a
#define public_6d30a79 _public_6d30a79
#define public_6d30a83 _public_6d30a83
#define public_6d30a8d _public_6d30a8d
#define public_6d30a97 _public_6d30a97
#define public_6d30aa1 _public_6d30aa1
#define public_6d30aab _public_6d30aab
#define public_6d30ab5 _public_6d30ab5
#define public_6d30abf _public_6d30abf
#define public_6d30b09 _public_6d30b09
#define public_6d30b13 _public_6d30b13
#define public_6d30b1d _public_6d30b1d
#define public_6d30b24 _public_6d30b24
#define public_6d30b2b _public_6d30b2b
#define public_6d30b32 _public_6d30b32
#define public_6d30b39 _public_6d30b39
#define public_6d30b40 _public_6d30b40
#define public_6d30b75 _public_6d30b75
#define public_6d30b7c _public_6d30b7c
#define public_6d30b83 _public_6d30b83
#define public_6d30b8a _public_6d30b8a
#define public_6d30b91 _public_6d30b91
#define public_6d30b98 _public_6d30b98
#define public_6d30b9d _public_6d30b9d
#define public_6d30ba5 _public_6d30ba5
#define public_6d30bab _public_6d30bab
#define public_6d30bc2 _public_6d30bc2

PROC_DECLARE(0x6d3095a, internal_6d3095a, public_6d3095a);
extern "C" NAKED register_t __cdecl internal_6d3095a()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6d30bc2
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_6d30bc2
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, 0x88760866
        cmp eax, ecx
        jg public_6d30abf
        je public_6d30ab5
        add ecx, 0xFFFFFFB6
        cmp eax, ecx
        jg public_6d30a3a
        je public_6d30a30
        mov ecx, 0x88760818
        cmp eax, ecx
        jg public_6d309f9
        je public_6d309ef
        cmp eax, 0x80004001
        je public_6d309e5
        cmp eax, 0x80004005
        je public_6d309db
        cmp eax, 0x8007000E
        je public_6d309d1
        cmp eax, 0x8876017C
        jne public_6d30ba5
        mov eax, offset public_6d5f538
        jmp public_6d30b9d
        public_6d309d1 : nop
        mov eax, offset public_6d5f528
        jmp public_6d30b9d
        public_6d309db : nop
        mov eax, offset public_6d5f520
        jmp public_6d30b9d
        public_6d309e5 : nop
        mov eax, offset public_6d5f514
        jmp public_6d30b9d
        public_6d309ef : nop
        mov eax, offset public_6d5f4f8
        jmp public_6d30b9d
        public_6d309f9 : nop
        cmp eax, 0x88760819
        je public_6d30a26
        cmp eax, 0x8876081A
        je public_6d30a1c
        cmp eax, 0x8876081B
        jne public_6d30ba5
        mov eax, offset public_6d5f4d4
        jmp public_6d30b9d
        public_6d30a1c : nop
        mov eax, offset public_6d5f4b8
        jmp public_6d30b9d
        public_6d30a26 : nop
        mov eax, offset public_6d5f494
        jmp public_6d30b9d
        public_6d30a30 : nop
        mov eax, offset public_6d5f478
        jmp public_6d30b9d
        public_6d30a3a : nop
        cmp eax, 0x8876081D
        je public_6d30aab
        cmp eax, 0x8876081E
        je public_6d30aa1
        cmp eax, 0x8876081F
        je public_6d30a97
        cmp eax, 0x88760821
        je public_6d30a8d
        cmp eax, 0x88760822
        je public_6d30a83
        cmp eax, 0x88760826
        je public_6d30a79
        cmp eax, 0x88760827
        jne public_6d30ba5
        mov eax, offset public_6d5f45c
        jmp public_6d30b9d
        public_6d30a79 : nop
        mov eax, offset public_6d5f438
        jmp public_6d30b9d
        public_6d30a83 : nop
        mov eax, offset public_6d5f418
        jmp public_6d30b9d
        public_6d30a8d : nop
        mov eax, offset public_6d5f3f8
        jmp public_6d30b9d
        public_6d30a97 : nop
        mov eax, offset public_6d5f3d8
        jmp public_6d30b9d
        public_6d30aa1 : nop
        mov eax, offset public_6d5f3b8
        jmp public_6d30b9d
        public_6d30aab : nop
        mov eax, offset public_6d5f39c
        jmp public_6d30b9d
        public_6d30ab5 : nop
        mov eax, offset public_6d5f38c
        jmp public_6d30b9d
        public_6d30abf : nop
        mov ecx, 0x88760B54
        cmp eax, ecx
        jg public_6d30b40
        je public_6d30b39
        cmp eax, 0x88760867
        je public_6d30b32
        cmp eax, 0x88760868
        je public_6d30b2b
        cmp eax, 0x88760869
        je public_6d30b24
        cmp eax, 0x8876086A
        je public_6d30b1d
        cmp eax, 0x8876086B
        je public_6d30b13
        cmp eax, 0x8876086C
        je public_6d30b09
        cmp eax, 0x8876086D
        jne public_6d30ba5
        mov eax, offset public_6d5f370
        jmp public_6d30b9d
        public_6d30b09 : nop
        mov eax, offset public_6d5f35c
        jmp public_6d30b9d
        public_6d30b13 : nop
        mov eax, offset public_6d5f344
        jmp public_6d30b9d
        public_6d30b1d : nop
        mov eax, offset public_6d5f330
        jmp public_6d30b9d
        public_6d30b24 : nop
        mov eax, offset public_6d5f318
        jmp public_6d30b9d
        public_6d30b2b : nop
        mov eax, offset public_6d5f304
        jmp public_6d30b9d
        public_6d30b32 : nop
        mov eax, offset public_6d5f2f4
        jmp public_6d30b9d
        public_6d30b39 : nop
        mov eax, offset public_6d5f2d4
        jmp public_6d30b9d
        public_6d30b40 : nop
        cmp eax, 0x88760B55
        je public_6d30b98
        cmp eax, 0x88760B56
        je public_6d30b91
        cmp eax, 0x88760B57
        je public_6d30b8a
        cmp eax, 0x88760B58
        je public_6d30b83
        cmp eax, 0x88760B59
        je public_6d30b7c
        cmp eax, 0x88760B5A
        je public_6d30b75
        test eax, eax
        jne public_6d30ba5
        mov eax, offset public_6d5f2cc
        jmp public_6d30b9d
        public_6d30b75 : nop
        mov eax, offset public_6d5f2b0
        jmp public_6d30b9d
        public_6d30b7c : nop
        mov eax, offset public_6d5f29c
        jmp public_6d30b9d
        public_6d30b83 : nop
        mov eax, offset public_6d5f280
        jmp public_6d30b9d
        public_6d30b8a : nop
        mov eax, offset public_6d5f260
        jmp public_6d30b9d
        public_6d30b91 : nop
        mov eax, offset public_6d5f248
        jmp public_6d30b9d
        public_6d30b98 : nop
        mov eax, offset public_6d5f234
        public_6d30b9d : nop
        push eax
/*FIXUP push offset public_6d5f230 @0x6d30b9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f230
        jmp public_6d30bab
        public_6d30ba5 : nop
        push eax
/*FIXUP push offset public_6d5f214 @0x6d30ba6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f214
        public_6d30bab : nop
        push esi
        push edi
        call public_6d2f2d0
        add esp, 0x10
        test eax, eax
        jge public_6d30bc2
        test esi, esi
        jbe public_6d30bc2
        and byte ptr ds : [edi+esi-1], 0
        public_6d30bc2 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6d3095a)
    }
}

#undef public_6d309d1
#undef public_6d309db
#undef public_6d309e5
#undef public_6d309ef
#undef public_6d309f9
#undef public_6d30a1c
#undef public_6d30a26
#undef public_6d30a30
#undef public_6d30a3a
#undef public_6d30a79
#undef public_6d30a83
#undef public_6d30a8d
#undef public_6d30a97
#undef public_6d30aa1
#undef public_6d30aab
#undef public_6d30ab5
#undef public_6d30abf
#undef public_6d30b09
#undef public_6d30b13
#undef public_6d30b1d
#undef public_6d30b24
#undef public_6d30b2b
#undef public_6d30b32
#undef public_6d30b39
#undef public_6d30b40
#undef public_6d30b75
#undef public_6d30b7c
#undef public_6d30b83
#undef public_6d30b8a
#undef public_6d30b91
#undef public_6d30b98
#undef public_6d30b9d
#undef public_6d30ba5
#undef public_6d30bab
#undef public_6d30bc2
