#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee20a0, internal_6ee20a0, public_6ee20a0);
extern "C" NAKED register_t __cdecl internal_6ee20a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x54]
        ret 4
        UNREACHABLE_TRAP(0x6ee20a0)
    }
}
