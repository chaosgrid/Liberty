#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdfe, internal_6d5fdfe, public_6d5fdfe);
extern "C" NAKED register_t __cdecl internal_6d5fdfe()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640e0]
        UNREACHABLE_TRAP(0x6d5fdfe)
    }
}
