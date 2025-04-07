#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66ff8df _public_66ff8df
#define public_66ff908 _public_66ff908
#define public_66ff914 _public_66ff914
#define public_66ff938 _public_66ff938
#define public_66ff93b _public_66ff93b

PROC_DECLARE(0x66ff8d0, internal_66ff8d0, public_66ff8d0);
extern "C" NAKED register_t __cdecl internal_66ff8d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_66ff8df
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_66ff8df : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_66ff93b
        push edi
        mov edi, dword ptr ds : [ecx+8]
        test edi, edi
        mov dword ptr ds : [ecx+4], 1
        je public_66ff938
        push esi
        mov dword ptr ds : [edi], offset public_6702c3c
        mov dword ptr ds : [edi+4], offset public_6702c08
        mov esi, offset public_6704608
        public_66ff908 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_66ff914
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66ff914 : nop
        mov dword ptr ds : [esi], 0
        add esi, 4
        cmp esi, offset public_670462c
        jl public_66ff908
        mov edx, dword ptr ds : [edi+0x20]
        push edx
        call public_6700710
        push edi
        call public_6700710
        add esp, 8
        pop esi
        public_66ff938 : nop
        xor eax, eax
        pop edi
        public_66ff93b : nop
        ret 4
        UNREACHABLE_TRAP(0x66ff8d0)
    }
}

#undef public_66ff8df
#undef public_66ff908
#undef public_66ff914
#undef public_66ff938
#undef public_66ff93b
