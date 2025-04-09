#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44fcf0, internal_44fcf0, public_44fcf0);
extern "C" NAKED register_t __cdecl internal_44fcf0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0x14
        UNREACHABLE_TRAP(0x44fcf0)
    }
}
