#include "Server-PCH.h"

PROC_DECLARE(0x6d5feac, internal_6d5feac, public_6d5feac);
extern "C" NAKED register_t __cdecl internal_6d5feac()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64154]
        UNREACHABLE_TRAP(0x6d5feac)
    }
}
