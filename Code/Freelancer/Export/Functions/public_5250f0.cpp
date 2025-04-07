#include "Freelancer-PCH.h"

PROC_DECLARE(0x5250f0, internal_5250f0, public_5250f0);
extern "C" NAKED register_t __cdecl internal_5250f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov word ptr ds : [eax], 0
        mov word ptr ds : [eax+2], 0xFFFF
        ret 0x14
        UNREACHABLE_TRAP(0x5250f0)
    }
}
