#include "Content-PCH.h"

PROC_DECLARE(0x6f250d0, internal_6f250d0, public_6f250d0);
extern "C" NAKED register_t __cdecl internal_6f250d0()
{
    __asm
    {
        mov eax, 7
        ret 
        UNREACHABLE_TRAP(0x6f250d0)
    }
}
