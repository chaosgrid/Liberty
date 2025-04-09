#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555470);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_555498 _public_555498
#define public_5554b1 _public_5554b1
#define public_5554c9 _public_5554c9

PROC_DECLARE(0x555470, internal_555470, public_555470);
extern "C" NAKED register_t __cdecl internal_555470()
{
    __asm
    {
        push 0x3B
        call public_5792b0
        movzx ecx, byte ptr ds : [public_6798f8]
        mov edx, 0xFF
        add ecx, eax
        add esp, 4
        cmp ecx, edx
        mov byte ptr ds : [public_67986c], dl
        jg public_555498
        mov byte ptr ds : [public_67986c], cl
        public_555498 : nop
        movzx ecx, byte ptr ds : [public_6798f9]
        add ecx, eax
        cmp ecx, edx
        mov byte ptr ds : [public_67986d], dl
        jg public_5554b1
        mov byte ptr ds : [public_67986d], cl
        public_5554b1 : nop
        movzx ecx, byte ptr ds : [public_6798fa]
        add eax, ecx
        cmp eax, edx
        mov byte ptr ds : [public_67986e], dl
        jg public_5554c9
        mov byte ptr ds : [public_67986e], al
        public_5554c9 : nop
        mov eax, offset public_67986c
        ret 
        UNREACHABLE_TRAP(0x555470)
    }
}

#undef public_555498
#undef public_5554b1
#undef public_5554c9
