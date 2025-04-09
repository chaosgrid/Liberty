#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578f70);
CLANG_FORWARD_PROC_SYMBOL(public_579290);

PROC_DECLARE(0x579290, internal_579290, public_579290);
extern "C" NAKED register_t __cdecl internal_579290()
{
    __asm
    {
        push 0xBF800000
        mov ecx, offset public_67c3b8
        mov byte ptr ds : [public_67c3e0], 1
        call public_578f70
        ret 
        UNREACHABLE_TRAP(0x579290)
    }
}
