#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_4bc0ae _public_4bc0ae
#define public_4bc0b8 _public_4bc0b8
#define public_4bc0d6 _public_4bc0d6
#define public_4bc0e9 _public_4bc0e9
#define public_4bc0f8 _public_4bc0f8
#define public_4bc0fe _public_4bc0fe

PROC_DECLARE(0x4bc090, internal_4bc090, public_4bc090);
extern "C" NAKED register_t __cdecl internal_4bc090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xEF01
        push esi
        mov esi, ecx
        jne public_4bc0b8
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4bc0ae
        mov edx, dword ptr ds : [esi]
        add eax, 0x60
        push eax
        call dword ptr ds : [edx+0x14]
        public_4bc0ae : nop
        or byte ptr ds : [esi+0x6C], 3
        mov al, 1
        pop esi
        ret 0xC
        public_4bc0b8 : nop
        cmp eax, 0xEF02
        jne public_4bc0fe
        push 0
        push esi
        call public_59dd00
        add esp, 8
        test esi, esi
        je public_4bc0f8
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4bc0e9
        push edi
        public_4bc0d6 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4bc0d6
        pop edi
        public_4bc0e9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_4bc0f8 : nop
        mov al, 1
        pop esi
        ret 0xC
        public_4bc0fe : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4bc090)
    }
}

#undef public_4bc0ae
#undef public_4bc0b8
#undef public_4bc0d6
#undef public_4bc0e9
#undef public_4bc0f8
#undef public_4bc0fe
