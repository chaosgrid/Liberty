#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_524730);

PROC_DECLARE(0x524730, internal_524730, public_524730);
extern "C" NAKED register_t __cdecl internal_524730()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x194]
        add eax, dword ptr ds : [ecx+0x154]
        ret 
        UNREACHABLE_TRAP(0x524730)
    }
}
