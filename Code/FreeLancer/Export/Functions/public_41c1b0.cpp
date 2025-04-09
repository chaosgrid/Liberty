#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41c1b0, internal_41c1b0, public_41c1b0);
extern "C" NAKED register_t __cdecl internal_41c1b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x7C]
        ret 
        UNREACHABLE_TRAP(0x41c1b0)
    }
}
