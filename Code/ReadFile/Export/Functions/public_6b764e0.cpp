#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b764e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76f00);
CLANG_FORWARD_PROC_SYMBOL(public_6b76f70);
CLANG_FORWARD_PROC_SYMBOL(public_6b77020);
CLANG_FORWARD_PROC_SYMBOL(public_6b77040);
CLANG_FORWARD_PROC_SYMBOL(public_6b771e0);

#define public_6b764fc _public_6b764fc
#define public_6b7650f _public_6b7650f
#define public_6b76512 _public_6b76512
#define public_6b76516 _public_6b76516
#define public_6b76577 _public_6b76577
#define public_6b7658f _public_6b7658f
#define public_6b76599 _public_6b76599
#define public_6b7659d _public_6b7659d
#define public_6b765ab _public_6b765ab
#define public_6b765e6 _public_6b765e6
#define public_6b765f5 _public_6b765f5
#define public_6b76616 _public_6b76616
#define public_6b76637 _public_6b76637
#define public_6b76645 _public_6b76645
#define public_6b76664 _public_6b76664
#define public_6b76670 _public_6b76670
#define public_6b7668c _public_6b7668c
#define public_6b766a7 _public_6b766a7
#define public_6b766b0 _public_6b766b0
#define public_6b766d3 _public_6b766d3

PROC_DECLARE(0x6b764e0, internal_6b764e0, public_6b764e0);
extern "C" NAKED register_t __cdecl internal_6b764e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6b76516
        public_6b764fc : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setb al
        test al, al
        je public_6b7650f
        mov ebp, dword ptr ss : [ebp]
        jmp public_6b76512
        public_6b7650f : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6b76512 : nop
        cmp ebp, edx
        jne public_6b764fc
        public_6b76516 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6b7668c
        push 0
        push esi
        mov ecx, edi
        call public_6b77020
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6b771e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6b76577
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6b76577
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_6b76577
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b7659d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b7659d
        public_6b76577 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6b7658f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b76599
        public_6b7658f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b76599
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6b76599 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6b7659d : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_6b76670
        public_6b765ab : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6b76670
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b76616
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6b765e6
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6b76664
        public_6b765e6 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b765f5
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6b76f00
        public_6b765f5 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6b76f70
        jmp public_6b76664
        public_6b76616 : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6b76637
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6b76664
        public_6b76637 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b76645
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6b76f70
        public_6b76645 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6b76f00
        public_6b76664 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6b765ab
        public_6b76670 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6b7668c : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_6b766a7
        cmp esi, dword ptr ds : [ecx]
        je public_6b766b0
        lea ecx, ss:[esp+0x10]
        call public_6b77040
        mov edx, dword ptr ss : [esp+0x10]
        public_6b766a7 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jae public_6b766d3
        public_6b766b0 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_6b76cb0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6b766d3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b764e0)
    }
}

#undef public_6b764fc
#undef public_6b7650f
#undef public_6b76512
#undef public_6b76516
#undef public_6b76577
#undef public_6b7658f
#undef public_6b76599
#undef public_6b7659d
#undef public_6b765ab
#undef public_6b765e6
#undef public_6b765f5
#undef public_6b76616
#undef public_6b76637
#undef public_6b76645
#undef public_6b76664
#undef public_6b76670
#undef public_6b7668c
#undef public_6b766a7
#undef public_6b766b0
#undef public_6b766d3
