#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4310);

PROC_DECLARE(0x65c4310, internal_65c4310, public_65c4310);
extern "C" NAKED register_t __cdecl internal_65c4310()
{
    __asm
    {
        add ecx, 0x10
        push ecx
        call dword ptr ds : [public_65c7028]
        ret 
        UNREACHABLE_TRAP(0x65c4310)
    }
}
