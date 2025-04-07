#include "Content-PCH.h"

PROC_DECLARE(0x6f061a0, internal_6f061a0, public_6f061a0);
extern "C" NAKED register_t __cdecl internal_6f061a0()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x24], 0
        ret 
        UNREACHABLE_TRAP(0x6f061a0)
    }
}
