#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2090, internal_6ee2090, public_6ee2090);
extern "C" NAKED register_t __cdecl internal_6ee2090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x48]
        ret 4
        UNREACHABLE_TRAP(0x6ee2090)
    }
}
