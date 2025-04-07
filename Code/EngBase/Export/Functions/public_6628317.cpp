#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628160);
CLANG_FORWARD_PROC_SYMBOL(public_662826c);

#define public_6628333 _public_6628333
#define public_662833d _public_662833d
#define public_662834f _public_662834f
#define public_6628359 _public_6628359
#define public_662835b _public_662835b
#define public_662835f _public_662835f
#define public_662837b _public_662837b
#define public_6628384 _public_6628384
#define public_6628393 _public_6628393
#define public_66283aa _public_66283aa
#define public_66283ad _public_66283ad

PROC_DECLARE(0x6628317, internal_6628317, public_6628317);
extern "C" NAKED register_t __cdecl internal_6628317()
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
        jne public_6628333
        cmp dword ptr ds : [public_662b1bc], 0
        jmp public_6628359
        public_6628333 : nop
        cmp esi, 1
        je public_662833d
        cmp esi, 2
        jne public_662835f
        public_662833d : nop
        mov eax, dword ptr ds : [public_662b1c4]
        test eax, eax
        je public_662834f
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_662835b
        public_662834f : nop
        push edi
        push esi
        push ebx
        call public_662826c
        test eax, eax
        public_6628359 : nop
        jne public_662835f
        public_662835b : nop
        xor eax, eax
        jmp public_66283ad
        public_662835f : nop
        push edi
        push esi
        push ebx
        call public_6628160
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_662837b
        test eax, eax
        jne public_66283aa
        push edi
        push eax
        push ebx
        call public_662826c
        public_662837b : nop
        test esi, esi
        je public_6628384
        cmp esi, 3
        jne public_66283aa
        public_6628384 : nop
        push edi
        push esi
        push ebx
        call public_662826c
        test eax, eax
        jne public_6628393
        and dword ptr ss : [ebp+0xC], eax
        public_6628393 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_66283aa
        mov eax, dword ptr ds : [public_662b1c4]
        test eax, eax
        je public_66283aa
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_66283aa : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_66283ad : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6628317)
    }
}

#undef public_6628333
#undef public_662833d
#undef public_662834f
#undef public_6628359
#undef public_662835b
#undef public_662835f
#undef public_662837b
#undef public_6628384
#undef public_6628393
#undef public_66283aa
#undef public_66283ad
