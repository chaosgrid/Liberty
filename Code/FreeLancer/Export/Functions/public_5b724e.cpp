#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b724e, internal_5b724e, public_5b724e);
extern "C" NAKED register_t __cdecl internal_5b724e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c678c]
        UNREACHABLE_TRAP(0x5b724e)
    }
}
