#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b50e0, internal_4b50e0, public_4b50e0);
extern "C" NAKED register_t __cdecl internal_4b50e0()
{
    __asm
    {
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x4b50e0)
    }
}
