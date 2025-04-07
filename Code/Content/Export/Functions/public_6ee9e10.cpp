#include "Content-PCH.h"

PROC_DECLARE(0x6ee9e10, internal_6ee9e10, public_6ee9e10);
extern "C" NAKED register_t __cdecl internal_6ee9e10()
{
    __asm
    {
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6ee9e10)
    }
}
