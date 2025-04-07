#include "Content-PCH.h"

PROC_DECLARE(0x6f4efb0, internal_6f4efb0, public_6f4efb0);
extern "C" NAKED register_t __cdecl internal_6f4efb0()
{
    __asm
    {
        mov dword ptr ds : [public_6fd0cd8], 0
        ret 
        UNREACHABLE_TRAP(0x6f4efb0)
    }
}
