#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d9aab0);

#define public_6d8db66 _public_6d8db66

PROC_DECLARE(0x6d8db10, internal_6d8db10, public_6d8db10);
extern "C" NAKED register_t __cdecl internal_6d8db10()
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
        call public_6d96300
        test eax, eax
        jne public_6d8db66
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push edi
        push ecx
        lea ecx, ds:[edx+0x20]
        call dword ptr ds : [public_6db30b0]
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call dword ptr ds : [public_6db31ec]
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        inc eax
        push eax
        push edi
        call public_6d9aab0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        pop edi
        public_6d8db66 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8db10)
    }
}

#undef public_6d8db66
