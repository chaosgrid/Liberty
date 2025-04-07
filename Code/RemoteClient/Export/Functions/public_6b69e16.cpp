#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e16, internal_6b69e16, public_6b69e16);
extern "C" NAKED register_t __cdecl internal_6b69e16()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2a0]
        UNREACHABLE_TRAP(0x6b69e16)
    }
}
