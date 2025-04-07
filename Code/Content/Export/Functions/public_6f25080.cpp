#include "Content-PCH.h"

PROC_DECLARE(0x6f25080, internal_6f25080, public_6f25080);
extern "C" NAKED register_t __cdecl internal_6f25080()
{
    __asm
    {
        mov eax, 4
        ret 
        UNREACHABLE_TRAP(0x6f25080)
    }
}
