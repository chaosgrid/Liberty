#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5574d0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_55753c _public_55753c

PROC_DECLARE(0x5574d0, internal_5574d0, public_5574d0);
extern "C" NAKED register_t __cdecl internal_5574d0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi], 0
        push edi
        je public_55753c
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_55753c
        push 0x26
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_55753c
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push 0
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
        jl public_55753c
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        call public_41c8d0
        add esp, 0xC
        test al, al
        je public_55753c
        mov esi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x24]
        public_55753c : nop
        pop edi
        pop esi
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x5574d0)
    }
}

#undef public_55753c
