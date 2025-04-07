#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a128, internal_6b6a128, public_6b6a128);
extern "C" NAKED register_t __cdecl internal_6b6a128()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b170]
        UNREACHABLE_TRAP(0x6b6a128)
    }
}
