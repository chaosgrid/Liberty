#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_622424b _public_622424b

PROC_DECLARE(0x62241a0, internal_62241a0, public_62241a0);
extern "C" NAKED register_t __cdecl internal_62241a0()
{
    __asm
    {
        sub esp, 0x48
        mov eax, dword ptr ss : [esp+0x4C]
        push esi
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0x54]
        push edx
        push eax
        push esi
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
        call dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [public_6257a40]
        mov dword ptr ss : [esp+4], 0
        fchs 
        fstp dword ptr ss : [esp+8]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        jne public_622424b
        call public_623e830
        mov dword ptr ds : [public_6257a40], eax
        public_622424b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        add esi, 0xA4
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
        UNREACHABLE_TRAP(0x62241a0)
    }
}

#undef public_622424b
