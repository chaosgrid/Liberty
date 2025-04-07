#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_638d5a0);
CLANG_FORWARD_PROC_SYMBOL(public_63909c0);
CLANG_FORWARD_PROC_SYMBOL(public_6390cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6391200);
CLANG_FORWARD_PROC_SYMBOL(public_6391b20);

#define public_6390d01 _public_6390d01
#define public_6390d44 _public_6390d44
#define public_6390d5b _public_6390d5b

PROC_DECLARE(0x6390cd0, internal_6390cd0, public_6390cd0);
extern "C" NAKED register_t __cdecl internal_6390cd0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b078]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        xor edi, edi
        cmp eax, 3
        jl public_6390d01
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fb594 @0x6390cf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb594
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6390d01 : nop
        push esi
        call public_63909c0
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        je public_6390d5b
        push esi
        call public_6391b20
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push edx
        push esi
        mov dword ptr ss : [esp+0x20], eax
        call public_638d5a0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        je public_6390d44
        mov eax, dword ptr ss : [esp+0x10]
        push 0
        push 0
        push eax
        push edi
        push esi
        call public_6391200
        add esp, 0x14
        public_6390d44 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        lea edx, ss:[esp+0xC]
        push edx
        call public_636ecc0
        add esp, 8
        public_6390d5b : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6390cd0)
    }
}

#undef public_6390d01
#undef public_6390d44
#undef public_6390d5b
