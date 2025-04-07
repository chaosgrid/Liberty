#include "ImeUi-PCH.h"


#define public_6711555 _public_6711555
#define public_6711566 _public_6711566
#define public_6711568 _public_6711568

PROC_DECLARE(0x6711540, internal_6711540, public_6711540);
extern "C" NAKED register_t __cdecl internal_6711540()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor eax, eax
        test edi, edi
        jl public_6711568
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_6711568
        public_6711555 : nop
        mov esi, dword ptr ds : [ecx+8]
        dec edi
        js public_6711566
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6711555
        pop edi
        pop esi
        ret 4
        public_6711566 : nop
        mov eax, esi
        public_6711568 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6711540)
    }
}

#undef public_6711555
#undef public_6711566
#undef public_6711568
