#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5d40);
CLANG_FORWARD_PROC_SYMBOL(public_65c6bf0);

#define public_65c6cb7 _public_65c6cb7
#define public_65c6cc1 _public_65c6cc1
#define public_65c6cd3 _public_65c6cd3
#define public_65c6cdd _public_65c6cdd
#define public_65c6cdf _public_65c6cdf
#define public_65c6ce3 _public_65c6ce3
#define public_65c6cff _public_65c6cff
#define public_65c6d08 _public_65c6d08
#define public_65c6d17 _public_65c6d17
#define public_65c6d2e _public_65c6d2e
#define public_65c6d31 _public_65c6d31

PROC_DECLARE(0x65c6c9b, internal_65c6c9b, public_65c6c9b);
extern "C" NAKED register_t __cdecl internal_65c6c9b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_65c6cb7
        cmp dword ptr ds : [public_65ca2b0], 0
        jmp public_65c6cdd
        public_65c6cb7 : nop
        cmp esi, 1
        je public_65c6cc1
        cmp esi, 2
        jne public_65c6ce3
        public_65c6cc1 : nop
        mov eax, dword ptr ds : [public_65ca2b8]
        test eax, eax
        je public_65c6cd3
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_65c6cdf
        public_65c6cd3 : nop
        push edi
        push esi
        push ebx
        call public_65c6bf0
        test eax, eax
        public_65c6cdd : nop
        jne public_65c6ce3
        public_65c6cdf : nop
        xor eax, eax
        jmp public_65c6d31
        public_65c6ce3 : nop
        push edi
        push esi
        push ebx
        call public_65c5d40
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_65c6cff
        test eax, eax
        jne public_65c6d2e
        push edi
        push eax
        push ebx
        call public_65c6bf0
        public_65c6cff : nop
        test esi, esi
        je public_65c6d08
        cmp esi, 3
        jne public_65c6d2e
        public_65c6d08 : nop
        push edi
        push esi
        push ebx
        call public_65c6bf0
        test eax, eax
        jne public_65c6d17
        and dword ptr ss : [ebp+0xC], eax
        public_65c6d17 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_65c6d2e
        mov eax, dword ptr ds : [public_65ca2b8]
        test eax, eax
        je public_65c6d2e
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_65c6d2e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_65c6d31 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x65c6c9b)
    }
}

#undef public_65c6cb7
#undef public_65c6cc1
#undef public_65c6cd3
#undef public_65c6cdd
#undef public_65c6cdf
#undef public_65c6ce3
#undef public_65c6cff
#undef public_65c6d08
#undef public_65c6d17
#undef public_65c6d2e
#undef public_65c6d31
