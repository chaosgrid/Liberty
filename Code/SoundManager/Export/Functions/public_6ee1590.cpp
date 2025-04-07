#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee1590, internal_6ee1590, public_6ee1590);
extern "C" NAKED register_t __cdecl internal_6ee1590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6ee1590)
    }
}
