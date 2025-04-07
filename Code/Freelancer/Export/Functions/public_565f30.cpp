#include "Freelancer-PCH.h"


#define public_565f51 _public_565f51
#define public_565f55 _public_565f55
#define public_565f63 _public_565f63
#define public_565f7b _public_565f7b
#define public_565f7f _public_565f7f
#define public_565f8d _public_565f8d

PROC_DECLARE(0x565f30, internal_565f30, public_565f30);
extern "C" NAKED register_t __cdecl internal_565f30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx+0x94]
        test al, al
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        je public_565f55
        mov bl, byte ptr ds : [ecx+0x94]
        test bl, bl
        jne public_565f51
        mov al, 1
        pop ebx
        ret 
        public_565f51 : nop
        test al, al
        jne public_565f63
        public_565f55 : nop
        mov al, byte ptr ds : [ecx+0x94]
        test al, al
        je public_565f63
        xor al, al
        pop ebx
        ret 
        public_565f63 : nop
        mov al, byte ptr ds : [edx+0x96]
        test al, al
        je public_565f7f
        mov bl, byte ptr ds : [ecx+0x96]
        test bl, bl
        jne public_565f7b
        mov al, 1
        pop ebx
        ret 
        public_565f7b : nop
        test al, al
        jne public_565f8d
        public_565f7f : nop
        mov al, byte ptr ds : [ecx+0x96]
        test al, al
        je public_565f8d
        xor al, al
        pop ebx
        ret 
        public_565f8d : nop
        cmp edx, ecx
        sbb eax, eax
        neg eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x565f30)
    }
}

#undef public_565f51
#undef public_565f55
#undef public_565f63
#undef public_565f7b
#undef public_565f7f
#undef public_565f8d
