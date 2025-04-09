#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_558a30);

PROC_DECLARE(0x558a30, internal_558a30, public_558a30);
extern "C" NAKED register_t __cdecl internal_558a30()
{
    __asm
    {
        push 0x3F800000
        call public_412070
        add esp, 4
        mov byte ptr ds : [public_6799dc], 1
        ret 
        UNREACHABLE_TRAP(0x558a30)
    }
}
