#include "Freelancer-PCH.h"

PROC_DECLARE(0x45fcb0, internal_45fcb0, public_45fcb0);
extern "C" NAKED register_t __cdecl internal_45fcb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cef18]
        mov dword ptr ds : [public_66d4c8], eax
        ret 
        UNREACHABLE_TRAP(0x45fcb0)
    }
}
