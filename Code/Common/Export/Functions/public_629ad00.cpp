#include "Common-PCH.h"

PROC_DECLARE(0x629ad00, internal_629ad00, public_629ad00);
extern "C" NAKED register_t __cdecl internal_629ad00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [eax+0x20]
        ret 
        UNREACHABLE_TRAP(0x629ad00)
    }
}
