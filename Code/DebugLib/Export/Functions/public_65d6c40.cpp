#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6c40);

PROC_DECLARE(0x65d6c40, internal_65d6c40, public_65d6c40);
extern "C" NAKED register_t __cdecl internal_65d6c40()
{
    __asm
    {
        jmp dword ptr ds : [public_65e1000]
        UNREACHABLE_TRAP(0x65d6c40)
    }
}
