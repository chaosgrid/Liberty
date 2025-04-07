#include "Common-PCH.h"

PROC_DECLARE(0x629ff10, internal_629ff10, public_629ff10);
extern "C" NAKED register_t __cdecl internal_629ff10()
{
    __asm
    {
        mov eax, offset public_63997b0
        ret 
        UNREACHABLE_TRAP(0x629ff10)
    }
}
