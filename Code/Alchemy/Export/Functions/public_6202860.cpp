#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202860, internal_6202860, public_6202860);
extern "C" NAKED register_t __cdecl internal_6202860()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x8C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6202860)
    }
}
