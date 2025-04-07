#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43600);

#define public_6d43616 _public_6d43616
#define public_6d43623 _public_6d43623
#define public_6d4362a _public_6d4362a
#define public_6d43638 _public_6d43638
#define public_6d43646 _public_6d43646
#define public_6d43649 _public_6d43649

PROC_DECLARE(0x6d43600, internal_6d43600, public_6d43600);
extern "C" NAKED register_t __cdecl internal_6d43600()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6d8f644]
        mov ecx, dword ptr ds : [edx]
        push esi
        xor eax, eax
        cmp ecx, edx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_6d4362a
        mov esi, dword ptr ds : [edi]
        public_6d43616 : nop
        cmp dword ptr ds : [ecx+0x18], esi
        je public_6d43623
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6d43616
        jmp public_6d4362a
        public_6d43623 : nop
        lea eax, ds:[ecx+8]
        test eax, eax
        jne public_6d43649
        public_6d4362a : nop
        mov edx, dword ptr ds : [public_6d8f638]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_6d43649
        mov esi, dword ptr ds : [edi]
        public_6d43638 : nop
        cmp dword ptr ds : [ecx+0x18], esi
        je public_6d43646
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6d43638
        pop edi
        pop esi
        ret 
        public_6d43646 : nop
        lea eax, ds:[ecx+8]
        public_6d43649 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d43600)
    }
}

#undef public_6d43616
#undef public_6d43623
#undef public_6d4362a
#undef public_6d43638
#undef public_6d43646
#undef public_6d43649
