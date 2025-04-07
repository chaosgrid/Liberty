#include "LuaProfile-PCH.h"

PROC_DECLARE(0x6801070, internal_6801070, public_6801070);
extern "C" NAKED register_t __cdecl internal_6801070()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6801070)
    }
}
