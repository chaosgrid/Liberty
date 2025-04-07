#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee15a0, internal_6ee15a0, public_6ee15a0);
extern "C" NAKED register_t __cdecl internal_6ee15a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movzx eax, word ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6ee15a0)
    }
}
