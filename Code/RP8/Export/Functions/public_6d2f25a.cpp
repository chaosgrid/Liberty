#include "RP8-PCH.h"

PROC_DECLARE(0x6d2f25a, internal_6d2f25a, public_6d2f25a);
extern "C" NAKED register_t __cdecl internal_6d2f25a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d5e0b0]
        UNREACHABLE_TRAP(0x6d2f25a)
    }
}
