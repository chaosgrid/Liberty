#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8ceca _public_6d8ceca

PROC_DECLARE(0x6d8ce90, internal_6d8ce90, public_6d8ce90);
extern "C" NAKED register_t __cdecl internal_6d8ce90()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x3A
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8ceca
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
        public_6d8ceca : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8ce90)
    }
}

#undef public_6d8ceca
