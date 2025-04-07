#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a056, internal_6b6a056, public_6b6a056);
extern "C" NAKED register_t __cdecl internal_6b6a056()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b030]
        UNREACHABLE_TRAP(0x6b6a056)
    }
}
