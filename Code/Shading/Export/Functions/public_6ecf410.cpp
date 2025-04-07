#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf200);

PROC_DECLARE(0x6ecf410, internal_6ecf410, public_6ecf410);
extern "C" NAKED register_t __cdecl internal_6ecf410()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6ecf200
        UNREACHABLE_TRAP(0x6ecf410)
    }
}
