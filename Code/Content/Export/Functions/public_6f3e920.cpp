#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3e920);
CLANG_FORWARD_PROC_SYMBOL(public_6f45810);
CLANG_FORWARD_PROC_SYMBOL(public_6f46190);
CLANG_FORWARD_PROC_SYMBOL(public_6f461b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f46880);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f3e940 _public_6f3e940
#define public_6f3e953 _public_6f3e953
#define public_6f3e956 _public_6f3e956
#define public_6f3e95a _public_6f3e95a
#define public_6f3e9b9 _public_6f3e9b9
#define public_6f3e9d1 _public_6f3e9d1
#define public_6f3e9db _public_6f3e9db
#define public_6f3e9df _public_6f3e9df
#define public_6f3e9f0 _public_6f3e9f0
#define public_6f3ea2b _public_6f3ea2b
#define public_6f3ea3a _public_6f3ea3a
#define public_6f3ea5b _public_6f3ea5b
#define public_6f3ea7c _public_6f3ea7c
#define public_6f3ea8a _public_6f3ea8a
#define public_6f3eaa9 _public_6f3eaa9
#define public_6f3eab5 _public_6f3eab5
#define public_6f3ead1 _public_6f3ead1
#define public_6f3eaec _public_6f3eaec
#define public_6f3eaf3 _public_6f3eaf3
#define public_6f3eb16 _public_6f3eb16

PROC_DECLARE(0x6f3e920, internal_6f3e920, public_6f3e920);
extern "C" NAKED register_t __cdecl internal_6f3e920()
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
        je public_6f3e95a
        lea esp, ss:[esp]
        public_6f3e940 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3e953
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3e956
        public_6f3e953 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3e956 : nop
        cmp ebp, edx
        jne public_6f3e940
        public_6f3e95a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3ead1
        push 0
        push esi
        mov ecx, edi
        call public_6f46190
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f46880
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3e9b9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3e9b9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3e9b9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3e9df
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3e9df
        public_6f3e9b9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3e9d1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3e9db
        public_6f3e9d1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3e9db
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3e9db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3e9df : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3eab5
        lea ecx, ds:[ecx]
        public_6f3e9f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x68]
        test cl, cl
        jne public_6f3eab5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3ea5b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_6f3ea2b
        mov byte ptr ds : [eax+0x68], 1
        mov byte ptr ds : [ecx+0x68], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3eaa9
        public_6f3ea2b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3ea3a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3ea3a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x68], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x68], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3eaa9
        public_6f3ea5b : nop
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_6f3ea7c
        mov byte ptr ds : [eax+0x68], 1
        mov byte ptr ds : [ecx+0x68], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x68], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3eaa9
        public_6f3ea7c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3ea8a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3ea8a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x68], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3eaa9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3e9f0
        public_6f3eab5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x68], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3ead1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3eaec
        cmp esi, dword ptr ds : [ecx]
        je public_6f3eaf3
        lea ecx, ss:[esp+0x10]
        call public_6f461b0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3eaec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3eb16
        public_6f3eaf3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f45810
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
        public_6f3eb16 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3e920)
    }
}

#undef public_6f3e940
#undef public_6f3e953
#undef public_6f3e956
#undef public_6f3e95a
#undef public_6f3e9b9
#undef public_6f3e9d1
#undef public_6f3e9db
#undef public_6f3e9df
#undef public_6f3e9f0
#undef public_6f3ea2b
#undef public_6f3ea3a
#undef public_6f3ea5b
#undef public_6f3ea7c
#undef public_6f3ea8a
#undef public_6f3eaa9
#undef public_6f3eab5
#undef public_6f3ead1
#undef public_6f3eaec
#undef public_6f3eaf3
#undef public_6f3eb16
