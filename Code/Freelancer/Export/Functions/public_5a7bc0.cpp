#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a7bc0);

#define public_5a7bd9 _public_5a7bd9
#define public_5a7bf0 _public_5a7bf0
#define public_5a7bfc _public_5a7bfc
#define public_5a7c00 _public_5a7c00
#define public_5a7c10 _public_5a7c10
#define public_5a7c1b _public_5a7c1b

PROC_DECLARE(0x5a7bc0, internal_5a7bc0, public_5a7bc0);
extern "C" NAKED register_t __cdecl internal_5a7bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x54]
        test dl, dl
        push ebx
        jne public_5a7bd9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_5a7bd9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_5a7bd9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x55]
        test bl, bl
        jne public_5a7c00
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_5a7bfc
        lea esp, ss:[esp]
        public_5a7bf0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_5a7bf0
        public_5a7bfc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_5a7c00 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_5a7c1b
        lea esp, ss:[esp]
        public_5a7c10 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_5a7c10
        public_5a7c1b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5a7bc0)
    }
}

#undef public_5a7bd9
#undef public_5a7bf0
#undef public_5a7bfc
#undef public_5a7c00
#undef public_5a7c10
#undef public_5a7c1b
