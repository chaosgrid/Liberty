#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);

PROC_DECLARE(0x6f56600, internal_6f56600, public_6f56600);
extern "C" NAKED register_t __cdecl internal_6f56600()
{
    __asm
    {
        sub esp, 8
        push 1
        call public_6f4f660
        fstp qword ptr ss : [esp+4]
        push 2
        call public_6f4f660
        fld qword ptr ss : [esp+8]
        fxch 
        fpatan 
        fmul qword ptr ds : [public_6f5b468]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f56600)
    }
}
