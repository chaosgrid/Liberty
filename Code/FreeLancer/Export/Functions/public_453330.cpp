#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_453365 _public_453365
#define public_4533ba _public_4533ba

PROC_DECLARE(0x453330, internal_453330, public_453330);
extern "C" NAKED register_t __cdecl internal_453330()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        lea eax, ds:[esi+0x84]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_66d27c]
        test eax, eax
        jne public_453365
        call public_5b73e0
        mov dword ptr ds : [public_66d27c], eax
        public_453365 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x84]
        push ecx
        lea ecx, ds:[esi+0x60]
        push ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_5c6280]
        mov ecx, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [ecx]
        add esp, 8
        test ecx, ecx
        pop esi
        je public_4533ba
        lea edx, ss:[esp+0x18]
        push edx
        call public_410f60
        public_4533ba : nop
        xor eax, eax
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x453330)
    }
}

#undef public_453365
#undef public_4533ba
