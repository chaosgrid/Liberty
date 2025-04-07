#include "Content-PCH.h"

PROC_DECLARE(0x6ec30b0, internal_6ec30b0, public_6ec30b0);
extern "C" NAKED register_t __cdecl internal_6ec30b0()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x44], 0
        ret 
        UNREACHABLE_TRAP(0x6ec30b0)
    }
}
