#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3e20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3e50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3e80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb4550 _public_6eb4550
#define public_6eb4574 _public_6eb4574
#define public_6eb4578 _public_6eb4578
#define public_6eb457d _public_6eb457d
#define public_6eb45ca _public_6eb45ca
#define public_6eb45e5 _public_6eb45e5
#define public_6eb4605 _public_6eb4605
#define public_6eb460c _public_6eb460c
#define public_6eb461f _public_6eb461f
#define public_6eb4630 _public_6eb4630

PROC_DECLARE(0x6eb4530, internal_6eb4530, public_6eb4530);
extern "C" NAKED register_t __cdecl internal_6eb4530()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x14
        jne public_6eb461f
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_6eb4550 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb4578
        test cl, cl
        je public_6eb4574
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb4578
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb4550
        public_6eb4574 : nop
        xor eax, eax
        jmp public_6eb457d
        public_6eb4578 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb457d : nop
        test eax, eax
        pop ebx
        jne public_6eb461f
        push 0x28
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6eb460c
        mov ecx, esi
        call public_6eb3e20
        lea eax, ds:[esi+0x1C]
        mov dword ptr ds : [eax], offset public_6ed1454
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed1400
        mov dword ptr ds : [esi+4], offset public_6ed13d8
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x18], ecx
        jne public_6eb4605
        mov dword ptr ds : [esi+0x18], eax
        public_6eb45ca : nop
        push ebp
        mov ecx, esi
        call public_6eb3e80
        mov edi, eax
        test edi, edi
        je public_6eb4630
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6eb45e5
        mov dword ptr ds : [eax], 0
        public_6eb45e5 : nop
        mov ecx, esi
        call public_6eb3e50
        push esi
        call public_6ed0c50
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6eb4605 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6eb45ca
        public_6eb460c : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6eb461f : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6eb4630 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6eb4530)
    }
}

#undef public_6eb4550
#undef public_6eb4574
#undef public_6eb4578
#undef public_6eb457d
#undef public_6eb45ca
#undef public_6eb45e5
#undef public_6eb4605
#undef public_6eb460c
#undef public_6eb461f
#undef public_6eb4630
