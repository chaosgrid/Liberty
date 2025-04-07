#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee15b0, internal_6ee15b0, public_6ee15b0);
extern "C" NAKED register_t __cdecl internal_6ee15b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x6ee15b0)
    }
}
