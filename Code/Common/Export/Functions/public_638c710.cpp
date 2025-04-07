#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_63743a0);
CLANG_FORWARD_PROC_SYMBOL(public_638c710);
CLANG_FORWARD_PROC_SYMBOL(public_638cae0);
CLANG_FORWARD_PROC_SYMBOL(public_638cf40);
CLANG_FORWARD_PROC_SYMBOL(public_638d3e0);
CLANG_FORWARD_PROC_SYMBOL(public_638dba0);
CLANG_FORWARD_PROC_SYMBOL(public_638ddd0);
CLANG_FORWARD_PROC_SYMBOL(public_638e2b0);
CLANG_FORWARD_PROC_SYMBOL(public_638e6d0);
CLANG_FORWARD_PROC_SYMBOL(public_638e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_638f120);

#define public_638c734 _public_638c734
#define public_638c74b _public_638c74b
#define public_638c74e _public_638c74e
#define public_638c785 _public_638c785
#define public_638c79c _public_638c79c
#define public_638c825 _public_638c825
#define public_638c840 _public_638c840
#define public_638c847 _public_638c847
#define public_638c85b _public_638c85b
#define public_638c86e _public_638c86e
#define public_638c894 _public_638c894
#define public_638c8c5 _public_638c8c5
#define public_638c8dc _public_638c8dc

PROC_DECLARE(0x638c710, internal_638c710, public_638c710);
extern "C" NAKED register_t __cdecl internal_638c710()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b674]
        test eax, eax
        mov dword ptr ss : [esp], 0
        je public_638c734
        push 0
        call public_638cf40
        add esp, 4
        test eax, eax
        jne public_638c8dc
        public_638c734 : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638c785
        mov eax, dword ptr ds : [public_658b81c]
        test eax, eax
        je public_638c74b
        mov eax, dword ptr ds : [eax+0x4C]
        jmp public_638c74e
        public_638c74b : nop
        or eax, 0xFFFFFFFF
        public_638c74e : nop
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        and ecx, 0xFFFFFF
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63f9f60 @0x638c776*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9f60
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        public_638c785 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_638c79c
        cmp dword ptr ds : [public_658b844], 0x32
        jge public_638c79c
        call public_63743a0
        public_638c79c : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658b694], edx
        mov edx, dword ptr ds : [public_658b80c]
        mov dword ptr ds : [public_658b690], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov dword ptr ds : [public_658b698], eax
        mov dword ptr ds : [public_658b69c], ecx
        call public_636ec70
        mov dword ptr ds : [public_658b8f4], eax
        mov eax, dword ptr ds : [public_658b80c]
        push eax
        call public_636ec70
        mov dword ptr ds : [public_658b8f0], eax
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 8
        cmp eax, 3
        jl public_638c85b
        mov ecx, dword ptr ds : [public_658b81c]
        push esi
        push ecx
        call public_638e6d0
        mov eax, dword ptr ds : [public_658b81c]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call public_638f120
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_638ddd0
        mov esi, dword ptr ds : [public_658b81c]
        add esp, 0x10
        test esi, esi
        je public_638c847
        public_638c825 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_638c847
        test dword ptr ds : [esi+0x50], 0x201000
        jne public_638c840
        push 0
        push esi
        call public_638d3e0
        add esp, 8
        public_638c840 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_638c825
        public_638c847 : nop
        call public_638e9e0
        test eax, eax
        pop esi
        je public_638c86e
        mov dword ptr ss : [esp], 1
        jmp public_638c86e
        public_638c85b : nop
        mov eax, dword ptr ds : [public_658b81c]
        lea edx, ss:[esp]
        push edx
        push eax
        call public_638f120
        add esp, 8
        public_638c86e : nop
        mov edx, dword ptr ds : [public_658b81c]
        lea ecx, ss:[esp]
        push ecx
        push edx
        call public_638dba0
        mov eax, dword ptr ds : [public_658b0a0]
        add esp, 8
        test eax, eax
        je public_638c894
        mov eax, dword ptr ds : [public_658bf58]
        test eax, eax
        je public_638c8c5
        public_638c894 : nop
        mov edx, dword ptr ds : [public_658be88]
        mov eax, dword ptr ds : [public_658b81c]
        inc edx
        push eax
        mov dword ptr ds : [public_658be88], edx
        mov dword ptr ds : [public_658b8c0], 0
        call public_638e2b0
        mov ecx, dword ptr ss : [esp+4]
        push 0
        push ecx
        call public_638cae0
        add esp, 0xC
/*FIXUP public_638c8c5 : nop
        push offset public_658b8f0 @0x638c8c5*/
  FIXUP public_638c8c5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f0
        call public_636ecc0
/*FIXUP push offset public_658b8f4 @0x638c8cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f4
        call public_636ecc0
        add esp, 8
        public_638c8dc : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638c710)
    }
}

#undef public_638c734
#undef public_638c74b
#undef public_638c74e
#undef public_638c785
#undef public_638c79c
#undef public_638c825
#undef public_638c840
#undef public_638c847
#undef public_638c85b
#undef public_638c86e
#undef public_638c894
#undef public_638c8c5
#undef public_638c8dc
