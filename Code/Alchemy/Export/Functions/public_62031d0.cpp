#include "Alchemy-PCH.h"

PROC_DECLARE(0x62031d0, internal_62031d0, public_62031d0);
extern "C" NAKED register_t __cdecl internal_62031d0()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62031d0)
    }
}
