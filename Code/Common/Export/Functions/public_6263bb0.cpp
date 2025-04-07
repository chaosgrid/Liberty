#include "Common-PCH.h"

PROC_DECLARE(0x6263bb0, internal_6263bb0, public_6263bb0);
extern "C" NAKED register_t __cdecl internal_6263bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        ret 
        UNREACHABLE_TRAP(0x6263bb0)
    }
}
