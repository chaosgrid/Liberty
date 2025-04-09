#include "FreeLancer-PCH.h"

PROC_DECLARE(0x555800, internal_555800, public_555800);
extern "C" NAKED register_t __cdecl internal_555800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1200]
        mov dword ptr ds : [public_679980], eax
        ret 
        UNREACHABLE_TRAP(0x555800)
    }
}
