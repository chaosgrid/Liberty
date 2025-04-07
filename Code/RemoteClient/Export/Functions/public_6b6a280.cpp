#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a280, internal_6b6a280, public_6b6a280);
extern "C" NAKED register_t __cdecl internal_6b6a280()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1e0]
        UNREACHABLE_TRAP(0x6b6a280)
    }
}
