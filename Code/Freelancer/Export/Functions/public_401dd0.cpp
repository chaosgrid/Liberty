#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401dd0);

#define public_401de9 _public_401de9
#define public_401e00 _public_401e00
#define public_401e0c _public_401e0c
#define public_401e10 _public_401e10
#define public_401e20 _public_401e20
#define public_401e2b _public_401e2b

PROC_DECLARE(0x401dd0, internal_401dd0, public_401dd0);
extern "C" NAKED register_t __cdecl internal_401dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x18]
        test dl, dl
        push ebx
        jne public_401de9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_401de9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_401de9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_401e10
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_401e0c
        lea esp, ss:[esp]
        public_401e00 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_401e00
        public_401e0c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_401e10 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_401e2b
        lea esp, ss:[esp]
        public_401e20 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_401e20
        public_401e2b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x401dd0)
    }
}

#undef public_401de9
#undef public_401e00
#undef public_401e0c
#undef public_401e10
#undef public_401e20
#undef public_401e2b
