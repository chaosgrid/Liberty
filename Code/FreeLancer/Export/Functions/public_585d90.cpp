#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5835f0);
CLANG_FORWARD_PROC_SYMBOL(public_585d90);

#define public_585dd4 _public_585dd4
#define public_585dd6 _public_585dd6

PROC_DECLARE(0x585d90, internal_585d90, public_585d90);
extern "C" NAKED register_t __cdecl internal_585d90()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        je public_585dd4
        push eax
        call dword ptr ds : [public_5c6088]
        add esp, 4
        test eax, eax
        je public_585dd4
        mov eax, dword ptr ds : [eax+0x50]
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call public_5835f0
        add esp, 0xC
        jmp public_585dd6
        public_585dd4 : nop
        xor eax, eax
        public_585dd6 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x500], ecx
        mov cl, byte ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x4FC], eax
        mov al, byte ptr ds : [esi+0x518]
        and cl, 1
        shl cl, 5
        and al, 0xCF
        xor cl, al
        mov dword ptr ds : [esi+0x504], edx
        mov dword ptr ds : [esi+0x508], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x518], cl
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x585d90)
    }
}

#undef public_585dd4
#undef public_585dd6
