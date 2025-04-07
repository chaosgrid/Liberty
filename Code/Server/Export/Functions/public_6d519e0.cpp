#include "Server-PCH.h"

PROC_DECLARE(0x6d519e0, internal_6d519e0, public_6d519e0);
extern "C" NAKED register_t __cdecl internal_6d519e0()
{
    __asm
    {
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6d519e0)
    }
}
