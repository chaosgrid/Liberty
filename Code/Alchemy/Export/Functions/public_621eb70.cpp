#include "Alchemy-PCH.h"


#define public_621eb88 _public_621eb88
#define public_621eb96 _public_621eb96
#define public_621eb9d _public_621eb9d
#define public_621eba1 _public_621eba1
#define public_621ebab _public_621ebab
#define public_621ebb8 _public_621ebb8
#define public_621ebcc _public_621ebcc

PROC_DECLARE(0x621eb70, internal_621eb70, public_621eb70);
extern "C" NAKED register_t __cdecl internal_621eb70()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [edi+0x28]
        cmp eax, ecx
        je public_621eba1
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        public_621eb88 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_621eb96
        mov ebx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [eax+4]
        cmp ebx, ebp
        je public_621eb9d
        public_621eb96 : nop
        add eax, 8
        cmp eax, ecx
        jne public_621eb88
        public_621eb9d : nop
        cmp eax, ecx
        jne public_621ebab
        public_621eba1 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_621ebab : nop
        mov edx, dword ptr ds : [edi+0x2C]
        add eax, 8
        cmp eax, edx
        je public_621ebcc
        lea ecx, ds:[eax-8]
        public_621ebb8 : nop
        mov esi, dword ptr ds : [eax]
        add eax, 8
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax-4]
        mov dword ptr ds : [ecx+4], esi
        add ecx, 8
        cmp eax, edx
        jne public_621ebb8
        public_621ebcc : nop
        mov eax, dword ptr ds : [edi+0x2C]
        add eax, 0xFFFFFFF8
        mov dword ptr ds : [edi+0x2C], eax
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x621eb70)
    }
}

#undef public_621eb88
#undef public_621eb96
#undef public_621eb9d
#undef public_621eba1
#undef public_621ebab
#undef public_621ebb8
#undef public_621ebcc
