#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630c1f0);
CLANG_FORWARD_PROC_SYMBOL(public_630c820);
CLANG_FORWARD_PROC_SYMBOL(public_630ca70);
CLANG_FORWARD_PROC_SYMBOL(public_630ca90);
CLANG_FORWARD_PROC_SYMBOL(public_630cb70);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_630c210 _public_630c210
#define public_630c223 _public_630c223
#define public_630c226 _public_630c226
#define public_630c22a _public_630c22a
#define public_630c289 _public_630c289
#define public_630c2a1 _public_630c2a1
#define public_630c2ab _public_630c2ab
#define public_630c2af _public_630c2af
#define public_630c2c0 _public_630c2c0
#define public_630c2fb _public_630c2fb
#define public_630c30a _public_630c30a
#define public_630c32b _public_630c32b
#define public_630c34c _public_630c34c
#define public_630c35a _public_630c35a
#define public_630c379 _public_630c379
#define public_630c385 _public_630c385
#define public_630c3a1 _public_630c3a1
#define public_630c3bc _public_630c3bc
#define public_630c3c3 _public_630c3c3
#define public_630c3e6 _public_630c3e6

PROC_DECLARE(0x630c1f0, internal_630c1f0, public_630c1f0);
extern "C" NAKED register_t __cdecl internal_630c1f0()
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
        je public_630c22a
        lea esp, ss:[esp]
        public_630c210 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_630c223
        mov ebp, dword ptr ss : [ebp]
        jmp public_630c226
        public_630c223 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_630c226 : nop
        cmp ebp, edx
        jne public_630c210
        public_630c22a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_630c3a1
        push 0
        push esi
        mov ecx, edi
        call public_630ca70
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_630cb70
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_630c289
        cmp ebp, dword ptr ds : [edi+8]
        jne public_630c289
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_630c289
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_630c2af
        mov dword ptr ds : [eax+8], ebx
        jmp public_630c2af
        public_630c289 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_630c2a1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_630c2ab
        public_630c2a1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_630c2ab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_630c2ab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_630c2af : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_630c385
        lea ecx, ds:[ecx]
        public_630c2c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x70]
        test cl, cl
        jne public_630c385
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_630c32b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_630c2fb
        mov byte ptr ds : [eax+0x70], 1
        mov byte ptr ds : [ecx+0x70], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_630c379
        public_630c2fb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_630c30a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_630c30a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x70], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x70], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_630c379
        public_630c32b : nop
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_630c34c
        mov byte ptr ds : [eax+0x70], 1
        mov byte ptr ds : [ecx+0x70], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x70], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_630c379
        public_630c34c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_630c35a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_630c35a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x70], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_630c379 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_630c2c0
        public_630c385 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x70], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_630c3a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_630c3bc
        cmp esi, dword ptr ds : [ecx]
        je public_630c3c3
        lea ecx, ss:[esp+0x10]
        call public_630ca90
        mov edx, dword ptr ss : [esp+0x10]
        public_630c3bc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_630c3e6
        public_630c3c3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_630c820
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
        public_630c3e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x630c1f0)
    }
}

#undef public_630c210
#undef public_630c223
#undef public_630c226
#undef public_630c22a
#undef public_630c289
#undef public_630c2a1
#undef public_630c2ab
#undef public_630c2af
#undef public_630c2c0
#undef public_630c2fb
#undef public_630c30a
#undef public_630c32b
#undef public_630c34c
#undef public_630c35a
#undef public_630c379
#undef public_630c385
#undef public_630c3a1
#undef public_630c3bc
#undef public_630c3c3
#undef public_630c3e6
