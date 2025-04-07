#include "EngBase-PCH.h"

PROC_DECLARE(0x6626cd0, internal_6626cd0, public_6626cd0);
extern "C" NAKED register_t __cdecl internal_6626cd0()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6626cd0)
    }
}
