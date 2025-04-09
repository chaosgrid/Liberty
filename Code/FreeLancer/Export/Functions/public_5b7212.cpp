#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7212, internal_5b7212, public_5b7212);
extern "C" NAKED register_t __cdecl internal_5b7212()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6764]
        UNREACHABLE_TRAP(0x5b7212)
    }
}
