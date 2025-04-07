#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e34, internal_6b69e34, public_6b69e34);
extern "C" NAKED register_t __cdecl internal_6b69e34()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b354]
        UNREACHABLE_TRAP(0x6b69e34)
    }
}
