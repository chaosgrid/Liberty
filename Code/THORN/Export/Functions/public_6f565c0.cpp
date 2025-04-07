#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e90);

PROC_DECLARE(0x6f565c0, internal_6f565c0, public_6f565c0);
extern "C" NAKED register_t __cdecl internal_6f565c0()
{
    __asm
    {
        push 1
        call public_6f4f660
        call public_6f57e90
        fmul qword ptr ds : [public_6f5b468]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f565c0)
    }
}
