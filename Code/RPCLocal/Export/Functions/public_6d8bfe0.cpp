#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8c02c _public_6d8c02c

PROC_DECLARE(0x6d8bfe0, internal_6d8bfe0, public_6d8bfe0);
extern "C" NAKED register_t __cdecl internal_6d8bfe0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x3C
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8c02c
        mov eax, dword ptr ss : [esp+0x10]
        movzx ecx, word ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8c02c : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8bfe0)
    }
}

#undef public_6d8c02c
