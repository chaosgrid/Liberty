#include "Common-PCH.h"

PROC_DECLARE(0x634dc00, internal_634dc00, public_634dc00);
extern "C" NAKED register_t __cdecl internal_634dc00()
{
    __asm
    {
        mov dword ptr ds : [0], 0
        ret 4
        UNREACHABLE_TRAP(0x634dc00)
    }
}
