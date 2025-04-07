#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb8b0);

#define public_6ecb8c9 _public_6ecb8c9
#define public_6ecb8e0 _public_6ecb8e0
#define public_6ecb8ec _public_6ecb8ec
#define public_6ecb8f0 _public_6ecb8f0
#define public_6ecb900 _public_6ecb900
#define public_6ecb90b _public_6ecb90b

PROC_DECLARE(0x6ecb8b0, internal_6ecb8b0, public_6ecb8b0);
extern "C" NAKED register_t __cdecl internal_6ecb8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x18]
        test dl, dl
        push ebx
        jne public_6ecb8c9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6ecb8c9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6ecb8c9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_6ecb8f0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_6ecb8ec
        lea esp, ss:[esp]
        public_6ecb8e0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_6ecb8e0
        public_6ecb8ec : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ecb8f0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6ecb90b
        lea esp, ss:[esp]
        public_6ecb900 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6ecb900
        public_6ecb90b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecb8b0)
    }
}

#undef public_6ecb8c9
#undef public_6ecb8e0
#undef public_6ecb8ec
#undef public_6ecb8f0
#undef public_6ecb900
#undef public_6ecb90b
