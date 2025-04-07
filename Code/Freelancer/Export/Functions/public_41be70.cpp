#include "Freelancer-PCH.h"

PROC_DECLARE(0x41be70, internal_41be70, public_41be70);
extern "C" NAKED register_t __cdecl internal_41be70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x41be70)
    }
}
