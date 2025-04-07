#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39df0, internal_6b39df0, public_6b39df0);
extern "C" NAKED register_t __cdecl internal_6b39df0()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6b39df0)
    }
}
