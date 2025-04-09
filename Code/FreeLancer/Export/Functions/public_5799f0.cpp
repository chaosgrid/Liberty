#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5799f0);

PROC_DECLARE(0x5799f0, internal_5799f0, public_5799f0);
extern "C" NAKED register_t __cdecl internal_5799f0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x407], al
        mov al, 1
        mov byte ptr ds : [ecx+0x400], al
        mov byte ptr ds : [ecx+0x401], al
        ret 4
        UNREACHABLE_TRAP(0x5799f0)
    }
}
