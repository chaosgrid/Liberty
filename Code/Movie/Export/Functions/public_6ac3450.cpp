#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);

#define public_6ac346d _public_6ac346d
#define public_6ac347b _public_6ac347b
#define public_6ac3488 _public_6ac3488

PROC_DECLARE(0x6ac3450, internal_6ac3450, public_6ac3450);
extern "C" NAKED register_t __cdecl internal_6ac3450()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jle public_6ac3488
        cmp eax, 3
        jg public_6ac3488
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        public_6ac346d : nop
        test eax, eax
        je public_6ac347b
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac346d
        inc eax
        public_6ac347b : nop
        xor ecx, ecx
        test eax, eax
        sete cl
        mov eax, ecx
        pop ebp
        ret 8
        public_6ac3488 : nop
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ac3450)
    }
}

#undef public_6ac346d
#undef public_6ac347b
#undef public_6ac3488
