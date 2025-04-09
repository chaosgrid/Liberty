#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d8f0, internal_43d8f0, public_43d8f0);
extern "C" NAKED register_t __cdecl internal_43d8f0()
{
    __asm
    {
        xor al, al
        ret 0x10
        UNREACHABLE_TRAP(0x43d8f0)
    }
}
