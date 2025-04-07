#include "FLServer-PCH.h"

PROC_DECLARE(0x413be0, internal_413be0, public_413be0);
extern "C" NAKED register_t __cdecl internal_413be0()
{
    __asm
    {
        mov eax, offset public_41e1a0
        ret 
        UNREACHABLE_TRAP(0x413be0)
    }
}
