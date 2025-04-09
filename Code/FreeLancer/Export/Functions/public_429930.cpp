#include "FreeLancer-PCH.h"

PROC_DECLARE(0x429930, internal_429930, public_429930);
extern "C" NAKED register_t __cdecl internal_429930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [eax+0xC]
        and al, 1
        ret 4
        UNREACHABLE_TRAP(0x429930)
    }
}
