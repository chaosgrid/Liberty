#include "Freelancer-PCH.h"

PROC_DECLARE(0x453750, internal_453750, public_453750);
extern "C" NAKED register_t __cdecl internal_453750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c6270]
        mov edx, dword ptr ds : [eax]
        add esi, 0x60
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], edx
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x453750)
    }
}
