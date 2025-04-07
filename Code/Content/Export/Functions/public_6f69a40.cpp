#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f69a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a070);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a760);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f69a60 _public_6f69a60
#define public_6f69a73 _public_6f69a73
#define public_6f69a76 _public_6f69a76
#define public_6f69a7a _public_6f69a7a
#define public_6f69ad9 _public_6f69ad9
#define public_6f69af1 _public_6f69af1
#define public_6f69afb _public_6f69afb
#define public_6f69aff _public_6f69aff
#define public_6f69b10 _public_6f69b10
#define public_6f69b4b _public_6f69b4b
#define public_6f69b5a _public_6f69b5a
#define public_6f69b7b _public_6f69b7b
#define public_6f69b9c _public_6f69b9c
#define public_6f69baa _public_6f69baa
#define public_6f69bc9 _public_6f69bc9
#define public_6f69bd5 _public_6f69bd5
#define public_6f69bf1 _public_6f69bf1
#define public_6f69c0c _public_6f69c0c
#define public_6f69c13 _public_6f69c13
#define public_6f69c36 _public_6f69c36

PROC_DECLARE(0x6f69a40, internal_6f69a40, public_6f69a40);
extern "C" NAKED register_t __cdecl internal_6f69a40()
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
        je public_6f69a7a
        lea esp, ss:[esp]
        public_6f69a60 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f69a73
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f69a76
        public_6f69a73 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f69a76 : nop
        cmp ebp, edx
        jne public_6f69a60
        public_6f69a7a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f69bf1
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
        call public_6f6a760
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f69ad9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f69ad9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f69ad9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f69aff
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f69aff
        public_6f69ad9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f69af1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f69afb
        public_6f69af1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f69afb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f69afb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f69aff : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f69bd5
        lea ecx, ds:[ecx]
        public_6f69b10 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6f69bd5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f69b7b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f69b4b
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f69bc9
        public_6f69b4b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f69b5a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f69b5a : nop
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
        jmp public_6f69bc9
        public_6f69b7b : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f69b9c
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f69bc9
        public_6f69b9c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f69baa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f69baa : nop
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
        public_6f69bc9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f69b10
        public_6f69bd5 : nop
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
        public_6f69bf1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f69c0c
        cmp esi, dword ptr ds : [ecx]
        je public_6f69c13
        lea ecx, ss:[esp+0x10]
        call public_6f2ef20
        mov edx, dword ptr ss : [esp+0x10]
        public_6f69c0c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f69c36
        public_6f69c13 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f6a070
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
        public_6f69c36 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f69a40)
    }
}

#undef public_6f69a60
#undef public_6f69a73
#undef public_6f69a76
#undef public_6f69a7a
#undef public_6f69ad9
#undef public_6f69af1
#undef public_6f69afb
#undef public_6f69aff
#undef public_6f69b10
#undef public_6f69b4b
#undef public_6f69b5a
#undef public_6f69b7b
#undef public_6f69b9c
#undef public_6f69baa
#undef public_6f69bc9
#undef public_6f69bd5
#undef public_6f69bf1
#undef public_6f69c0c
#undef public_6f69c13
#undef public_6f69c36
