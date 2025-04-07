#include "Content-PCH.h"

PROC_DECLARE(0x6ea1470, internal_6ea1470, public_6ea1470);
extern "C" NAKED register_t __cdecl internal_6ea1470()
{
    __asm
    {
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6ea1470)
    }
}
