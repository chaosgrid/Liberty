#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd74, internal_6d5fd74, public_6d5fd74);
extern "C" NAKED register_t __cdecl internal_6d5fd74()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64084]
        UNREACHABLE_TRAP(0x6d5fd74)
    }
}
