#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a460, internal_6b6a460, public_6b6a460);
extern "C" NAKED register_t __cdecl internal_6b6a460()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b11c]
        UNREACHABLE_TRAP(0x6b6a460)
    }
}
