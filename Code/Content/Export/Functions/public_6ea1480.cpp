#include "Content-PCH.h"

PROC_DECLARE(0x6ea1480, internal_6ea1480, public_6ea1480);
extern "C" NAKED register_t __cdecl internal_6ea1480()
{
    __asm
    {
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6ea1480)
    }
}
