#include "Common-PCH.h"

PROC_DECLARE(0x629ad40, internal_629ad40, public_629ad40);
extern "C" NAKED register_t __cdecl internal_629ad40()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1AC]
        ret 
        UNREACHABLE_TRAP(0x629ad40)
    }
}
