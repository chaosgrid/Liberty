#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f149f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f34800);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f14a54 _public_6f14a54
#define public_6f14a6c _public_6f14a6c
#define public_6f14a7a _public_6f14a7a
#define public_6f14ab5 _public_6f14ab5
#define public_6f14ac8 _public_6f14ac8
#define public_6f14ad0 _public_6f14ad0
#define public_6f14af0 _public_6f14af0
#define public_6f14af4 _public_6f14af4
#define public_6f14af9 _public_6f14af9
#define public_6f14b10 _public_6f14b10
#define public_6f14b2b _public_6f14b2b

PROC_DECLARE(0x6f149f0, internal_6f149f0, public_6f149f0);
extern "C" NAKED register_t __cdecl internal_6f149f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f14b2b
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f14b2b
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+4]
        jne public_6f14a7a
        lea ecx, ds:[edi+0x2C]
        push ecx
        lea edx, ds:[edi+0x28]
        push edx
        add eax, 0x174
        push eax
        call dword ptr ds : [public_6fb344c]
        add esp, 0xC
        test eax, eax
        jne public_6f14b2b
        mov eax, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f14b2b
        mov ebx, 2
        public_6f14a54 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_6f14a6c
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        push 0
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f34800
        public_6f14a6c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x20]
        jne public_6f14a54
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6f14a7a : nop
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[edi+0xA4]
        call public_6f7b0f0
        mov eax, dword ptr ds : [edi+0xA8]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f14b2b
        mov edx, dword ptr ds : [ecx+0x10]
        test edx, edx
        je public_6f14b2b
        mov edi, dword ptr ds : [edi+0x20]
        mov ebp, dword ptr ds : [edi]
        cmp ebp, edi
        je public_6f14b2b
        public_6f14ab5 : nop
        mov esi, dword ptr ss : [ebp+8]
        add esi, 0xD8
        jne public_6f14ac8
        mov eax, dword ptr ds : [edx+0xD4]
        jmp public_6f14af9
        public_6f14ac8 : nop
        lea eax, ds:[edx+0xD8]
        mov edi, edi
        public_6f14ad0 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f14af4
        test cl, cl
        je public_6f14af0
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f14af4
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f14ad0
        public_6f14af0 : nop
        xor eax, eax
        jmp public_6f14af9
        public_6f14af4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f14af9 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f14b10
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, edi
        jne public_6f14ab5
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6f14b10 : nop
        lea eax, ss:[ebp+8]
        test eax, eax
        je public_6f14b2b
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        mov dword ptr ds : [eax+4], 1
        call public_6f34800
        public_6f14b2b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f149f0)
    }
}

#undef public_6f14a54
#undef public_6f14a6c
#undef public_6f14a7a
#undef public_6f14ab5
#undef public_6f14ac8
#undef public_6f14ad0
#undef public_6f14af0
#undef public_6f14af4
#undef public_6f14af9
#undef public_6f14b10
#undef public_6f14b2b
