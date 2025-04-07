#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a09e, internal_6b6a09e, public_6b6a09e);
extern "C" NAKED register_t __cdecl internal_6b6a09e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b188]
        UNREACHABLE_TRAP(0x6b6a09e)
    }
}
