#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffce, internal_6d5ffce, public_6d5ffce);
extern "C" NAKED register_t __cdecl internal_6d5ffce()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64ad4]
        UNREACHABLE_TRAP(0x6d5ffce)
    }
}
