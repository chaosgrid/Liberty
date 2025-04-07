#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_634cc50);

#define public_634cc6e _public_634cc6e

PROC_DECLARE(0x634cc50, internal_634cc50, public_634cc50);
extern "C" NAKED register_t __cdecl internal_634cc50()
{
    __asm
    {
        mov cl, byte ptr ds : [public_658a9f8]
        mov al, 1
        test al, cl
        jne public_634cc6e
        or cl, al
        mov byte ptr ds : [public_658a9f8], cl
        mov ecx, offset public_658aa00
        jmp public_6348be0
        public_634cc6e : nop
        ret 
        UNREACHABLE_TRAP(0x634cc50)
    }
}

#undef public_634cc6e
