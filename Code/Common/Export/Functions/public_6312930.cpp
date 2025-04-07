#include "Common-PCH.h"

PROC_DECLARE(0x6312930, internal_6312930, public_6312930);
extern "C" NAKED register_t __cdecl internal_6312930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [ecx+8], eax
        sub dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x6312930)
    }
}
