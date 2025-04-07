#include "FLServer-PCH.h"

PROC_DECLARE(0x4157d0, internal_4157d0, public_4157d0);
extern "C" NAKED register_t __cdecl internal_4157d0()
{
    __asm
    {
        mov eax, offset public_41e3dc
        ret 
        UNREACHABLE_TRAP(0x4157d0)
    }
}
