#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ea0, internal_6b69ea0, public_6b69ea0);
extern "C" NAKED register_t __cdecl internal_6b69ea0()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b244]
        UNREACHABLE_TRAP(0x6b69ea0)
    }
}
