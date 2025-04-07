#include "Server-PCH.h"

PROC_DECLARE(0x6cf3400, internal_6cf3400, public_6cf3400);
extern "C" NAKED register_t __cdecl internal_6cf3400()
{
    __asm
    {
        mov eax, 0x4000000
        ret 
        UNREACHABLE_TRAP(0x6cf3400)
    }
}
