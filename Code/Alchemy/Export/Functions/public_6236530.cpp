#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_62365d3 _public_62365d3

PROC_DECLARE(0x6236530, internal_6236530, public_6236530);
extern "C" NAKED register_t __cdecl internal_6236530()
{
    __asm
    {
        sub esp, 0x48
        mov edx, dword ptr ss : [esp+0x50]
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        call dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [public_6257b3c]
        test eax, eax
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        jne public_62365d3
        call public_623e830
        mov dword ptr ds : [public_6257b3c], eax
        public_62365d3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        add esi, 0xB4
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        pop esi
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6236530)
    }
}

#undef public_62365d3
