#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_62236a7 _public_62236a7

PROC_DECLARE(0x6223600, internal_6223600, public_6223600);
extern "C" NAKED register_t __cdecl internal_6223600()
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
        fld dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [public_6257a40]
        mov dword ptr ss : [esp+4], 0
        fchs 
        fstp dword ptr ss : [esp+8]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        jne public_62236a7
        call public_623e830
        mov dword ptr ds : [public_6257a40], eax
        public_62236a7 : nop
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
        UNREACHABLE_TRAP(0x6223600)
    }
}

#undef public_62236a7
