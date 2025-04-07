#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11170);

PROC_DECLARE(0x6f119f0, internal_6f119f0, public_6f119f0);
extern "C" NAKED register_t __cdecl internal_6f119f0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f11170
        UNREACHABLE_TRAP(0x6f119f0)
    }
}
