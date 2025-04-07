#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2350);
CLANG_FORWARD_PROC_SYMBOL(public_65d7d7a);

#define public_65d7e6f _public_65d7e6f
#define public_65d7e79 _public_65d7e79
#define public_65d7e8b _public_65d7e8b
#define public_65d7e95 _public_65d7e95
#define public_65d7e97 _public_65d7e97
#define public_65d7e9b _public_65d7e9b
#define public_65d7eb7 _public_65d7eb7
#define public_65d7ec0 _public_65d7ec0
#define public_65d7ecf _public_65d7ecf
#define public_65d7ee6 _public_65d7ee6
#define public_65d7ee9 _public_65d7ee9

PROC_DECLARE(0x65d7e53, internal_65d7e53, public_65d7e53);
extern "C" NAKED register_t __cdecl internal_65d7e53()
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
        jne public_65d7e6f
        cmp dword ptr ds : [public_65e6120], 0
        jmp public_65d7e95
        public_65d7e6f : nop
        cmp esi, 1
        je public_65d7e79
        cmp esi, 2
        jne public_65d7e9b
        public_65d7e79 : nop
        mov eax, dword ptr ds : [public_65e7a5c]
        test eax, eax
        je public_65d7e8b
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_65d7e97
        public_65d7e8b : nop
        push edi
        push esi
        push ebx
        call public_65d7d7a
        test eax, eax
        public_65d7e95 : nop
        jne public_65d7e9b
        public_65d7e97 : nop
        xor eax, eax
        jmp public_65d7ee9
        public_65d7e9b : nop
        push edi
        push esi
        push ebx
        call public_65d2350
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_65d7eb7
        test eax, eax
        jne public_65d7ee6
        push edi
        push eax
        push ebx
        call public_65d7d7a
        public_65d7eb7 : nop
        test esi, esi
        je public_65d7ec0
        cmp esi, 3
        jne public_65d7ee6
        public_65d7ec0 : nop
        push edi
        push esi
        push ebx
        call public_65d7d7a
        test eax, eax
        jne public_65d7ecf
        and dword ptr ss : [ebp+0xC], eax
        public_65d7ecf : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_65d7ee6
        mov eax, dword ptr ds : [public_65e7a5c]
        test eax, eax
        je public_65d7ee6
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_65d7ee6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_65d7ee9 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x65d7e53)
    }
}

#undef public_65d7e6f
#undef public_65d7e79
#undef public_65d7e8b
#undef public_65d7e95
#undef public_65d7e97
#undef public_65d7e9b
#undef public_65d7eb7
#undef public_65d7ec0
#undef public_65d7ecf
#undef public_65d7ee6
#undef public_65d7ee9
