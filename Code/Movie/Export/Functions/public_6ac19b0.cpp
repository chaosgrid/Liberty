#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1ce0);

#define public_6ac19be _public_6ac19be
#define public_6ac19ec _public_6ac19ec
#define public_6ac19f6 _public_6ac19f6

PROC_DECLARE(0x6ac19b0, internal_6ac19b0, public_6ac19b0);
extern "C" NAKED register_t __cdecl internal_6ac19b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0930]
        test eax, eax
        jne public_6ac19be
        jmp public_6ac1ce0
        public_6ac19be : nop
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac19f6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac19f6
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac19ec
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ac19ec : nop
        mov dword ptr ds : [public_6ae092c], 0
        public_6ac19f6 : nop
        ret 
        UNREACHABLE_TRAP(0x6ac19b0)
    }
}

#undef public_6ac19be
#undef public_6ac19ec
#undef public_6ac19f6
