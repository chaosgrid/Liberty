#include "Content-PCH.h"

PROC_DECLARE(0x6f250c0, internal_6f250c0, public_6f250c0);
extern "C" NAKED register_t __cdecl internal_6f250c0()
{
    __asm
    {
        mov eax, 6
        ret 
        UNREACHABLE_TRAP(0x6f250c0)
    }
}
