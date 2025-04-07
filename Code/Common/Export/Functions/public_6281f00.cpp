#include "Common-PCH.h"

PROC_DECLARE(0x6281f00, internal_6281f00, public_6281f00);
extern "C" NAKED register_t __cdecl internal_6281f00()
{
    __asm
    {
        mov eax, 0x15555555
        ret 
        UNREACHABLE_TRAP(0x6281f00)
    }
}
