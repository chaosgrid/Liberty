#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee1580, internal_6ee1580, public_6ee1580);
extern "C" NAKED register_t __cdecl internal_6ee1580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x6ee1580)
    }
}
