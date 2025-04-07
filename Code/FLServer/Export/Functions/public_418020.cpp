#include "FLServer-PCH.h"

PROC_DECLARE(0x418020, internal_418020, public_418020);
extern "C" NAKED register_t __cdecl internal_418020()
{
    __asm
    {
        mov eax, offset public_41e8d0
        ret 
        UNREACHABLE_TRAP(0x418020)
    }
}
