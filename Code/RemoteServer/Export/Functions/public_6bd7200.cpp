#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd723a _public_6bd723a

PROC_DECLARE(0x6bd7200, internal_6bd7200, public_6bd7200);
extern "C" NAKED register_t __cdecl internal_6bd7200()
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
        call public_6be1750
        test eax, eax
        jne public_6bd723a
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        lea ecx, ds:[edx+0x20]
        call dword ptr ds : [public_6c0b0d8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6bd723a : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd7200)
    }
}

#undef public_6bd723a
