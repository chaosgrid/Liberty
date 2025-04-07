#include "Server-PCH.h"

PROC_DECLARE(0x6ce1060, internal_6ce1060, public_6ce1060);
extern "C" NAKED register_t __cdecl internal_6ce1060()
{
    __asm
    {
        xor al, al
        ret 0x18
        UNREACHABLE_TRAP(0x6ce1060)
    }
}
