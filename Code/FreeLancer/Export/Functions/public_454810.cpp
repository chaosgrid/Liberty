#include "Freelancer-PCH.h"

PROC_DECLARE(0x454810, internal_454810, public_454810);
extern "C" NAKED register_t __cdecl internal_454810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce054]
        mov dword ptr ds : [public_66d2f4], eax
        ret 
        UNREACHABLE_TRAP(0x454810)
    }
}
