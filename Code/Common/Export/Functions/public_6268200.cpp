#include "Common-PCH.h"

PROC_DECLARE(0x6268200, internal_6268200, public_6268200);
extern "C" NAKED register_t __cdecl internal_6268200()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+4]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6268200)
    }
}
