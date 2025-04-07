#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6390b50);
CLANG_FORWARD_PROC_SYMBOL(public_6390cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6390d70);
CLANG_FORWARD_PROC_SYMBOL(public_6390f10);

#define public_6390b6b _public_6390b6b
#define public_6390b75 _public_6390b75
#define public_6390b86 _public_6390b86
#define public_6390b8b _public_6390b8b
#define public_6390b95 _public_6390b95
#define public_6390bb8 _public_6390bb8
#define public_6390bc1 _public_6390bc1
#define public_6390bc8 _public_6390bc8
#define public_6390bdb _public_6390bdb
#define public_6390c0b _public_6390c0b
#define public_6390c25 _public_6390c25
#define public_6390c2d _public_6390c2d
#define public_6390c34 _public_6390c34
#define public_6390c3a _public_6390c3a
#define public_6390c7e _public_6390c7e
#define public_6390c82 _public_6390c82
#define public_6390c8f _public_6390c8f
#define public_6390cb8 _public_6390cb8

PROC_DECLARE(0x6390b50, internal_6390b50, public_6390b50);
extern "C" NAKED register_t __cdecl internal_6390b50()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_658b24c]
        push ebx
        push ebp
        xor ebp, ebp
        cmp eax, 2
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6390b75
        public_6390b6b : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 
        public_6390b75 : nop
        call public_638e9e0
        test eax, eax
        je public_6390b86
        mov dword ptr ss : [esp+0x10], 1
        public_6390b86 : nop
        mov ebx, 4
        public_6390b8b : nop
        mov esi, dword ptr ds : [public_658b81c]
        test esi, esi
        je public_6390bc8
        public_6390b95 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6390bc8
        mov eax, dword ptr ds : [esi+0x50]
        test eax, 0x10000000
        je public_6390bc1
        mov ecx, dword ptr ds : [public_658b0c0]
        test ecx, ecx
        jne public_6390bb8
        and eax, 0xEFFFFFFF
        mov dword ptr ds : [esi+0x50], eax
        public_6390bb8 : nop
        push esi
        call public_6390d70
        add esp, 4
        public_6390bc1 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6390b95
        public_6390bc8 : nop
        mov eax, dword ptr ds : [public_658b0c0]
        test eax, eax
        je public_6390b6b
        mov edi, dword ptr ds : [public_658b81c]
        test edi, edi
        je public_6390c34
        public_6390bdb : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_6390c34
        mov eax, dword ptr ds : [edi+0x50]
        test eax, 0x10000000
        je public_6390c2d
        mov ecx, eax
        mov eax, dword ptr ds : [edi+0x34]
        and ecx, 0xEFFFFFFF
        test eax, eax
        mov dword ptr ds : [edi+0x50], ecx
        je public_6390c2d
        mov esi, eax
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        add esi, ebx
        test eax, eax
        je public_6390c2d
        public_6390c0b : nop
        test dword ptr ds : [eax+0x14], 0x4000000
        je public_6390c25
        push edi
        push eax
        call public_6390f10
        add esp, 8
        test eax, eax
        je public_6390c25
        inc ebp
        sub esi, ebx
        public_6390c25 : nop
        mov eax, dword ptr ds : [esi]
        add esi, ebx
        test eax, eax
        jne public_6390c0b
        public_6390c2d : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_6390bdb
        public_6390c34 : nop
        mov esi, dword ptr ds : [public_658b840]
        public_6390c3a : nop
        test esi, esi
        je public_6390c8f
        cmp dword ptr ds : [esi], 0
        je public_6390c8f
        mov eax, dword ptr ds : [esi+0x14]
        test eax, 0x4000000
        je public_6390c7e
        test eax, 0x8000000
        jne public_6390c7e
        and eax, 0xFBFFFFFF
        mov dword ptr ds : [esi+0x14], eax
        cmp dword ptr ds : [public_658b24c], ebx
        jl public_6390c7e
        push esi
        call public_6390cd0
        add esp, 4
        test eax, eax
        je public_6390c7e
        inc dword ptr ss : [esp+0x14]
        call public_638e9e0
        test eax, eax
        jne public_6390c82
        public_6390c7e : nop
        mov esi, dword ptr ds : [esi]
        jmp public_6390c3a
        public_6390c82 : nop
        mov dword ptr ss : [esp+0x10], 1
        jmp public_6390b8b
        public_6390c8f : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_6390cb8
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
        push ebp
/*FIXUP push offset public_63fb540 @0x6390ca9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb540
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_6390cb8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6390b50)
    }
}

#undef public_6390b6b
#undef public_6390b75
#undef public_6390b86
#undef public_6390b8b
#undef public_6390b95
#undef public_6390bb8
#undef public_6390bc1
#undef public_6390bc8
#undef public_6390bdb
#undef public_6390c0b
#undef public_6390c25
#undef public_6390c2d
#undef public_6390c34
#undef public_6390c3a
#undef public_6390c7e
#undef public_6390c82
#undef public_6390c8f
#undef public_6390cb8
