#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58cbe0);

PROC_DECLARE(0x58cbe0, internal_58cbe0, public_58cbe0);
extern "C" NAKED register_t __cdecl internal_58cbe0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x554], al
        ret 4
        UNREACHABLE_TRAP(0x58cbe0)
    }
}
