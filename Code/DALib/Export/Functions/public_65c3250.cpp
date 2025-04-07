#include "DALib-PCH.h"

PROC_DECLARE(0x65c3250, internal_65c3250, public_65c3250);
extern "C" NAKED register_t __cdecl internal_65c3250()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x65c3250)
    }
}
