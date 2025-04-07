#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efe8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa91fc);

#define public_6fa92c3 _public_6fa92c3
#define public_6fa92cd _public_6fa92cd
#define public_6fa92df _public_6fa92df
#define public_6fa92e9 _public_6fa92e9
#define public_6fa92eb _public_6fa92eb
#define public_6fa92ef _public_6fa92ef
#define public_6fa930b _public_6fa930b
#define public_6fa9314 _public_6fa9314
#define public_6fa9323 _public_6fa9323
#define public_6fa933a _public_6fa933a
#define public_6fa933d _public_6fa933d

PROC_DECLARE(0x6fa92a7, internal_6fa92a7, public_6fa92a7);
extern "C" NAKED register_t __cdecl internal_6fa92a7()
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
        jne public_6fa92c3
        cmp dword ptr ds : [public_6fd3de8], 0
        jmp public_6fa92e9
        public_6fa92c3 : nop
        cmp esi, 1
        je public_6fa92cd
        cmp esi, 2
        jne public_6fa92ef
        public_6fa92cd : nop
        mov eax, dword ptr ds : [public_6fd3df4]
        test eax, eax
        je public_6fa92df
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6fa92eb
        public_6fa92df : nop
        push edi
        push esi
        push ebx
        call public_6fa91fc
        test eax, eax
        public_6fa92e9 : nop
        jne public_6fa92ef
        public_6fa92eb : nop
        xor eax, eax
        jmp public_6fa933d
        public_6fa92ef : nop
        push edi
        push esi
        push ebx
        call public_6efe8a0
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6fa930b
        test eax, eax
        jne public_6fa933a
        push edi
        push eax
        push ebx
        call public_6fa91fc
        public_6fa930b : nop
        test esi, esi
        je public_6fa9314
        cmp esi, 3
        jne public_6fa933a
        public_6fa9314 : nop
        push edi
        push esi
        push ebx
        call public_6fa91fc
        test eax, eax
        jne public_6fa9323
        and dword ptr ss : [ebp+0xC], eax
        public_6fa9323 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6fa933a
        mov eax, dword ptr ds : [public_6fd3df4]
        test eax, eax
        je public_6fa933a
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6fa933a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6fa933d : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6fa92a7)
    }
}

#undef public_6fa92c3
#undef public_6fa92cd
#undef public_6fa92df
#undef public_6fa92e9
#undef public_6fa92eb
#undef public_6fa92ef
#undef public_6fa930b
#undef public_6fa9314
#undef public_6fa9323
#undef public_6fa933a
#undef public_6fa933d
