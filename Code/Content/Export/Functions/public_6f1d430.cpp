#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1d430);

#define public_6f1d44a _public_6f1d44a
#define public_6f1d44f _public_6f1d44f
#define public_6f1d451 _public_6f1d451

PROC_DECLARE(0x6f1d430, internal_6f1d430, public_6f1d430);
extern "C" NAKED register_t __cdecl internal_6f1d430()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor al, al
        test ecx, ecx
        je public_6f1d451
        mov cl, byte ptr ds : [ecx]
        test cl, cl
        je public_6f1d451
        cmp cl, 0x30
        jl public_6f1d44a
        cmp cl, 0x39
        jle public_6f1d44f
        public_6f1d44a : nop
        cmp cl, 0x2D
        jne public_6f1d451
        public_6f1d44f : nop
        mov al, 1
        public_6f1d451 : nop
        ret 
        UNREACHABLE_TRAP(0x6f1d430)
    }
}

#undef public_6f1d44a
#undef public_6f1d44f
#undef public_6f1d451
