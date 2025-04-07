#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58870);
CLANG_FORWARD_PROC_SYMBOL(public_6f58b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f58d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f58890 _public_6f58890
#define public_6f588a3 _public_6f588a3
#define public_6f588a6 _public_6f588a6
#define public_6f588aa _public_6f588aa
#define public_6f58909 _public_6f58909
#define public_6f58921 _public_6f58921
#define public_6f5892b _public_6f5892b
#define public_6f5892f _public_6f5892f
#define public_6f58940 _public_6f58940
#define public_6f5897b _public_6f5897b
#define public_6f5898a _public_6f5898a
#define public_6f589ab _public_6f589ab
#define public_6f589cc _public_6f589cc
#define public_6f589da _public_6f589da
#define public_6f589f9 _public_6f589f9
#define public_6f58a05 _public_6f58a05
#define public_6f58a21 _public_6f58a21
#define public_6f58a3c _public_6f58a3c
#define public_6f58a43 _public_6f58a43
#define public_6f58a66 _public_6f58a66

PROC_DECLARE(0x6f58870, internal_6f58870, public_6f58870);
extern "C" NAKED register_t __cdecl internal_6f58870()
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
        je public_6f588aa
        lea esp, ss:[esp]
        public_6f58890 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f588a3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f588a6
        public_6f588a3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f588a6 : nop
        cmp ebp, edx
        jne public_6f58890
        public_6f588aa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f58a21
        push 0
        push esi
        mov ecx, edi
        call public_6eb3ac0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f58d70
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f58909
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f58909
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f58909
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f5892f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f5892f
        public_6f58909 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f58921
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f5892b
        public_6f58921 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f5892b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f5892b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f5892f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f58a05
        lea ecx, ds:[ecx]
        public_6f58940 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6f58a05
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f589ab
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f5897b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f589f9
        public_6f5897b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f5898a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f5898a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f589f9
        public_6f589ab : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f589cc
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f589f9
        public_6f589cc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f589da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f589da : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f589f9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f58940
        public_6f58a05 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f58a21 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f58a3c
        cmp esi, dword ptr ds : [ecx]
        je public_6f58a43
        lea ecx, ss:[esp+0x10]
        call public_6f4e3f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f58a3c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f58a66
        public_6f58a43 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f58b00
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
        public_6f58a66 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f58870)
    }
}

#undef public_6f58890
#undef public_6f588a3
#undef public_6f588a6
#undef public_6f588aa
#undef public_6f58909
#undef public_6f58921
#undef public_6f5892b
#undef public_6f5892f
#undef public_6f58940
#undef public_6f5897b
#undef public_6f5898a
#undef public_6f589ab
#undef public_6f589cc
#undef public_6f589da
#undef public_6f589f9
#undef public_6f58a05
#undef public_6f58a21
#undef public_6f58a3c
#undef public_6f58a43
#undef public_6f58a66
