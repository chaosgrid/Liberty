#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4810);

PROC_DECLARE(0x4c4810, internal_4c4810, public_4c4810);
extern "C" NAKED register_t __cdecl internal_4c4810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_673358]
        and eax, 0x3FFFFFFF
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x4c4810)
    }
}
