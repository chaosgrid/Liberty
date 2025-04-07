#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e22, internal_6b69e22, public_6b69e22);
extern "C" NAKED register_t __cdecl internal_6b69e22()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b298]
        UNREACHABLE_TRAP(0x6b69e22)
    }
}
