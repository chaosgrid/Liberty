#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fa8, internal_6b69fa8, public_6b69fa8);
extern "C" NAKED register_t __cdecl internal_6b69fa8()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b05c]
        UNREACHABLE_TRAP(0x6b69fa8)
    }
}
