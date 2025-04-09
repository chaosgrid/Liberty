#include "FreeLancer-PCH.h"

PROC_DECLARE(0x596d20, internal_596d20, public_596d20);
extern "C" NAKED register_t __cdecl internal_596d20()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x3B8], 0xFFFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x596d20)
    }
}
