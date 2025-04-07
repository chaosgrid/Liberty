#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b4ecc0, internal_6b4ecc0, public_6b4ecc0);
extern "C" NAKED register_t __cdecl internal_6b4ecc0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6b4ecc0)
    }
}
