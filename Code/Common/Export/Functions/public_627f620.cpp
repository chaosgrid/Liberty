#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f620);

#define public_627f636 _public_627f636
#define public_627f641 _public_627f641
#define public_627f645 _public_627f645
#define public_627f650 _public_627f650
#define public_627f65c _public_627f65c
#define public_627f665 _public_627f665

PROC_DECLARE(0x627f620, internal_627f620, public_627f620);
extern "C" NAKED register_t __cdecl internal_627f620()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_627f645
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_627f641
        public_627f636 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_627f636
        public_627f641 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_627f645 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_627f65c
        nop 
        public_627f650 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_627f650
        public_627f65c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_627f665
        mov dword ptr ds : [ecx], eax
        public_627f665 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627f620)
    }
}

#undef public_627f636
#undef public_627f641
#undef public_627f645
#undef public_627f650
#undef public_627f65c
#undef public_627f665
