#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2030, internal_6ee2030, public_6ee2030);
extern "C" NAKED register_t __cdecl internal_6ee2030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x48]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee2030)
    }
}
