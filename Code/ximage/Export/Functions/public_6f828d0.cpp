#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82320);
CLANG_FORWARD_PROC_SYMBOL(public_6f828d0);

#define public_6f828dc _public_6f828dc

PROC_DECLARE(0x6f828d0, internal_6f828d0, public_6f828d0);
extern "C" NAKED register_t __cdecl internal_6f828d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6f828dc
        call public_6f82320
        public_6f828dc : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6f828d0)
    }
}

#undef public_6f828dc
