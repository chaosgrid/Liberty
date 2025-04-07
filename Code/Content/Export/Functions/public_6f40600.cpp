#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40600);
CLANG_FORWARD_PROC_SYMBOL(public_6f44b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6fa70);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f40620 _public_6f40620
#define public_6f40633 _public_6f40633
#define public_6f40636 _public_6f40636
#define public_6f4063a _public_6f4063a
#define public_6f40699 _public_6f40699
#define public_6f406b1 _public_6f406b1
#define public_6f406bb _public_6f406bb
#define public_6f406bf _public_6f406bf
#define public_6f406d0 _public_6f406d0
#define public_6f4070b _public_6f4070b
#define public_6f4071a _public_6f4071a
#define public_6f4073b _public_6f4073b
#define public_6f4075c _public_6f4075c
#define public_6f4076a _public_6f4076a
#define public_6f40789 _public_6f40789
#define public_6f40795 _public_6f40795
#define public_6f407b1 _public_6f407b1
#define public_6f407cc _public_6f407cc
#define public_6f407d3 _public_6f407d3
#define public_6f407f6 _public_6f407f6

PROC_DECLARE(0x6f40600, internal_6f40600, public_6f40600);
extern "C" NAKED register_t __cdecl internal_6f40600()
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
        je public_6f4063a
        lea esp, ss:[esp]
        public_6f40620 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f40633
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f40636
        public_6f40633 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f40636 : nop
        cmp ebp, edx
        jne public_6f40620
        public_6f4063a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f407b1
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
        call public_6f6fa70
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f40699
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f40699
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f40699
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f406bf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f406bf
        public_6f40699 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f406b1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f406bb
        public_6f406b1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f406bb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f406bb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f406bf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f40795
        lea ecx, ds:[ecx]
        public_6f406d0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6f40795
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4073b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f4070b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f40789
        public_6f4070b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4071a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f4071a : nop
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
        jmp public_6f40789
        public_6f4073b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f4075c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f40789
        public_6f4075c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f4076a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f4076a : nop
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
        public_6f40789 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f406d0
        public_6f40795 : nop
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
        public_6f407b1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f407cc
        cmp esi, dword ptr ds : [ecx]
        je public_6f407d3
        lea ecx, ss:[esp+0x10]
        call public_6f4e3f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f407cc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f407f6
        public_6f407d3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f44b50
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
        public_6f407f6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f40600)
    }
}

#undef public_6f40620
#undef public_6f40633
#undef public_6f40636
#undef public_6f4063a
#undef public_6f40699
#undef public_6f406b1
#undef public_6f406bb
#undef public_6f406bf
#undef public_6f406d0
#undef public_6f4070b
#undef public_6f4071a
#undef public_6f4073b
#undef public_6f4075c
#undef public_6f4076a
#undef public_6f40789
#undef public_6f40795
#undef public_6f407b1
#undef public_6f407cc
#undef public_6f407d3
#undef public_6f407f6
