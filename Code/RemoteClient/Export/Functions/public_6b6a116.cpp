#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a116, internal_6b6a116, public_6b6a116);
extern "C" NAKED register_t __cdecl internal_6b6a116()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b164]
        UNREACHABLE_TRAP(0x6b6a116)
    }
}
