#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b388d0, internal_6b388d0, public_6b388d0);
extern "C" NAKED register_t __cdecl internal_6b388d0()
{
    __asm
    {
        ret 8
        UNREACHABLE_TRAP(0x6b388d0)
    }
}
