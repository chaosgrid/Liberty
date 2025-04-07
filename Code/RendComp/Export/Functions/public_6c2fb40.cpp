#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2fb40, internal_6c2fb40, public_6c2fb40);
extern "C" NAKED register_t __cdecl internal_6c2fb40()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c2fb40)
    }
}
