#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5abc80);
CLANG_FORWARD_PROC_SYMBOL(public_5ad910);
CLANG_FORWARD_PROC_SYMBOL(public_5adfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7398);

#define public_5abcb0 _public_5abcb0
#define public_5abccc _public_5abccc
#define public_5abcf0 _public_5abcf0
#define public_5abd0c _public_5abd0c
#define public_5abd30 _public_5abd30
#define public_5abd4c _public_5abd4c
#define public_5abd80 _public_5abd80
#define public_5abd9c _public_5abd9c

PROC_DECLARE(0x5abc80, internal_5abc80, public_5abc80);
extern "C" NAKED register_t __cdecl internal_5abc80()
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
        je public_5abccc
        lea esp, ss:[esp]
        public_5abcb0 : nop
        push edi
        mov ecx, esi
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 0x9C
        add esi, 0x9C
        cmp edi, eax
        jne public_5abcb0
        public_5abccc : nop
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
        je public_5abd0c
        nop 
        public_5abcf0 : nop
        push esi
        mov ecx, ebx
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x9C
        add ebx, 0x9C
        cmp esi, eax
        jne public_5abcf0
        public_5abd0c : nop
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
        je public_5abd4c
        nop 
        public_5abd30 : nop
        push esi
        mov ecx, ebx
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x9C
        add ebx, 0x9C
        cmp esi, eax
        jne public_5abd30
        public_5abd4c : nop
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
        je public_5abd9c
        nop 
        public_5abd80 : nop
        push esi
        mov byte ptr ds : [esi+0x3D], 0
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        mov ecx, edi
        call public_5adfc0
        add esi, 0x9C
        cmp esi, ebx
        jne public_5abd80
        public_5abd9c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5abc80)
    }
}

#undef public_5abcb0
#undef public_5abccc
#undef public_5abcf0
#undef public_5abd0c
#undef public_5abd30
#undef public_5abd4c
#undef public_5abd80
#undef public_5abd9c
