#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2a20);
CLANG_FORWARD_PROC_SYMBOL(public_5a2ee0);

PROC_DECLARE(0x5a2a20, internal_5a2a20, public_5a2a20);
extern "C" NAKED register_t __cdecl internal_5a2a20()
{
    __asm
    {
        mov ecx, offset public_67dd90
        call public_5a2ee0
        mov ecx, offset public_67dd68
        jmp public_5a2ee0
        UNREACHABLE_TRAP(0x5a2a20)
    }
}
