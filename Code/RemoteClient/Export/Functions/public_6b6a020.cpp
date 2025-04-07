#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a020, internal_6b6a020, public_6b6a020);
extern "C" NAKED register_t __cdecl internal_6b6a020()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b0a8]
        UNREACHABLE_TRAP(0x6b6a020)
    }
}
