#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8cd9a _public_6d8cd9a

PROC_DECLARE(0x6d8cd60, internal_6d8cd60, public_6d8cd60);
extern "C" NAKED register_t __cdecl internal_6d8cd60()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 6
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8cd9a
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        lea ecx, ds:[edx+0x20]
        call dword ptr ds : [public_6db30b0]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6d8cd9a : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8cd60)
    }
}

#undef public_6d8cd9a
