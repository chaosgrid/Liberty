#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3037);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3038);
CLANG_FORWARD_PROC_SYMBOL(public_6ad30f1);

PROC_DECLARE(0x6ad301d, internal_6ad301d, public_6ad301d);
extern "C" NAKED register_t __cdecl internal_6ad301d()
{
    __asm
    {
        call public_6ad30f1
        fstp st(0)
        fstp st(0)
        or cl, cl
        jne public_6ad3038
        fldz 
        cmp eax, 1
        jne public_6ad3037
        or ch, ch
        je public_6ad3037
        fchs 
        UNREACHABLE_TRAP(0x6ad301d)
    }
}
