#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a28c, internal_6b6a28c, public_6b6a28c);
extern "C" NAKED register_t __cdecl internal_6b6a28c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1d8]
        UNREACHABLE_TRAP(0x6b6a28c)
    }
}
