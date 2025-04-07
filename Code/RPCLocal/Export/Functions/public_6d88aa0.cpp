#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d97b00);

#define public_6d88add _public_6d88add

PROC_DECLARE(0x6d88aa0, internal_6d88aa0, public_6d88aa0);
extern "C" NAKED register_t __cdecl internal_6d88aa0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x20
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d88add
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push edx
        call public_6d97b00
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6d88add : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d88aa0)
    }
}

#undef public_6d88add
