#include "Content-PCH.h"

PROC_DECLARE(0x6ea1460, internal_6ea1460, public_6ea1460);
extern "C" NAKED register_t __cdecl internal_6ea1460()
{
    __asm
    {
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ea1460)
    }
}
