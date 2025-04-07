#include "DALib-PCH.h"

PROC_DECLARE(0x65c3240, internal_65c3240, public_65c3240);
extern "C" NAKED register_t __cdecl internal_65c3240()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x65c3240)
    }
}
