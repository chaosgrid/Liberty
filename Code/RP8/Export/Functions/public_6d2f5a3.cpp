#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f5a3);
CLANG_FORWARD_PROC_SYMBOL(public_6d30bc9);

#define public_6d2f5e3 _public_6d2f5e3
#define public_6d2f5fa _public_6d2f5fa
#define public_6d2f629 _public_6d2f629
#define public_6d2f652 _public_6d2f652
#define public_6d2f656 _public_6d2f656
#define public_6d2f663 _public_6d2f663
#define public_6d2f665 _public_6d2f665
#define public_6d2f676 _public_6d2f676

PROC_DECLARE(0x6d2f5a3, internal_6d2f5a3, public_6d2f5a3);
extern "C" NAKED register_t __cdecl internal_6d2f5a3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xE8
        and dword ptr ss : [ebp-4], 0
        push ebx
        push esi
        push edi
        push 1
        call public_6d30bc9
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        pop ecx
        je public_6d2f5e3
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp-4]
        push ecx
        push esi
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp-0xE8]
        push ecx
        push esi
        call dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp-0x14]
        push ecx
        push esi
        call dword ptr ds : [eax+0x20]
        public_6d2f5e3 : nop
        mov eax, offset public_6d5eb88
        or ebx, 0xFFFFFFFF
        cmp dword ptr ds : [public_6d6c3c8], eax
        mov edi, offset public_6d5eb60
        mov esi, eax
        jbe public_6d2f665
        public_6d2f5fa : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6d2f656
        cmp dword ptr ss : [ebp+8], 0
        je public_6d2f629
        mov eax, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-0xE8]
        push dword ptr ss : [ebp-0xE4]
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        jl public_6d2f656
        public_6d2f629 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [esi]
        je public_6d2f663
        cmp dword ptr ds : [esi+0x20], 0
        je public_6d2f656
        mov edx, esi
        call public_6d2f4c0
        cmp eax, 0xFFFFFFFF
        je public_6d2f656
        cmp eax, ebx
        ja public_6d2f656
        jne public_6d2f652
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jae public_6d2f656
        public_6d2f652 : nop
        mov ebx, eax
        mov edi, esi
        public_6d2f656 : nop
        add esi, 0x24
        cmp esi, dword ptr ds : [public_6d6c3c8]
        jb public_6d2f5fa
        jmp public_6d2f665
        public_6d2f663 : nop
        mov edi, esi
        public_6d2f665 : nop
        mov eax, dword ptr ss : [ebp-4]
        test eax, eax
        je public_6d2f676
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        and dword ptr ss : [ebp-4], 0
        public_6d2f676 : nop
        push 0
        call public_6d30bc9
        mov eax, dword ptr ds : [edi]
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d2f5a3)
    }
}

#undef public_6d2f5e3
#undef public_6d2f5fa
#undef public_6d2f629
#undef public_6d2f652
#undef public_6d2f656
#undef public_6d2f663
#undef public_6d2f665
#undef public_6d2f676
