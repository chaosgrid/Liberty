#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2efe0);

#define public_6f2f000 _public_6f2f000
#define public_6f2f017 _public_6f2f017
#define public_6f2f01b _public_6f2f01b
#define public_6f2f022 _public_6f2f022

PROC_DECLARE(0x6f2efe0, internal_6f2efe0, public_6f2efe0);
extern "C" NAKED register_t __cdecl internal_6f2efe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+8]
        push esi
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6f2f022
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f2f01b
        nop 
        public_6f2f000 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [edx+8]
        jne public_6f2f017
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov edx, dword ptr ds : [edx]
        jne public_6f2f000
        mov eax, 1
        pop esi
        ret 
        public_6f2f017 : nop
        cmp eax, ecx
        jne public_6f2f022
        public_6f2f01b : nop
        mov eax, 1
        pop esi
        ret 
        public_6f2f022 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2efe0)
    }
}

#undef public_6f2f000
#undef public_6f2f017
#undef public_6f2f01b
#undef public_6f2f022
