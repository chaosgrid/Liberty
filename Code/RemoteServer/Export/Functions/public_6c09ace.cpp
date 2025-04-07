#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ace, internal_6c09ace, public_6c09ace);
extern "C" NAKED register_t __cdecl internal_6c09ace()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1a8]
        UNREACHABLE_TRAP(0x6c09ace)
    }
}
