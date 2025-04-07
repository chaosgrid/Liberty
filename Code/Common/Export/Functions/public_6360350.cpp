#include "Common-PCH.h"

PROC_DECLARE(0x6360350, internal_6360350, public_6360350);
extern "C" NAKED register_t __cdecl internal_6360350()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x10], 0
        ret 
        UNREACHABLE_TRAP(0x6360350)
    }
}
