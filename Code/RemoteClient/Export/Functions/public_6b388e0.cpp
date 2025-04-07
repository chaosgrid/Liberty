#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b388e0, internal_6b388e0, public_6b388e0);
extern "C" NAKED register_t __cdecl internal_6b388e0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6b388e0)
    }
}
