#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d29e0);

PROC_DECLARE(0x65d2e50, internal_65d2e50, public_65d2e50);
extern "C" NAKED register_t __cdecl internal_65d2e50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_65d29e0
        UNREACHABLE_TRAP(0x65d2e50)
    }
}
