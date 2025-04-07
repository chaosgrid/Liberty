#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8ae89 _public_6d8ae89

PROC_DECLARE(0x6d8ae50, internal_6d8ae50, public_6d8ae50);
extern "C" NAKED register_t __cdecl internal_6d8ae50()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x43
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8ae89
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8ae89 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8ae50)
    }
}

#undef public_6d8ae89
