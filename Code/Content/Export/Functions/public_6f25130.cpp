#include "Content-PCH.h"

PROC_DECLARE(0x6f25130, internal_6f25130, public_6f25130);
extern "C" NAKED register_t __cdecl internal_6f25130()
{
    __asm
    {
        mov eax, 0x12
        ret 
        UNREACHABLE_TRAP(0x6f25130)
    }
}
