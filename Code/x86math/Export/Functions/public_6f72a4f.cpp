#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71090);
CLANG_FORWARD_PROC_SYMBOL(public_6f729a4);

#define public_6f72a6b _public_6f72a6b
#define public_6f72a75 _public_6f72a75
#define public_6f72a87 _public_6f72a87
#define public_6f72a91 _public_6f72a91
#define public_6f72a93 _public_6f72a93
#define public_6f72a97 _public_6f72a97
#define public_6f72ab3 _public_6f72ab3
#define public_6f72abc _public_6f72abc
#define public_6f72acb _public_6f72acb
#define public_6f72ae2 _public_6f72ae2
#define public_6f72ae5 _public_6f72ae5

PROC_DECLARE(0x6f72a4f, internal_6f72a4f, public_6f72a4f);
extern "C" NAKED register_t __cdecl internal_6f72a4f()
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
        jne public_6f72a6b
        cmp dword ptr ds : [public_6f7443c], 0
        jmp public_6f72a91
        public_6f72a6b : nop
        cmp esi, 1
        je public_6f72a75
        cmp esi, 2
        jne public_6f72a97
        public_6f72a75 : nop
        mov eax, dword ptr ds : [public_6f74444]
        test eax, eax
        je public_6f72a87
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6f72a93
        public_6f72a87 : nop
        push edi
        push esi
        push ebx
        call public_6f729a4
        test eax, eax
        public_6f72a91 : nop
        jne public_6f72a97
        public_6f72a93 : nop
        xor eax, eax
        jmp public_6f72ae5
        public_6f72a97 : nop
        push edi
        push esi
        push ebx
        call public_6f71090
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6f72ab3
        test eax, eax
        jne public_6f72ae2
        push edi
        push eax
        push ebx
        call public_6f729a4
        public_6f72ab3 : nop
        test esi, esi
        je public_6f72abc
        cmp esi, 3
        jne public_6f72ae2
        public_6f72abc : nop
        push edi
        push esi
        push ebx
        call public_6f729a4
        test eax, eax
        jne public_6f72acb
        and dword ptr ss : [ebp+0xC], eax
        public_6f72acb : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6f72ae2
        mov eax, dword ptr ds : [public_6f74444]
        test eax, eax
        je public_6f72ae2
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6f72ae2 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6f72ae5 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6f72a4f)
    }
}

#undef public_6f72a6b
#undef public_6f72a75
#undef public_6f72a87
#undef public_6f72a91
#undef public_6f72a93
#undef public_6f72a97
#undef public_6f72ab3
#undef public_6f72abc
#undef public_6f72acb
#undef public_6f72ae2
#undef public_6f72ae5
