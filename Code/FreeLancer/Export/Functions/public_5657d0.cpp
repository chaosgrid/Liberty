#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5657d0);

#define public_5657e2 _public_5657e2
#define public_5657e5 _public_5657e5
#define public_5657ef _public_5657ef

PROC_DECLARE(0x5657d0, internal_5657d0, public_5657d0);
extern "C" NAKED register_t __cdecl internal_5657d0()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+2]
        and dl, 7
        xor eax, eax
        cmp dl, 1
        jne public_5657e2
        mov dl, byte ptr ds : [ecx+7]
        jmp public_5657e5
        public_5657e2 : nop
        mov dl, byte ptr ds : [ecx+0x10]
        public_5657e5 : nop
        cmp dl, 0x20
        jne public_5657ef
        mov eax, 8
        public_5657ef : nop
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x5657d0)
    }
}

#undef public_5657e2
#undef public_5657e5
#undef public_5657ef
