#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a7f0);

#define public_6d5a80c _public_6d5a80c
#define public_6d5a825 _public_6d5a825
#define public_6d5a834 _public_6d5a834
#define public_6d5a838 _public_6d5a838
#define public_6d5a841 _public_6d5a841
#define public_6d5a84c _public_6d5a84c

PROC_DECLARE(0x6d5a7f0, internal_6d5a7f0, public_6d5a7f0);
extern "C" NAKED register_t __cdecl internal_6d5a7f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x5A4]
        test dl, dl
        push ebx
        jne public_6d5a80c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6d5a80c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6d5a80c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x5A5]
        test bl, bl
        jne public_6d5a838
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x5A5]
        test bl, bl
        jne public_6d5a834
        public_6d5a825 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x5A5]
        test bl, bl
        je public_6d5a825
        public_6d5a834 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d5a838 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6d5a84c
        public_6d5a841 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6d5a841
        public_6d5a84c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5a7f0)
    }
}

#undef public_6d5a80c
#undef public_6d5a825
#undef public_6d5a834
#undef public_6d5a838
#undef public_6d5a841
#undef public_6d5a84c
