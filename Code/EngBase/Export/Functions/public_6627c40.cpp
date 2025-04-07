#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d700);
CLANG_FORWARD_PROC_SYMBOL(public_6625c70);
CLANG_FORWARD_PROC_SYMBOL(public_6625d00);

#define public_6627c60 _public_6627c60
#define public_6627c84 _public_6627c84
#define public_6627c88 _public_6627c88
#define public_6627c8d _public_6627c8d
#define public_6627cdd _public_6627cdd
#define public_6627cf8 _public_6627cf8
#define public_6627d19 _public_6627d19
#define public_6627d20 _public_6627d20
#define public_6627d33 _public_6627d33
#define public_6627d44 _public_6627d44

PROC_DECLARE(0x6627c40, internal_6627c40, public_6627c40);
extern "C" NAKED register_t __cdecl internal_6627c40()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, 0x18
        jne public_6627d33
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6627c60 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6627c88
        test cl, cl
        je public_6627c84
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6627c88
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6627c60
        public_6627c84 : nop
        xor eax, eax
        jmp public_6627c8d
        public_6627c88 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6627c8d : nop
        test eax, eax
        pop ebx
        jne public_6627d33
        push 1
        push 0x44
        call dword ptr ds : [public_6629068]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6627d20
        mov ecx, esi
        call public_6625c70
        lea eax, ds:[esi+0x38]
        mov dword ptr ds : [eax], offset public_6629838
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6629818
        mov dword ptr ds : [esi+4], offset public_66297e4
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x34], ecx
        jne public_6627d19
        mov dword ptr ds : [esi+0x34], eax
        public_6627cdd : nop
        push ebp
        mov ecx, esi
        call public_661d700
        mov edi, eax
        test edi, edi
        je public_6627d44
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6627cf8
        mov dword ptr ds : [eax], 0
        public_6627cf8 : nop
        mov ecx, esi
        call public_6625d00
        push esi
        call dword ptr ds : [public_662902c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6627d19 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6627cdd
        public_6627d20 : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        pop edi
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6627d33 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6627d44 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6627c40)
    }
}

#undef public_6627c60
#undef public_6627c84
#undef public_6627c88
#undef public_6627c8d
#undef public_6627cdd
#undef public_6627cf8
#undef public_6627d19
#undef public_6627d20
#undef public_6627d33
#undef public_6627d44
