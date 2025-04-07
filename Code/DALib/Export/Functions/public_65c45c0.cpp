#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c45c0);

PROC_DECLARE(0x65c45c0, internal_65c45c0, public_65c45c0);
extern "C" NAKED register_t __cdecl internal_65c45c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        push eax
        call dword ptr ds : [public_65c702c]
        ret 
        UNREACHABLE_TRAP(0x65c45c0)
    }
}
