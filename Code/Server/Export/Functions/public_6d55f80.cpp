#include "Server-PCH.h"

PROC_DECLARE(0x6d55f80, internal_6d55f80, public_6d55f80);
extern "C" NAKED register_t __cdecl internal_6d55f80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x144]
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d55f80)
    }
}
