#include "Freelancer-PCH.h"

PROC_DECLARE(0x428810, internal_428810, public_428810);
extern "C" NAKED register_t __cdecl internal_428810()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x60]
        ret 
        UNREACHABLE_TRAP(0x428810)
    }
}
