#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8cd58 _public_6d8cd58

PROC_DECLARE(0x6d8cd30, internal_6d8cd30, public_6d8cd30);
extern "C" NAKED register_t __cdecl internal_6d8cd30()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x42
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8cd58
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8cd58 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d8cd30)
    }
}

#undef public_6d8cd58
