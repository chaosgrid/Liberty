#include "Freelancer-PCH.h"

PROC_DECLARE(0x54bdb0, internal_54bdb0, public_54bdb0);
extern "C" NAKED register_t __cdecl internal_54bdb0()
{
    __asm
    {
        mov ecx, offset public_679790
        jmp dword ptr ds : [public_5c69a0]
        UNREACHABLE_TRAP(0x54bdb0)
    }
}
