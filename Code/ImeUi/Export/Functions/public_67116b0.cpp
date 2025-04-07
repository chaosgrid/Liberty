#include "ImeUi-PCH.h"

PROC_DECLARE(0x67116b0, internal_67116b0, public_67116b0);
extern "C" NAKED register_t __cdecl internal_67116b0()
{
    __asm
    {
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x67116b0)
    }
}
