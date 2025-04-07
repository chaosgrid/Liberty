#include "Content-PCH.h"

PROC_DECLARE(0x6f087e0, internal_6f087e0, public_6f087e0);
extern "C" NAKED register_t __cdecl internal_6f087e0()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x174], 1
        mov dword ptr ds : [ecx+0x178], 0
        ret 
        UNREACHABLE_TRAP(0x6f087e0)
    }
}
