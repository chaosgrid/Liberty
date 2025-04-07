#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4300);

PROC_DECLARE(0x65c4300, internal_65c4300, public_65c4300);
extern "C" NAKED register_t __cdecl internal_65c4300()
{
    __asm
    {
        add ecx, 0x10
        push ecx
        call dword ptr ds : [public_65c7024]
        ret 
        UNREACHABLE_TRAP(0x65c4300)
    }
}
