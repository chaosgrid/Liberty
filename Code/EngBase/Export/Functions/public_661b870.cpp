#include "EngBase-PCH.h"

PROC_DECLARE(0x661b870, internal_661b870, public_661b870);
extern "C" NAKED register_t __cdecl internal_661b870()
{
    __asm
    {
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x661b870)
    }
}
