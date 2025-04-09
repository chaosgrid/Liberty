#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);

#define public_57a636 _public_57a636
#define public_57a63b _public_57a63b
#define public_57a64f _public_57a64f
#define public_57a66c _public_57a66c

PROC_DECLARE(0x57a620, internal_57a620, public_57a620);
extern "C" NAKED register_t __cdecl internal_57a620()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x400]
        test al, al
        jne public_57a636
        mov al, byte ptr ss : [esp+8]
        test al, al
        jne public_57a636
        xor eax, eax
        jmp public_57a63b
        public_57a636 : nop
        mov eax, 1
        public_57a63b : nop
        test al, al
        mov byte ptr ds : [ecx+0x400], al
        je public_57a64f
        mov byte ptr ds : [ecx+0x401], 1
        ret 8
        public_57a64f : nop
        mov al, byte ptr ds : [ecx+0x401]
        test al, al
        jne public_57a66c
        mov al, byte ptr ss : [esp+4]
        test al, al
        jne public_57a66c
        xor eax, eax
        mov byte ptr ds : [ecx+0x401], al
        ret 8
        public_57a66c : nop
        mov eax, 1
        mov byte ptr ds : [ecx+0x401], al
        ret 8
        UNREACHABLE_TRAP(0x57a620)
    }
}

#undef public_57a636
#undef public_57a63b
#undef public_57a64f
#undef public_57a66c
