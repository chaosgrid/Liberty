#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb560);

#define public_6ecb576 _public_6ecb576
#define public_6ecb581 _public_6ecb581
#define public_6ecb585 _public_6ecb585
#define public_6ecb590 _public_6ecb590
#define public_6ecb59c _public_6ecb59c
#define public_6ecb5a5 _public_6ecb5a5

PROC_DECLARE(0x6ecb560, internal_6ecb560, public_6ecb560);
extern "C" NAKED register_t __cdecl internal_6ecb560()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_6ecb585
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6ecb581
        public_6ecb576 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6ecb576
        public_6ecb581 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ecb585 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ecb59c
        nop 
        public_6ecb590 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ecb590
        public_6ecb59c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ecb5a5
        mov dword ptr ds : [ecx], eax
        public_6ecb5a5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecb560)
    }
}

#undef public_6ecb576
#undef public_6ecb581
#undef public_6ecb585
#undef public_6ecb590
#undef public_6ecb59c
#undef public_6ecb5a5
