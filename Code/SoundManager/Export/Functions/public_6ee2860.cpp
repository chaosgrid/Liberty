#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2860, internal_6ee2860, public_6ee2860);
extern "C" NAKED register_t __cdecl internal_6ee2860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xE4]
        ret 4
        UNREACHABLE_TRAP(0x6ee2860)
    }
}
