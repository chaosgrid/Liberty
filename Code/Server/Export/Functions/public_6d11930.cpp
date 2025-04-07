#include "Server-PCH.h"

PROC_DECLARE(0x6d11930, internal_6d11930, public_6d11930);
extern "C" NAKED register_t __cdecl internal_6d11930()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, dword ptr ds : [ecx]
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6d11930)
    }
}
