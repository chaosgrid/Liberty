#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d158da);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f33c);

#define public_6d2f403 _public_6d2f403
#define public_6d2f40d _public_6d2f40d
#define public_6d2f41f _public_6d2f41f
#define public_6d2f429 _public_6d2f429
#define public_6d2f42b _public_6d2f42b
#define public_6d2f42f _public_6d2f42f
#define public_6d2f44b _public_6d2f44b
#define public_6d2f454 _public_6d2f454
#define public_6d2f463 _public_6d2f463
#define public_6d2f47a _public_6d2f47a
#define public_6d2f47d _public_6d2f47d

PROC_DECLARE(0x6d2f3e7, internal_6d2f3e7, public_6d2f3e7);
extern "C" NAKED register_t __cdecl internal_6d2f3e7()
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
        jne public_6d2f403
        cmp dword ptr ds : [public_6d72910], 0
        jmp public_6d2f429
        public_6d2f403 : nop
        cmp esi, 1
        je public_6d2f40d
        cmp esi, 2
        jne public_6d2f42f
        public_6d2f40d : nop
        mov eax, dword ptr ds : [public_6d741c8]
        test eax, eax
        je public_6d2f41f
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6d2f42b
        public_6d2f41f : nop
        push edi
        push esi
        push ebx
        call public_6d2f33c
        test eax, eax
        public_6d2f429 : nop
        jne public_6d2f42f
        public_6d2f42b : nop
        xor eax, eax
        jmp public_6d2f47d
        public_6d2f42f : nop
        push edi
        push esi
        push ebx
        call public_6d158da
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6d2f44b
        test eax, eax
        jne public_6d2f47a
        push edi
        push eax
        push ebx
        call public_6d2f33c
        public_6d2f44b : nop
        test esi, esi
        je public_6d2f454
        cmp esi, 3
        jne public_6d2f47a
        public_6d2f454 : nop
        push edi
        push esi
        push ebx
        call public_6d2f33c
        test eax, eax
        jne public_6d2f463
        and dword ptr ss : [ebp+0xC], eax
        public_6d2f463 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d2f47a
        mov eax, dword ptr ds : [public_6d741c8]
        test eax, eax
        je public_6d2f47a
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6d2f47a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6d2f47d : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d2f3e7)
    }
}

#undef public_6d2f403
#undef public_6d2f40d
#undef public_6d2f41f
#undef public_6d2f429
#undef public_6d2f42b
#undef public_6d2f42f
#undef public_6d2f44b
#undef public_6d2f454
#undef public_6d2f463
#undef public_6d2f47a
#undef public_6d2f47d
