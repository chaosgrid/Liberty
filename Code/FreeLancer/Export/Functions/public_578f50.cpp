#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578f70);

PROC_DECLARE(0x578f50, internal_578f50, public_578f50);
extern "C" NAKED register_t __cdecl internal_578f50()
{
    __asm
    {
        push 0xBF800000
        mov byte ptr ds : [public_67c3e0], 1
        call public_578f70
        ret 
        UNREACHABLE_TRAP(0x578f50)
    }
}
