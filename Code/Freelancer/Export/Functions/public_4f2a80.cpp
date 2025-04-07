#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4057a0);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4f2a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f3520);
CLANG_FORWARD_PROC_SYMBOL(public_4f3800);
CLANG_FORWARD_PROC_SYMBOL(public_4f38c0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_4f2aa0 _public_4f2aa0
#define public_4f2ab3 _public_4f2ab3
#define public_4f2ab6 _public_4f2ab6
#define public_4f2aba _public_4f2aba
#define public_4f2b19 _public_4f2b19
#define public_4f2b31 _public_4f2b31
#define public_4f2b3b _public_4f2b3b
#define public_4f2b3f _public_4f2b3f
#define public_4f2b50 _public_4f2b50
#define public_4f2b8b _public_4f2b8b
#define public_4f2b9a _public_4f2b9a
#define public_4f2bbb _public_4f2bbb
#define public_4f2bdc _public_4f2bdc
#define public_4f2bea _public_4f2bea
#define public_4f2c09 _public_4f2c09
#define public_4f2c15 _public_4f2c15
#define public_4f2c31 _public_4f2c31
#define public_4f2c4c _public_4f2c4c
#define public_4f2c53 _public_4f2c53
#define public_4f2c76 _public_4f2c76

PROC_DECLARE(0x4f2a80, internal_4f2a80, public_4f2a80);
extern "C" NAKED register_t __cdecl internal_4f2a80()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_4f2aba
        lea esp, ss:[esp]
        public_4f2aa0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_4f2ab3
        mov ebp, dword ptr ss : [ebp]
        jmp public_4f2ab6
        public_4f2ab3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_4f2ab6 : nop
        cmp ebp, edx
        jne public_4f2aa0
        public_4f2aba : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_4f2c31
        push 0
        push esi
        mov ecx, edi
        call public_4f3800
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4f38c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_4f2b19
        cmp ebp, dword ptr ds : [edi+8]
        jne public_4f2b19
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_4f2b19
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_4f2b3f
        mov dword ptr ds : [eax+8], ebx
        jmp public_4f2b3f
        public_4f2b19 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_4f2b31
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_4f2b3b
        public_4f2b31 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4f2b3b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_4f2b3b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_4f2b3f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_4f2c15
        lea ecx, ds:[ecx]
        public_4f2b50 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x44]
        test cl, cl
        jne public_4f2c15
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4f2bbb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_4f2b8b
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_4f2c09
        public_4f2b8b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_4f2b9a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_4f2b9a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x44], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_4f2c09
        public_4f2bbb : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_4f2bdc
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x44], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_4f2c09
        public_4f2bdc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4f2bea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_4f2bea : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_4f2c09 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_4f2b50
        public_4f2c15 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_4f2c31 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_4f2c4c
        cmp esi, dword ptr ds : [ecx]
        je public_4f2c53
        lea ecx, ss:[esp+0x10]
        call public_4057a0
        mov edx, dword ptr ss : [esp+0x10]
        public_4f2c4c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_4f2c76
        public_4f2c53 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4f3520
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
        public_4f2c76 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4f2a80)
    }
}

#undef public_4f2aa0
#undef public_4f2ab3
#undef public_4f2ab6
#undef public_4f2aba
#undef public_4f2b19
#undef public_4f2b31
#undef public_4f2b3b
#undef public_4f2b3f
#undef public_4f2b50
#undef public_4f2b8b
#undef public_4f2b9a
#undef public_4f2bbb
#undef public_4f2bdc
#undef public_4f2bea
#undef public_4f2c09
#undef public_4f2c15
#undef public_4f2c31
#undef public_4f2c4c
#undef public_4f2c53
#undef public_4f2c76
