#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee430);
CLANG_FORWARD_PROC_SYMBOL(public_6eee950);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eed600 _public_6eed600
#define public_6eed613 _public_6eed613
#define public_6eed616 _public_6eed616
#define public_6eed61a _public_6eed61a
#define public_6eed679 _public_6eed679
#define public_6eed691 _public_6eed691
#define public_6eed69b _public_6eed69b
#define public_6eed69f _public_6eed69f
#define public_6eed6b0 _public_6eed6b0
#define public_6eed6eb _public_6eed6eb
#define public_6eed6fa _public_6eed6fa
#define public_6eed71b _public_6eed71b
#define public_6eed73c _public_6eed73c
#define public_6eed74a _public_6eed74a
#define public_6eed769 _public_6eed769
#define public_6eed775 _public_6eed775
#define public_6eed791 _public_6eed791
#define public_6eed7ac _public_6eed7ac
#define public_6eed7b3 _public_6eed7b3
#define public_6eed7d6 _public_6eed7d6

PROC_DECLARE(0x6eed5e0, internal_6eed5e0, public_6eed5e0);
extern "C" NAKED register_t __cdecl internal_6eed5e0()
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
        je public_6eed61a
        lea esp, ss:[esp]
        public_6eed600 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6eed613
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eed616
        public_6eed613 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eed616 : nop
        cmp ebp, edx
        jne public_6eed600
        public_6eed61a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eed791
        push 0
        push esi
        mov ecx, edi
        call public_6f6a2c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eee950
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eed679
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eed679
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6eed679
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eed69f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eed69f
        public_6eed679 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eed691
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eed69b
        public_6eed691 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eed69b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eed69b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eed69f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eed775
        lea ecx, ds:[ecx]
        public_6eed6b0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6eed775
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eed71b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6eed6eb
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eed769
        public_6eed6eb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eed6fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eed6fa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eed769
        public_6eed71b : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6eed73c
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eed769
        public_6eed73c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eed74a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eed74a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eed769 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eed6b0
        public_6eed775 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eed791 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eed7ac
        cmp esi, dword ptr ds : [ecx]
        je public_6eed7b3
        lea ecx, ss:[esp+0x10]
        call public_6f2ef20
        mov edx, dword ptr ss : [esp+0x10]
        public_6eed7ac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6eed7d6
        public_6eed7b3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eee430
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
        public_6eed7d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eed5e0)
    }
}

#undef public_6eed600
#undef public_6eed613
#undef public_6eed616
#undef public_6eed61a
#undef public_6eed679
#undef public_6eed691
#undef public_6eed69b
#undef public_6eed69f
#undef public_6eed6b0
#undef public_6eed6eb
#undef public_6eed6fa
#undef public_6eed71b
#undef public_6eed73c
#undef public_6eed74a
#undef public_6eed769
#undef public_6eed775
#undef public_6eed791
#undef public_6eed7ac
#undef public_6eed7b3
#undef public_6eed7d6
