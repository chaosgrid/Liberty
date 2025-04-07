#include "Common-PCH.h"

PROC_DECLARE(0x62d76a0, internal_62d76a0, public_62d76a0);
extern "C" NAKED register_t __cdecl internal_62d76a0()
{
    __asm
    {
        mov al, 1
        ret 0xC
        UNREACHABLE_TRAP(0x62d76a0)
    }
}
