#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39210);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a298);

#define public_6b6a35f _public_6b6a35f
#define public_6b6a369 _public_6b6a369
#define public_6b6a37b _public_6b6a37b
#define public_6b6a385 _public_6b6a385
#define public_6b6a387 _public_6b6a387
#define public_6b6a38b _public_6b6a38b
#define public_6b6a3a7 _public_6b6a3a7
#define public_6b6a3b0 _public_6b6a3b0
#define public_6b6a3bf _public_6b6a3bf
#define public_6b6a3d6 _public_6b6a3d6
#define public_6b6a3d9 _public_6b6a3d9

PROC_DECLARE(0x6b6a343, internal_6b6a343, public_6b6a343);
extern "C" NAKED register_t __cdecl internal_6b6a343()
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
        jne public_6b6a35f
        cmp dword ptr ds : [public_6b7463c], 0
        jmp public_6b6a385
        public_6b6a35f : nop
        cmp esi, 1
        je public_6b6a369
        cmp esi, 2
        jne public_6b6a38b
        public_6b6a369 : nop
        mov eax, dword ptr ds : [public_6b7464c]
        test eax, eax
        je public_6b6a37b
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6b6a387
        public_6b6a37b : nop
        push edi
        push esi
        push ebx
        call public_6b6a298
        test eax, eax
        public_6b6a385 : nop
        jne public_6b6a38b
        public_6b6a387 : nop
        xor eax, eax
        jmp public_6b6a3d9
        public_6b6a38b : nop
        push edi
        push esi
        push ebx
        call public_6b39210
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6b6a3a7
        test eax, eax
        jne public_6b6a3d6
        push edi
        push eax
        push ebx
        call public_6b6a298
        public_6b6a3a7 : nop
        test esi, esi
        je public_6b6a3b0
        cmp esi, 3
        jne public_6b6a3d6
        public_6b6a3b0 : nop
        push edi
        push esi
        push ebx
        call public_6b6a298
        test eax, eax
        jne public_6b6a3bf
        and dword ptr ss : [ebp+0xC], eax
        public_6b6a3bf : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6b6a3d6
        mov eax, dword ptr ds : [public_6b7464c]
        test eax, eax
        je public_6b6a3d6
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6b6a3d6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6b6a3d9 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6b6a343)
    }
}

#undef public_6b6a35f
#undef public_6b6a369
#undef public_6b6a37b
#undef public_6b6a385
#undef public_6b6a387
#undef public_6b6a38b
#undef public_6b6a3a7
#undef public_6b6a3b0
#undef public_6b6a3bf
#undef public_6b6a3d6
#undef public_6b6a3d9
