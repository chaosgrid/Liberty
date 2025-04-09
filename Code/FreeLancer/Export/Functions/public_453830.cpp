#include "Freelancer-PCH.h"

PROC_DECLARE(0x453830, internal_453830, public_453830);
extern "C" NAKED register_t __cdecl internal_453830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        lea ecx, ds:[eax+0x60]
        push ecx
        lea edx, ss:[esp+4]
        push edx
        lea ecx, ds:[eax+0x20]
        call dword ptr ds : [public_5c6278]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x453830)
    }
}
