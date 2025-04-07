#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38900, internal_6b38900, public_6b38900);
extern "C" NAKED register_t __cdecl internal_6b38900()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6b38900)
    }
}
