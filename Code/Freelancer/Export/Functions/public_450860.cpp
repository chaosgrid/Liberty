#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450680);

PROC_DECLARE(0x450860, internal_450860, public_450860);
extern "C" NAKED register_t __cdecl internal_450860()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        push eax
        mov ecx, offset public_668b00
        call public_450680
        ret 
        UNREACHABLE_TRAP(0x450860)
    }
}
