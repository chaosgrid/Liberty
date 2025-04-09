#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a140);
CLANG_FORWARD_PROC_SYMBOL(public_558a50);

PROC_DECLARE(0x4372c0, internal_4372c0, public_4372c0);
extern "C" NAKED register_t __cdecl internal_4372c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_558a50
        call public_45a140
        mov byte ptr ds : [esi+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4372c0)
    }
}
