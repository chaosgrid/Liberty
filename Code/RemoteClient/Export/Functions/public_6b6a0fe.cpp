#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0fe, internal_6b6a0fe, public_6b6a0fe);
extern "C" NAKED register_t __cdecl internal_6b6a0fe()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b154]
        UNREACHABLE_TRAP(0x6b6a0fe)
    }
}
