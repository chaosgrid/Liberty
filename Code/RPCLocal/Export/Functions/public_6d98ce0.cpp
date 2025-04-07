#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d98ce0);

PROC_DECLARE(0x6d98ce0, internal_6d98ce0, public_6d98ce0);
extern "C" NAKED register_t __cdecl internal_6d98ce0()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 0x40
        mov word ptr ds : [ecx+0x2C], ax
        ret 4
        UNREACHABLE_TRAP(0x6d98ce0)
    }
}
