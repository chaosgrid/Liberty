#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a152, internal_6b6a152, public_6b6a152);
extern "C" NAKED register_t __cdecl internal_6b6a152()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1e4]
        UNREACHABLE_TRAP(0x6b6a152)
    }
}
