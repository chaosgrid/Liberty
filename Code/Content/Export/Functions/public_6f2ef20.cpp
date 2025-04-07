#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ef20);

#define public_6f2ef39 _public_6f2ef39
#define public_6f2ef50 _public_6f2ef50
#define public_6f2ef5c _public_6f2ef5c
#define public_6f2ef60 _public_6f2ef60
#define public_6f2ef70 _public_6f2ef70
#define public_6f2ef7b _public_6f2ef7b

PROC_DECLARE(0x6f2ef20, internal_6f2ef20, public_6f2ef20);
extern "C" NAKED register_t __cdecl internal_6f2ef20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x1C]
        test dl, dl
        push ebx
        jne public_6f2ef39
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f2ef39
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f2ef39 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_6f2ef60
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f2ef5c
        lea esp, ss:[esp]
        public_6f2ef50 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f2ef50
        public_6f2ef5c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f2ef60 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f2ef7b
        lea esp, ss:[esp]
        public_6f2ef70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f2ef70
        public_6f2ef7b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f2ef20)
    }
}

#undef public_6f2ef39
#undef public_6f2ef50
#undef public_6f2ef5c
#undef public_6f2ef60
#undef public_6f2ef70
#undef public_6f2ef7b
