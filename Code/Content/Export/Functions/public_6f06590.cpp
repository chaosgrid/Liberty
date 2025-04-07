#include "Content-PCH.h"

PROC_DECLARE(0x6f06590, internal_6f06590, public_6f06590);
extern "C" NAKED register_t __cdecl internal_6f06590()
{
    __asm
    {
        xor al, al
        ret 0x10
        UNREACHABLE_TRAP(0x6f06590)
    }
}
