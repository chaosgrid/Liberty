#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e10, internal_6b69e10, public_6b69e10);
extern "C" NAKED register_t __cdecl internal_6b69e10()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2a4]
        UNREACHABLE_TRAP(0x6b69e10)
    }
}
