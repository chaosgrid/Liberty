#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a292, internal_6b6a292, public_6b6a292);
extern "C" NAKED register_t __cdecl internal_6b6a292()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1d4]
        UNREACHABLE_TRAP(0x6b6a292)
    }
}
