#include "Freelancer-PCH.h"

PROC_DECLARE(0x579810, internal_579810, public_579810);
extern "C" NAKED register_t __cdecl internal_579810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 1
        mov dword ptr ds : [ecx+8], eax
        call dword ptr ds : [public_5c72c8]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x579810)
    }
}
