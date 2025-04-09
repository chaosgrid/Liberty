#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9300);
CLANG_FORWARD_PROC_SYMBOL(public_5a9ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad910);
CLANG_FORWARD_PROC_SYMBOL(public_5adfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7398);

#define public_5a9330 _public_5a9330
#define public_5a934c _public_5a934c
#define public_5a9370 _public_5a9370
#define public_5a938c _public_5a938c
#define public_5a93b0 _public_5a93b0
#define public_5a93cc _public_5a93cc
#define public_5a9400 _public_5a9400
#define public_5a941c _public_5a941c

PROC_DECLARE(0x5a9300, internal_5a9300, public_5a9300);
extern "C" NAKED register_t __cdecl internal_5a9300()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[ebp+4]
        call public_5b7398
        mov edi, dword ptr ss : [ebp+0x148]
        cmp edi, edi
        mov esi, dword ptr ss : [ebp+0x144]
        lea ebx, ss:[ebp+0x140]
        mov dword ptr ss : [esp+0x10], edi
        je public_5a934c
        lea esp, ss:[esp]
        public_5a9330 : nop
        push edi
        mov ecx, esi
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 0x9C
        add esi, 0x9C
        cmp edi, eax
        jne public_5a9330
        public_5a934c : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push esi
        mov ecx, ebx
        call public_5ad910
        lea edi, ss:[ebp+0x160]
        mov dword ptr ds : [ebx+8], esi
        mov esi, dword ptr ds : [edi+8]
        cmp esi, esi
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], esi
        je public_5a938c
        nop 
        public_5a9370 : nop
        push esi
        mov ecx, ebx
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x9C
        add ebx, 0x9C
        cmp esi, eax
        jne public_5a9370
        public_5a938c : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        push ebx
        mov ecx, edi
        call public_5ad910
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ss : [ebp+0x178]
        cmp esi, esi
        mov ebx, dword ptr ss : [ebp+0x174]
        mov dword ptr ss : [esp+0x10], esi
        je public_5a93cc
        nop 
        public_5a93b0 : nop
        push esi
        mov ecx, ebx
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x9C
        add ebx, 0x9C
        cmp esi, eax
        jne public_5a93b0
        public_5a93cc : nop
        mov edx, dword ptr ss : [ebp+0x178]
        lea ecx, ss:[ebp+0x170]
        push edx
        push ebx
        call public_5ad910
        mov dword ptr ss : [ebp+0x178], ebx
        mov ebx, dword ptr ss : [ebp+0x158]
        mov esi, dword ptr ss : [ebp+0x154]
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x25C], 0
        je public_5a941c
        nop 
        public_5a9400 : nop
        push esi
        mov byte ptr ds : [esi+0x3D], 0
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        mov ecx, edi
        call public_5adfc0
        add esi, 0x9C
        cmp esi, ebx
        jne public_5a9400
        public_5a941c : nop
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1B0], 0
        mov byte ptr ss : [ebp+0x1D4], 0
        mov byte ptr ss : [ebp+0x21C], 0
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5a9300)
    }
}

#undef public_5a9330
#undef public_5a934c
#undef public_5a9370
#undef public_5a938c
#undef public_5a93b0
#undef public_5a93cc
#undef public_5a9400
#undef public_5a941c
