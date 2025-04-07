#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f07a80);

#define public_6f07aa0 _public_6f07aa0
#define public_6f07aba _public_6f07aba
#define public_6f07ad4 _public_6f07ad4
#define public_6f07aee _public_6f07aee
#define public_6f07b08 _public_6f07b08
#define public_6f07b22 _public_6f07b22
#define public_6f07b3c _public_6f07b3c

PROC_DECLARE(0x6f07a80, internal_6f07a80, public_6f07a80);
extern "C" NAKED register_t __cdecl internal_6f07a80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, offset public_6fb83fc
        mov esi, eax
        mov ecx, 6
        xor edx, edx
        repe cmpsb
        jne public_6f07aa0
        pop edi
        mov eax, 2
        pop esi
        ret 
        public_6f07aa0 : nop
        mov edi, offset public_6fb83f0
        mov esi, eax
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_6f07aba
        pop edi
        mov eax, 3
        pop esi
        ret 
        public_6f07aba : nop
        mov edi, offset public_6fb83e8
        mov esi, eax
        mov ecx, 8
        xor edx, edx
        repe cmpsb
        jne public_6f07ad4
        pop edi
        mov eax, 1
        pop esi
        ret 
        public_6f07ad4 : nop
        mov edi, offset public_6fb83e0
        mov esi, eax
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        jne public_6f07aee
        pop edi
        mov eax, 4
        pop esi
        ret 
        public_6f07aee : nop
        mov edi, offset public_6fb83d4
        mov esi, eax
        mov ecx, 0xB
        xor edx, edx
        repe cmpsb
        jne public_6f07b08
        pop edi
        mov eax, 5
        pop esi
        ret 
        public_6f07b08 : nop
        mov edi, offset public_6fb83c8
        mov esi, eax
        mov ecx, 0xB
        xor edx, edx
        repe cmpsb
        jne public_6f07b22
        pop edi
        mov eax, 6
        pop esi
        ret 
        public_6f07b22 : nop
        mov edi, offset public_6fb83b8
        mov esi, eax
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_6f07b3c
        pop edi
        mov eax, 7
        pop esi
        ret 
        public_6f07b3c : nop
        mov esi, eax
        xor eax, eax
        mov edi, offset public_6fb572c
        mov ecx, 1
        repe cmpsb
        pop edi
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f07a80)
    }
}

#undef public_6f07aa0
#undef public_6f07aba
#undef public_6f07ad4
#undef public_6f07aee
#undef public_6f07b08
#undef public_6f07b22
#undef public_6f07b3c
