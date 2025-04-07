#include "FLServer-PCH.h"

PROC_DECLARE(0x406680, internal_406680, public_406680);
extern "C" NAKED register_t __cdecl internal_406680()
{
    __asm
    {
        mov eax, offset public_42543c
        ret 
        UNREACHABLE_TRAP(0x406680)
    }
}
