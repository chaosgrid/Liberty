#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15de0);

#define public_6d15df6 _public_6d15df6
#define public_6d15e01 _public_6d15e01
#define public_6d15e05 _public_6d15e05
#define public_6d15e10 _public_6d15e10
#define public_6d15e1c _public_6d15e1c
#define public_6d15e25 _public_6d15e25

PROC_DECLARE(0x6d15de0, internal_6d15de0, public_6d15de0);
extern "C" NAKED register_t __cdecl internal_6d15de0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_6d15e05
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6d15e01
        public_6d15df6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6d15df6
        public_6d15e01 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d15e05 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d15e1c
        nop 
        public_6d15e10 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d15e10
        public_6d15e1c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d15e25
        mov dword ptr ds : [ecx], eax
        public_6d15e25 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d15de0)
    }
}

#undef public_6d15df6
#undef public_6d15e01
#undef public_6d15e05
#undef public_6d15e10
#undef public_6d15e1c
#undef public_6d15e25
