#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6be3bd0);

#define public_6bd7ed6 _public_6bd7ed6

PROC_DECLARE(0x6bd7e80, internal_6bd7e80, public_6bd7e80);
extern "C" NAKED register_t __cdecl internal_6bd7e80()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x1E
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7ed6
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push edi
        push ecx
        lea ecx, ds:[edx+0x20]
        call dword ptr ds : [public_6c0b0d8]
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call dword ptr ds : [public_6c0b210]
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        inc eax
        push eax
        push edi
        call public_6be3bd0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        pop edi
        public_6bd7ed6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd7e80)
    }
}

#undef public_6bd7ed6
