#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2aa0);

PROC_DECLARE(0x65d2e70, internal_65d2e70, public_65d2e70);
extern "C" NAKED register_t __cdecl internal_65d2e70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_65d2aa0
        UNREACHABLE_TRAP(0x65d2e70)
    }
}
