#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6f95ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96520);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d30);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d90);

#define public_6f95f10 _public_6f95f10
#define public_6f95f23 _public_6f95f23
#define public_6f95f26 _public_6f95f26
#define public_6f95f2a _public_6f95f2a
#define public_6f95f89 _public_6f95f89
#define public_6f95fa1 _public_6f95fa1
#define public_6f95fab _public_6f95fab
#define public_6f95faf _public_6f95faf
#define public_6f95fc0 _public_6f95fc0
#define public_6f95ffb _public_6f95ffb
#define public_6f9600a _public_6f9600a
#define public_6f9602b _public_6f9602b
#define public_6f9604c _public_6f9604c
#define public_6f9605a _public_6f9605a
#define public_6f96079 _public_6f96079
#define public_6f96085 _public_6f96085
#define public_6f960a1 _public_6f960a1
#define public_6f960bc _public_6f960bc
#define public_6f960c3 _public_6f960c3
#define public_6f960e6 _public_6f960e6

PROC_DECLARE(0x6f95ef0, internal_6f95ef0, public_6f95ef0);
extern "C" NAKED register_t __cdecl internal_6f95ef0()
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
        je public_6f95f2a
        lea esp, ss:[esp]
        public_6f95f10 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f95f23
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f95f26
        public_6f95f23 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f95f26 : nop
        cmp ebp, edx
        jne public_6f95f10
        public_6f95f2a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f960a1
        push 0
        push esi
        mov ecx, edi
        call public_6f96d10
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f96d90
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f95f89
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f95f89
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f95f89
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f95faf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f95faf
        public_6f95f89 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f95fa1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f95fab
        public_6f95fa1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f95fab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f95fab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f95faf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f96085
        lea ecx, ds:[ecx]
        public_6f95fc0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x50]
        test cl, cl
        jne public_6f96085
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f9602b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f95ffb
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f96079
        public_6f95ffb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f9600a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f9600a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x50], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f96079
        public_6f9602b : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f9604c
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x50], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f96079
        public_6f9604c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f9605a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f9605a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x50], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f96079 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f95fc0
        public_6f96085 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x50], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f960a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f960bc
        cmp esi, dword ptr ds : [ecx]
        je public_6f960c3
        lea ecx, ss:[esp+0x10]
        call public_6f96d30
        mov edx, dword ptr ss : [esp+0x10]
        public_6f960bc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f960e6
        public_6f960c3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f96520
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
        public_6f960e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f95ef0)
    }
}

#undef public_6f95f10
#undef public_6f95f23
#undef public_6f95f26
#undef public_6f95f2a
#undef public_6f95f89
#undef public_6f95fa1
#undef public_6f95fab
#undef public_6f95faf
#undef public_6f95fc0
#undef public_6f95ffb
#undef public_6f9600a
#undef public_6f9602b
#undef public_6f9604c
#undef public_6f9605a
#undef public_6f96079
#undef public_6f96085
#undef public_6f960a1
#undef public_6f960bc
#undef public_6f960c3
#undef public_6f960e6
