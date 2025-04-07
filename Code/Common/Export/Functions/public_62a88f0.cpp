#include "Common-PCH.h"

PROC_DECLARE(0x62a88f0, internal_62a88f0, public_62a88f0);
extern "C" NAKED register_t __cdecl internal_62a88f0()
{
    __asm
    {
        xor al, al
        ret 0x18
        UNREACHABLE_TRAP(0x62a88f0)
    }
}
