#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6620);

#define public_65f6636 _public_65f6636
#define public_65f6641 _public_65f6641
#define public_65f6645 _public_65f6645
#define public_65f6650 _public_65f6650
#define public_65f665c _public_65f665c
#define public_65f6665 _public_65f6665

PROC_DECLARE(0x65f6620, internal_65f6620, public_65f6620);
extern "C" NAKED register_t __cdecl internal_65f6620()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_65f6645
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_65f6641
        public_65f6636 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_65f6636
        public_65f6641 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_65f6645 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_65f665c
        nop 
        public_65f6650 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_65f6650
        public_65f665c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_65f6665
        mov dword ptr ds : [ecx], eax
        public_65f6665 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f6620)
    }
}

#undef public_65f6636
#undef public_65f6641
#undef public_65f6645
#undef public_65f6650
#undef public_65f665c
#undef public_65f6665
