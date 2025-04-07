#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d97b00);

#define public_6d8db0b _public_6d8db0b

PROC_DECLARE(0x6d8dad0, internal_6d8dad0, public_6d8dad0);
extern "C" NAKED register_t __cdecl internal_6d8dad0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x27
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8db0b
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push edx
        call public_6d97b00
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6d8db0b : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8dad0)
    }
}

#undef public_6d8db0b
