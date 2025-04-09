#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42ae20, internal_42ae20, public_42ae20);
extern "C" NAKED register_t __cdecl internal_42ae20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        shr eax, 0x1B
        and eax, 1
        ret 
        UNREACHABLE_TRAP(0x42ae20)
    }
}
