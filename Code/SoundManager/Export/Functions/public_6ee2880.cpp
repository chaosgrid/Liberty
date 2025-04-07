#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2880, internal_6ee2880, public_6ee2880);
extern "C" NAKED register_t __cdecl internal_6ee2880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xEC]
        ret 4
        UNREACHABLE_TRAP(0x6ee2880)
    }
}
