#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac28c0);

PROC_DECLARE(0x6ac28c0, internal_6ac28c0, public_6ac28c0);
extern "C" NAKED register_t __cdecl internal_6ac28c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        neg eax
        sbb eax, eax
        and eax, 0x7FFFBFFB
        add eax, 0x80004005
        ret 
        UNREACHABLE_TRAP(0x6ac28c0)
    }
}
