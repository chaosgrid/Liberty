#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214860, internal_6214860, public_6214860);
extern "C" NAKED register_t __cdecl internal_6214860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x6214860)
    }
}
