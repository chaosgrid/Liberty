#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb830);

#define public_6ecb849 _public_6ecb849
#define public_6ecb860 _public_6ecb860
#define public_6ecb86c _public_6ecb86c
#define public_6ecb870 _public_6ecb870
#define public_6ecb880 _public_6ecb880
#define public_6ecb88b _public_6ecb88b

PROC_DECLARE(0x6ecb830, internal_6ecb830, public_6ecb830);
extern "C" NAKED register_t __cdecl internal_6ecb830()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x1C]
        test dl, dl
        push ebx
        jne public_6ecb849
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6ecb849
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6ecb849 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_6ecb870
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6ecb86c
        lea esp, ss:[esp]
        public_6ecb860 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6ecb860
        public_6ecb86c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ecb870 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6ecb88b
        lea esp, ss:[esp]
        public_6ecb880 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6ecb880
        public_6ecb88b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecb830)
    }
}

#undef public_6ecb849
#undef public_6ecb860
#undef public_6ecb86c
#undef public_6ecb870
#undef public_6ecb880
#undef public_6ecb88b
