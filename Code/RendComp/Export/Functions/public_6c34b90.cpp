#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32090);
CLANG_FORWARD_PROC_SYMBOL(public_6c32130);
CLANG_FORWARD_PROC_SYMBOL(public_6c32350);

#define public_6c34bb0 _public_6c34bb0
#define public_6c34bd4 _public_6c34bd4
#define public_6c34bd8 _public_6c34bd8
#define public_6c34bdd _public_6c34bdd
#define public_6c34c2d _public_6c34c2d
#define public_6c34c48 _public_6c34c48
#define public_6c34c69 _public_6c34c69
#define public_6c34c70 _public_6c34c70
#define public_6c34c83 _public_6c34c83
#define public_6c34c94 _public_6c34c94

PROC_DECLARE(0x6c34b90, internal_6c34b90, public_6c34b90);
extern "C" NAKED register_t __cdecl internal_6c34b90()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x18
        jne public_6c34c83
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_6c34bb0 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c34bd8
        test cl, cl
        je public_6c34bd4
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c34bd8
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c34bb0
        public_6c34bd4 : nop
        xor eax, eax
        jmp public_6c34bdd
        public_6c34bd8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c34bdd : nop
        test eax, eax
        pop ebx
        jne public_6c34c83
        push 1
        push 0x40
        call dword ptr ds : [public_6c36044]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6c34c70
        mov ecx, esi
        call public_6c32090
        lea eax, ds:[esi+0x34]
        mov dword ptr ds : [eax], offset public_6c368b0
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6c3687c
        mov dword ptr ds : [esi+4], offset public_6c36820
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x30], ecx
        jne public_6c34c69
        mov dword ptr ds : [esi+0x30], eax
        public_6c34c2d : nop
        push ebp
        mov ecx, esi
        call public_6c32350
        mov edi, eax
        test edi, edi
        je public_6c34c94
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6c34c48
        mov dword ptr ds : [eax], 0
        public_6c34c48 : nop
        mov ecx, esi
        call public_6c32130
        push esi
        call dword ptr ds : [public_6c3603c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6c34c69 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6c34c2d
        public_6c34c70 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6c34c83 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6c34c94 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6c34b90)
    }
}

#undef public_6c34bb0
#undef public_6c34bd4
#undef public_6c34bd8
#undef public_6c34bdd
#undef public_6c34c2d
#undef public_6c34c48
#undef public_6c34c69
#undef public_6c34c70
#undef public_6c34c83
#undef public_6c34c94
