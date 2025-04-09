#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ad70);

PROC_DECLARE(0x44ad70, internal_44ad70, public_44ad70);
extern "C" NAKED register_t __cdecl internal_44ad70()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x516], 1
        ret 
        UNREACHABLE_TRAP(0x44ad70)
    }
}
