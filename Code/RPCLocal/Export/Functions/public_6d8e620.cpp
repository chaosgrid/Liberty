#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8e65e _public_6d8e65e

PROC_DECLARE(0x6d8e620, internal_6d8e620, public_6d8e620);
extern "C" NAKED register_t __cdecl internal_6d8e620()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x12
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8e65e
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], 0x80
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8e65e : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d8e620)
    }
}

#undef public_6d8e65e
