#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5940);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6760);
CLANG_FORWARD_PROC_SYMBOL(public_6f215d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f215f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eb5960 _public_6eb5960
#define public_6eb5973 _public_6eb5973
#define public_6eb5976 _public_6eb5976
#define public_6eb597a _public_6eb597a
#define public_6eb59d9 _public_6eb59d9
#define public_6eb59f1 _public_6eb59f1
#define public_6eb59fb _public_6eb59fb
#define public_6eb59ff _public_6eb59ff
#define public_6eb5a10 _public_6eb5a10
#define public_6eb5a4b _public_6eb5a4b
#define public_6eb5a5a _public_6eb5a5a
#define public_6eb5a7b _public_6eb5a7b
#define public_6eb5a9c _public_6eb5a9c
#define public_6eb5aaa _public_6eb5aaa
#define public_6eb5ac9 _public_6eb5ac9
#define public_6eb5ad5 _public_6eb5ad5
#define public_6eb5af1 _public_6eb5af1
#define public_6eb5b0c _public_6eb5b0c
#define public_6eb5b13 _public_6eb5b13
#define public_6eb5b36 _public_6eb5b36

PROC_DECLARE(0x6eb5940, internal_6eb5940, public_6eb5940);
extern "C" NAKED register_t __cdecl internal_6eb5940()
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
        je public_6eb597a
        lea esp, ss:[esp]
        public_6eb5960 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6eb5973
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eb5976
        public_6eb5973 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eb5976 : nop
        cmp ebp, edx
        jne public_6eb5960
        public_6eb597a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eb5af1
        push 0
        push esi
        mov ecx, edi
        call public_6f215d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eb6760
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eb59d9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eb59d9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6eb59d9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eb59ff
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eb59ff
        public_6eb59d9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eb59f1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb59fb
        public_6eb59f1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eb59fb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eb59fb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eb59ff : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eb5ad5
        lea ecx, ds:[ecx]
        public_6eb5a10 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x2C]
        test cl, cl
        jne public_6eb5ad5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eb5a7b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6eb5a4b
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eb5ac9
        public_6eb5a4b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eb5a5a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eb5a5a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eb5ac9
        public_6eb5a7b : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6eb5a9c
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eb5ac9
        public_6eb5a9c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eb5aaa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eb5aaa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eb5ac9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eb5a10
        public_6eb5ad5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eb5af1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eb5b0c
        cmp esi, dword ptr ds : [ecx]
        je public_6eb5b13
        lea ecx, ss:[esp+0x10]
        call public_6f215f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6eb5b0c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eb5b36
        public_6eb5b13 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eb5ff0
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
        public_6eb5b36 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eb5940)
    }
}

#undef public_6eb5960
#undef public_6eb5973
#undef public_6eb5976
#undef public_6eb597a
#undef public_6eb59d9
#undef public_6eb59f1
#undef public_6eb59fb
#undef public_6eb59ff
#undef public_6eb5a10
#undef public_6eb5a4b
#undef public_6eb5a5a
#undef public_6eb5a7b
#undef public_6eb5a9c
#undef public_6eb5aaa
#undef public_6eb5ac9
#undef public_6eb5ad5
#undef public_6eb5af1
#undef public_6eb5b0c
#undef public_6eb5b13
#undef public_6eb5b36
