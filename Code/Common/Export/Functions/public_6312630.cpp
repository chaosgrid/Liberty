#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312630);

#define public_6312646 _public_6312646
#define public_6312651 _public_6312651
#define public_6312655 _public_6312655
#define public_6312660 _public_6312660
#define public_631266c _public_631266c
#define public_6312675 _public_6312675

PROC_DECLARE(0x6312630, internal_6312630, public_6312630);
extern "C" NAKED register_t __cdecl internal_6312630()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x29]
        test bl, bl
        jne public_6312655
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6312651
        public_6312646 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6312646
        public_6312651 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6312655 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_631266c
        nop 
        public_6312660 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6312660
        public_631266c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6312675
        mov dword ptr ds : [ecx], eax
        public_6312675 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6312630)
    }
}

#undef public_6312646
#undef public_6312651
#undef public_6312655
#undef public_6312660
#undef public_631266c
#undef public_6312675
