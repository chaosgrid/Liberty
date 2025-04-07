#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_6214c99 _public_6214c99

PROC_DECLARE(0x6214bf0, internal_6214bf0, public_6214bf0);
extern "C" NAKED register_t __cdecl internal_6214bf0()
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
        fld dword ptr ds : [esi+0xA4]
        mov eax, dword ptr ds : [public_62579d8]
        mov dword ptr ss : [esp+4], 0
        fstp dword ptr ss : [esp+8]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        jne public_6214c99
        call public_623e830
        mov dword ptr ds : [public_62579d8], eax
        public_6214c99 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        add esi, 0xAC
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
        UNREACHABLE_TRAP(0x6214bf0)
    }
}

#undef public_6214c99
