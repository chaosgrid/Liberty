#include "Content-PCH.h"

PROC_DECLARE(0x6f5e540, internal_6f5e540, public_6f5e540);
extern "C" NAKED register_t __cdecl internal_6f5e540()
{
    __asm
    {
        mov eax, 3
        ret 
        UNREACHABLE_TRAP(0x6f5e540)
    }
}
