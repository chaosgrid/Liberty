#include "Common-PCH.h"

PROC_DECLARE(0x629ba00, internal_629ba00, public_629ba00);
extern "C" NAKED register_t __cdecl internal_629ba00()
{
    __asm
    {
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x629ba00)
    }
}
