#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee3600, internal_6ee3600, public_6ee3600);
extern "C" NAKED register_t __cdecl internal_6ee3600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x114]
        ret 4
        UNREACHABLE_TRAP(0x6ee3600)
    }
}
