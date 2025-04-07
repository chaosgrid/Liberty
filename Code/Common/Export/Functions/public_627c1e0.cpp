#include "Common-PCH.h"

PROC_DECLARE(0x627c1e0, internal_627c1e0, public_627c1e0);
extern "C" NAKED register_t __cdecl internal_627c1e0()
{
    __asm
    {
        mov dword ptr ds : [ecx], 0
        mov byte ptr ds : [ecx+8], 0
        ret 
        UNREACHABLE_TRAP(0x627c1e0)
    }
}
