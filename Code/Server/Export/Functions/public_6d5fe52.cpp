#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe52, internal_6d5fe52, public_6d5fe52);
extern "C" NAKED register_t __cdecl internal_6d5fe52()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64118]
        UNREACHABLE_TRAP(0x6d5fe52)
    }
}
