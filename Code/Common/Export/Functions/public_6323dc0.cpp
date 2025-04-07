#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6323dc0);

#define public_6323ddc _public_6323ddc
#define public_6323df5 _public_6323df5
#define public_6323e04 _public_6323e04
#define public_6323e08 _public_6323e08
#define public_6323e11 _public_6323e11
#define public_6323e1c _public_6323e1c

PROC_DECLARE(0x6323dc0, internal_6323dc0, public_6323dc0);
extern "C" NAKED register_t __cdecl internal_6323dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x9C]
        test dl, dl
        push ebx
        jne public_6323ddc
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6323ddc
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6323ddc : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x9D]
        test bl, bl
        jne public_6323e08
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        jne public_6323e04
        public_6323df5 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        je public_6323df5
        public_6323e04 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6323e08 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6323e1c
        public_6323e11 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6323e11
        public_6323e1c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6323dc0)
    }
}

#undef public_6323ddc
#undef public_6323df5
#undef public_6323e04
#undef public_6323e08
#undef public_6323e11
#undef public_6323e1c
