#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637c970);

#define public_637c977 _public_637c977

PROC_DECLARE(0x637c970, internal_637c970, public_637c970);
extern "C" NAKED register_t __cdecl internal_637c970()
{
    __asm
    {
        mov eax, 0xC1
        xor cl, cl
        public_637c977 : nop
        mov edx, eax
        mov byte ptr ds : [eax+public_658c602], cl
        dec eax
        test edx, edx
        jne public_637c977
        ret 
        UNREACHABLE_TRAP(0x637c970)
    }
}

#undef public_637c977
