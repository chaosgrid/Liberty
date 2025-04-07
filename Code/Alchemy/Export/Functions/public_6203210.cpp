#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203210, internal_6203210, public_6203210);
extern "C" NAKED register_t __cdecl internal_6203210()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6203210)
    }
}
