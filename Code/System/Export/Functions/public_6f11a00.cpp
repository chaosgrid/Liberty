#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11180);

PROC_DECLARE(0x6f11a00, internal_6f11a00, public_6f11a00);
extern "C" NAKED register_t __cdecl internal_6f11a00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f11180
        UNREACHABLE_TRAP(0x6f11a00)
    }
}
