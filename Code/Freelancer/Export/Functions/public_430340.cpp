#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430340);

#define public_430359 _public_430359
#define public_430370 _public_430370
#define public_43037c _public_43037c
#define public_430380 _public_430380
#define public_430390 _public_430390
#define public_43039b _public_43039b

PROC_DECLARE(0x430340, internal_430340, public_430340);
extern "C" NAKED register_t __cdecl internal_430340()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x48]
        test dl, dl
        push ebx
        jne public_430359
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_430359
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_430359 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_430380
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_43037c
        lea esp, ss:[esp]
        public_430370 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_430370
        public_43037c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_430380 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_43039b
        lea esp, ss:[esp]
        public_430390 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_430390
        public_43039b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x430340)
    }
}

#undef public_430359
#undef public_430370
#undef public_43037c
#undef public_430380
#undef public_430390
#undef public_43039b
