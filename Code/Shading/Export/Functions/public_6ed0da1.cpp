#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0cf6);

#define public_6ed0dbd _public_6ed0dbd
#define public_6ed0dc7 _public_6ed0dc7
#define public_6ed0dd9 _public_6ed0dd9
#define public_6ed0de3 _public_6ed0de3
#define public_6ed0de5 _public_6ed0de5
#define public_6ed0de9 _public_6ed0de9
#define public_6ed0e05 _public_6ed0e05
#define public_6ed0e0e _public_6ed0e0e
#define public_6ed0e1d _public_6ed0e1d
#define public_6ed0e34 _public_6ed0e34
#define public_6ed0e37 _public_6ed0e37

PROC_DECLARE(0x6ed0da1, internal_6ed0da1, public_6ed0da1);
extern "C" NAKED register_t __cdecl internal_6ed0da1()
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
        jne public_6ed0dbd
        cmp dword ptr ds : [public_6ed5854], 0
        jmp public_6ed0de3
        public_6ed0dbd : nop
        cmp esi, 1
        je public_6ed0dc7
        cmp esi, 2
        jne public_6ed0de9
        public_6ed0dc7 : nop
        mov eax, dword ptr ds : [public_6ed7f50]
        test eax, eax
        je public_6ed0dd9
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6ed0de5
        public_6ed0dd9 : nop
        push edi
        push esi
        push ebx
        call public_6ed0cf6
        test eax, eax
        public_6ed0de3 : nop
        jne public_6ed0de9
        public_6ed0de5 : nop
        xor eax, eax
        jmp public_6ed0e37
        public_6ed0de9 : nop
        push edi
        push esi
        push ebx
        call public_6ed0ae0
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6ed0e05
        test eax, eax
        jne public_6ed0e34
        push edi
        push eax
        push ebx
        call public_6ed0cf6
        public_6ed0e05 : nop
        test esi, esi
        je public_6ed0e0e
        cmp esi, 3
        jne public_6ed0e34
        public_6ed0e0e : nop
        push edi
        push esi
        push ebx
        call public_6ed0cf6
        test eax, eax
        jne public_6ed0e1d
        and dword ptr ss : [ebp+0xC], eax
        public_6ed0e1d : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6ed0e34
        mov eax, dword ptr ds : [public_6ed7f50]
        test eax, eax
        je public_6ed0e34
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6ed0e34 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6ed0e37 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0da1)
    }
}

#undef public_6ed0dbd
#undef public_6ed0dc7
#undef public_6ed0dd9
#undef public_6ed0de3
#undef public_6ed0de5
#undef public_6ed0de9
#undef public_6ed0e05
#undef public_6ed0e0e
#undef public_6ed0e1d
#undef public_6ed0e34
#undef public_6ed0e37
