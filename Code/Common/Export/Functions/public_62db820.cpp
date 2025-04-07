#include "Common-PCH.h"

PROC_DECLARE(0x62db820, internal_62db820, public_62db820);
extern "C" NAKED register_t __cdecl internal_62db820()
{
    __asm
    {
        mov byte ptr ds : [ecx+8], 0
        ret 
        UNREACHABLE_TRAP(0x62db820)
    }
}
