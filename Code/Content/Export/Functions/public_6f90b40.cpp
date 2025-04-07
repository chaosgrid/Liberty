#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f90b40);

#define public_6f90b50 _public_6f90b50
#define public_6f90b5c _public_6f90b5c
#define public_6f90b68 _public_6f90b68
#define public_6f90b6a _public_6f90b6a

PROC_DECLARE(0x6f90b40, internal_6f90b40, public_6f90b40);
extern "C" NAKED register_t __cdecl internal_6f90b40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        xor al, al
        cmp edx, ecx
        push ebx
        je public_6f90b6a
        lea ecx, ds:[ecx]
        public_6f90b50 : nop
        cmp byte ptr ds : [edx], 0
        je public_6f90b5c
        mov bl, byte ptr ds : [edx+1]
        test bl, bl
        je public_6f90b68
        public_6f90b5c : nop
        add edx, 0x98
        cmp edx, ecx
        jne public_6f90b50
        pop ebx
        ret 
        public_6f90b68 : nop
        mov al, 1
        public_6f90b6a : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f90b40)
    }
}

#undef public_6f90b50
#undef public_6f90b5c
#undef public_6f90b68
#undef public_6f90b6a
