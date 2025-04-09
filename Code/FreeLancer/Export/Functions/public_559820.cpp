#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559820);
CLANG_FORWARD_PROC_SYMBOL(public_579380);

PROC_DECLARE(0x559820, internal_559820, public_559820);
extern "C" NAKED register_t __cdecl internal_559820()
{
    __asm
    {
        mov ecx, offset public_679a54
        jmp public_579380
        UNREACHABLE_TRAP(0x559820)
    }
}
