#include "Freelancer-PCH.h"

PROC_DECLARE(0x414f70, internal_414f70, public_414f70);
extern "C" NAKED register_t __cdecl internal_414f70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        inc eax
        mov dword ptr ds : [ecx+0x18], eax
        ret 
        UNREACHABLE_TRAP(0x414f70)
    }
}
