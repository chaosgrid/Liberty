#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6c64);

PROC_DECLARE(0x65d6c64, internal_65d6c64, public_65d6c64);
extern "C" NAKED register_t __cdecl internal_65d6c64()
{
    __asm
    {
        jmp dword ptr ds : [public_65e1154]
        UNREACHABLE_TRAP(0x65d6c64)
    }
}
