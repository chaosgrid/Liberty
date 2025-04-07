#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad990);
CLANG_FORWARD_PROC_SYMBOL(public_5ae340);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);
CLANG_FORWARD_PROC_SYMBOL(public_5ae5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae680);
CLANG_FORWARD_PROC_SYMBOL(public_5af250);

#define public_5ad9b0 _public_5ad9b0
#define public_5ad9c3 _public_5ad9c3
#define public_5ad9c6 _public_5ad9c6
#define public_5ad9ca _public_5ad9ca
#define public_5ada29 _public_5ada29
#define public_5ada41 _public_5ada41
#define public_5ada4b _public_5ada4b
#define public_5ada4f _public_5ada4f
#define public_5ada60 _public_5ada60
#define public_5ada9b _public_5ada9b
#define public_5adaaa _public_5adaaa
#define public_5adacb _public_5adacb
#define public_5adaec _public_5adaec
#define public_5adafa _public_5adafa
#define public_5adb19 _public_5adb19
#define public_5adb25 _public_5adb25
#define public_5adb41 _public_5adb41
#define public_5adb5c _public_5adb5c
#define public_5adb63 _public_5adb63
#define public_5adb86 _public_5adb86

PROC_DECLARE(0x5ad990, internal_5ad990, public_5ad990);
extern "C" NAKED register_t __cdecl internal_5ad990()
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
        je public_5ad9ca
        lea esp, ss:[esp]
        public_5ad9b0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_5ad9c3
        mov ebp, dword ptr ss : [ebp]
        jmp public_5ad9c6
        public_5ad9c3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_5ad9c6 : nop
        cmp ebp, edx
        jne public_5ad9b0
        public_5ad9ca : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_5adb41
        push 0
        push esi
        mov ecx, edi
        call public_5ae5f0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_5af250
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_5ada29
        cmp ebp, dword ptr ds : [edi+8]
        jne public_5ada29
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_5ada29
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_5ada4f
        mov dword ptr ds : [eax+8], ebx
        jmp public_5ada4f
        public_5ada29 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_5ada41
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_5ada4b
        public_5ada41 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_5ada4b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_5ada4b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_5ada4f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_5adb25
        lea ecx, ds:[ecx]
        public_5ada60 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x34]
        test cl, cl
        jne public_5adb25
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_5adacb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_5ada9b
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_5adb19
        public_5ada9b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_5adaaa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_5adaaa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_5adb19
        public_5adacb : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_5adaec
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_5adb19
        public_5adaec : nop
        cmp esi, dword ptr ds : [eax]
        jne public_5adafa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_5adafa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_5adb19 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_5ada60
        public_5adb25 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_5adb41 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_5adb5c
        cmp esi, dword ptr ds : [ecx]
        je public_5adb63
        lea ecx, ss:[esp+0x10]
        call public_5ae680
        mov edx, dword ptr ss : [esp+0x10]
        public_5adb5c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_5adb86
        public_5adb63 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_5ae340
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
        public_5adb86 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5ad990)
    }
}

#undef public_5ad9b0
#undef public_5ad9c3
#undef public_5ad9c6
#undef public_5ad9ca
#undef public_5ada29
#undef public_5ada41
#undef public_5ada4b
#undef public_5ada4f
#undef public_5ada60
#undef public_5ada9b
#undef public_5adaaa
#undef public_5adacb
#undef public_5adaec
#undef public_5adafa
#undef public_5adb19
#undef public_5adb25
#undef public_5adb41
#undef public_5adb5c
#undef public_5adb63
#undef public_5adb86
