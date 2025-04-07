#include "FLServer-PCH.h"

PROC_DECLARE(0x413430, internal_413430, public_413430);
extern "C" NAKED register_t __cdecl internal_413430()
{
    __asm
    {
        mov eax, offset public_41e090
        ret 
        UNREACHABLE_TRAP(0x413430)
    }
}
