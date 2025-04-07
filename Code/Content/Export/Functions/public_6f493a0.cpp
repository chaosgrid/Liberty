#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f493a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

PROC_DECLARE(0x6f493a0, internal_6f493a0, public_6f493a0);
extern "C" NAKED register_t __cdecl internal_6f493a0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x9C]
        jmp public_6fa9130
        UNREACHABLE_TRAP(0x6f493a0)
    }
}
