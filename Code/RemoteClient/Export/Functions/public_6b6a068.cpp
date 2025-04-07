#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a068, internal_6b6a068, public_6b6a068);
extern "C" NAKED register_t __cdecl internal_6b6a068()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b00c]
        UNREACHABLE_TRAP(0x6b6a068)
    }
}
