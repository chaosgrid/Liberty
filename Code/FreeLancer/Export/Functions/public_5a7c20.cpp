#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a7c20);

#define public_5a7c39 _public_5a7c39
#define public_5a7c50 _public_5a7c50
#define public_5a7c5c _public_5a7c5c
#define public_5a7c60 _public_5a7c60
#define public_5a7c70 _public_5a7c70
#define public_5a7c7b _public_5a7c7b

PROC_DECLARE(0x5a7c20, internal_5a7c20, public_5a7c20);
extern "C" NAKED register_t __cdecl internal_5a7c20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_5a7c39
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_5a7c39
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_5a7c39 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_5a7c60
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_5a7c5c
        lea esp, ss:[esp]
        public_5a7c50 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_5a7c50
        public_5a7c5c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_5a7c60 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_5a7c7b
        lea esp, ss:[esp]
        public_5a7c70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_5a7c70
        public_5a7c7b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5a7c20)
    }
}

#undef public_5a7c39
#undef public_5a7c50
#undef public_5a7c5c
#undef public_5a7c60
#undef public_5a7c70
#undef public_5a7c7b
