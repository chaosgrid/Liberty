#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7009);
CLANG_FORWARD_PROC_SYMBOL(public_65e0000);

PROC_DECLARE(0x65e0000, internal_65e0000, public_65e0000);
/* CHUNK of public_65d4350 */
extern "C" NAKED register_t __cdecl internal_65e0000()
{
    __asm
    {
        mov eax, offset public_65e2070
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0000)
    }
}
