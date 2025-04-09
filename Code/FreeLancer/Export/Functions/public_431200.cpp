#include "Freelancer-PCH.h"

PROC_DECLARE(0x431200, internal_431200, public_431200);
extern "C" NAKED register_t __cdecl internal_431200()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+4]
        ret 
        UNREACHABLE_TRAP(0x431200)
    }
}
