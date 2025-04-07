#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f170);

#define public_6d17555 _public_6d17555
#define public_6d1759c _public_6d1759c

PROC_DECLARE(0x6d17530, internal_6d17530, public_6d17530);
extern "C" NAKED register_t __cdecl internal_6d17530()
{
    __asm
    {
        push esi
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov esi, dword ptr ss : [esp+0x1C]
        jne public_6d17555
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, esi
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx-0x24]
        test edx, edx
        je public_6d1759c
        public_6d17555 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push 0
        push edx
        call dword ptr ds : [public_6d64250]
        imul esi, 0x418
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ds : [public_6d90260]
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        lea ecx, ds:[esi+edx-0x418]
        call public_6d4f170
        public_6d1759c : nop
        pop esi
        ret 0x18
        UNREACHABLE_TRAP(0x6d17530)
    }
}

#undef public_6d17555
#undef public_6d1759c
