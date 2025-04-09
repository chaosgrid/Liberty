#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2990);
CLANG_FORWARD_PROC_SYMBOL(public_5a2e80);

PROC_DECLARE(0x5a2990, internal_5a2990, public_5a2990);
extern "C" NAKED register_t __cdecl internal_5a2990()
{
    __asm
    {
        mov ecx, offset public_67dd90
        call public_5a2e80
        mov ecx, offset public_67dd68
        jmp public_5a2e80
        UNREACHABLE_TRAP(0x5a2990)
    }
}
