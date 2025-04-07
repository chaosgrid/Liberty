#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8200);

PROC_DECLARE(0x6ec8300, internal_6ec8300, public_6ec8300);
extern "C" NAKED register_t __cdecl internal_6ec8300()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6ec8200
        UNREACHABLE_TRAP(0x6ec8300)
    }
}
