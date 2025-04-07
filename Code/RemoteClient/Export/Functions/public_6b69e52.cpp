#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e52, internal_6b69e52, public_6b69e52);
extern "C" NAKED register_t __cdecl internal_6b69e52()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b34c]
        UNREACHABLE_TRAP(0x6b69e52)
    }
}
