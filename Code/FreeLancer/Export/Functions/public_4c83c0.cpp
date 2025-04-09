#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c83c0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4cb0);

PROC_DECLARE(0x4c83c0, internal_4c83c0, public_4c83c0);
extern "C" NAKED register_t __cdecl internal_4c83c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_674bc8]
        call public_4f4cb0
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x4c83c0)
    }
}
