#include "Freelancer-PCH.h"

PROC_DECLARE(0x42adc0, internal_42adc0, public_42adc0);
extern "C" NAKED register_t __cdecl internal_42adc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x42adc0)
    }
}
