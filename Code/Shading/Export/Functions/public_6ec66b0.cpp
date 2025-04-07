#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec66b0);

#define public_6ec66c9 _public_6ec66c9
#define public_6ec66e0 _public_6ec66e0
#define public_6ec66ec _public_6ec66ec
#define public_6ec66f0 _public_6ec66f0
#define public_6ec6700 _public_6ec6700
#define public_6ec670b _public_6ec670b

PROC_DECLARE(0x6ec66b0, internal_6ec66b0, public_6ec66b0);
extern "C" NAKED register_t __cdecl internal_6ec66b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x48]
        test dl, dl
        push ebx
        jne public_6ec66c9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6ec66c9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6ec66c9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6ec66f0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6ec66ec
        lea esp, ss:[esp]
        public_6ec66e0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6ec66e0
        public_6ec66ec : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ec66f0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6ec670b
        lea esp, ss:[esp]
        public_6ec6700 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6ec6700
        public_6ec670b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec66b0)
    }
}

#undef public_6ec66c9
#undef public_6ec66e0
#undef public_6ec66ec
#undef public_6ec66f0
#undef public_6ec6700
#undef public_6ec670b
