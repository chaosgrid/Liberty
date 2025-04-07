#include "Server-PCH.h"

PROC_DECLARE(0x6d5feee, internal_6d5feee, public_6d5feee);
extern "C" NAKED register_t __cdecl internal_6d5feee()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64180]
        UNREACHABLE_TRAP(0x6d5feee)
    }
}
