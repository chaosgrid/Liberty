#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a3f2, internal_6b6a3f2, public_6b6a3f2);
extern "C" NAKED register_t __cdecl internal_6b6a3f2()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1c4]
        UNREACHABLE_TRAP(0x6b6a3f2)
    }
}
