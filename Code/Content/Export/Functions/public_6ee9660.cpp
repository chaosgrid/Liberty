#include "Content-PCH.h"

PROC_DECLARE(0x6ee9660, internal_6ee9660, public_6ee9660);
extern "C" NAKED register_t __cdecl internal_6ee9660()
{
    __asm
    {
        mov eax, 2
        ret 
        UNREACHABLE_TRAP(0x6ee9660)
    }
}
