#include "Freelancer-PCH.h"


#define public_565f1b _public_565f1b
#define public_565f1f _public_565f1f
#define public_565f29 _public_565f29

PROC_DECLARE(0x565f00, internal_565f00, public_565f00);
extern "C" NAKED register_t __cdecl internal_565f00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx+0x3E]
        test al, al
        mov ecx, dword ptr ss : [esp+8]
        je public_565f1f
        push ebx
        mov bl, byte ptr ds : [ecx+0x3E]
        test bl, bl
        pop ebx
        jne public_565f1b
        mov al, 1
        ret 
        public_565f1b : nop
        test al, al
        jne public_565f29
        public_565f1f : nop
        mov al, byte ptr ds : [ecx+0x3E]
        test al, al
        je public_565f29
        xor al, al
        ret 
        public_565f29 : nop
        cmp edx, ecx
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x565f00)
    }
}

#undef public_565f1b
#undef public_565f1f
#undef public_565f29
