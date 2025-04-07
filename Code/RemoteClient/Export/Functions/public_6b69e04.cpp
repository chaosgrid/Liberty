#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e04, internal_6b69e04, public_6b69e04);
extern "C" NAKED register_t __cdecl internal_6b69e04()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2ac]
        UNREACHABLE_TRAP(0x6b69e04)
    }
}
