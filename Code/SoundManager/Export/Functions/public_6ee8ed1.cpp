#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee71f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8e26);

#define public_6ee8eed _public_6ee8eed
#define public_6ee8ef7 _public_6ee8ef7
#define public_6ee8f09 _public_6ee8f09
#define public_6ee8f13 _public_6ee8f13
#define public_6ee8f15 _public_6ee8f15
#define public_6ee8f19 _public_6ee8f19
#define public_6ee8f35 _public_6ee8f35
#define public_6ee8f3e _public_6ee8f3e
#define public_6ee8f4d _public_6ee8f4d
#define public_6ee8f64 _public_6ee8f64
#define public_6ee8f67 _public_6ee8f67

PROC_DECLARE(0x6ee8ed1, internal_6ee8ed1, public_6ee8ed1);
extern "C" NAKED register_t __cdecl internal_6ee8ed1()
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
        jne public_6ee8eed
        cmp dword ptr ds : [public_6eeaf80], 0
        jmp public_6ee8f13
        public_6ee8eed : nop
        cmp esi, 1
        je public_6ee8ef7
        cmp esi, 2
        jne public_6ee8f19
        public_6ee8ef7 : nop
        mov eax, dword ptr ds : [public_6eec008]
        test eax, eax
        je public_6ee8f09
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6ee8f15
        public_6ee8f09 : nop
        push edi
        push esi
        push ebx
        call public_6ee8e26
        test eax, eax
        public_6ee8f13 : nop
        jne public_6ee8f19
        public_6ee8f15 : nop
        xor eax, eax
        jmp public_6ee8f67
        public_6ee8f19 : nop
        push edi
        push esi
        push ebx
        call public_6ee71f0
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6ee8f35
        test eax, eax
        jne public_6ee8f64
        push edi
        push eax
        push ebx
        call public_6ee8e26
        public_6ee8f35 : nop
        test esi, esi
        je public_6ee8f3e
        cmp esi, 3
        jne public_6ee8f64
        public_6ee8f3e : nop
        push edi
        push esi
        push ebx
        call public_6ee8e26
        test eax, eax
        jne public_6ee8f4d
        and dword ptr ss : [ebp+0xC], eax
        public_6ee8f4d : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6ee8f64
        mov eax, dword ptr ds : [public_6eec008]
        test eax, eax
        je public_6ee8f64
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6ee8f64 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6ee8f67 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ee8ed1)
    }
}

#undef public_6ee8eed
#undef public_6ee8ef7
#undef public_6ee8f09
#undef public_6ee8f13
#undef public_6ee8f15
#undef public_6ee8f19
#undef public_6ee8f35
#undef public_6ee8f3e
#undef public_6ee8f4d
#undef public_6ee8f64
#undef public_6ee8f67
