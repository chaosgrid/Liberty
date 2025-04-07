#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cf50);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ef80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f2cf70 _public_6f2cf70
#define public_6f2cf83 _public_6f2cf83
#define public_6f2cf86 _public_6f2cf86
#define public_6f2cf8a _public_6f2cf8a
#define public_6f2cfe9 _public_6f2cfe9
#define public_6f2d001 _public_6f2d001
#define public_6f2d00b _public_6f2d00b
#define public_6f2d00f _public_6f2d00f
#define public_6f2d020 _public_6f2d020
#define public_6f2d05b _public_6f2d05b
#define public_6f2d06a _public_6f2d06a
#define public_6f2d08b _public_6f2d08b
#define public_6f2d0ac _public_6f2d0ac
#define public_6f2d0ba _public_6f2d0ba
#define public_6f2d0d9 _public_6f2d0d9
#define public_6f2d0e5 _public_6f2d0e5
#define public_6f2d101 _public_6f2d101
#define public_6f2d11c _public_6f2d11c
#define public_6f2d123 _public_6f2d123
#define public_6f2d146 _public_6f2d146

PROC_DECLARE(0x6f2cf50, internal_6f2cf50, public_6f2cf50);
extern "C" NAKED register_t __cdecl internal_6f2cf50()
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
        je public_6f2cf8a
        lea esp, ss:[esp]
        public_6f2cf70 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f2cf83
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f2cf86
        public_6f2cf83 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f2cf86 : nop
        cmp ebp, edx
        jne public_6f2cf70
        public_6f2cf8a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f2d101
        push 0
        push esi
        mov ecx, edi
        call public_6eee2d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f2f0e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f2cfe9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f2cfe9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f2cfe9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2d00f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f2d00f
        public_6f2cfe9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f2d001
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2d00b
        public_6f2d001 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2d00b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f2d00b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f2d00f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f2d0e5
        lea ecx, ds:[ecx]
        public_6f2d020 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6f2d0e5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2d08b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2d05b
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f2d0d9
        public_6f2d05b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2d06a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f2d06a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f2d0d9
        public_6f2d08b : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2d0ac
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f2d0d9
        public_6f2d0ac : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2d0ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f2d0ba : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f2d0d9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f2d020
        public_6f2d0e5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f2d101 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f2d11c
        cmp esi, dword ptr ds : [ecx]
        je public_6f2d123
        lea ecx, ss:[esp+0x10]
        call public_6f2ef80
        mov edx, dword ptr ss : [esp+0x10]
        public_6f2d11c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f2d146
        public_6f2d123 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f2dfd0
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
        public_6f2d146 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2cf50)
    }
}

#undef public_6f2cf70
#undef public_6f2cf83
#undef public_6f2cf86
#undef public_6f2cf8a
#undef public_6f2cfe9
#undef public_6f2d001
#undef public_6f2d00b
#undef public_6f2d00f
#undef public_6f2d020
#undef public_6f2d05b
#undef public_6f2d06a
#undef public_6f2d08b
#undef public_6f2d0ac
#undef public_6f2d0ba
#undef public_6f2d0d9
#undef public_6f2d0e5
#undef public_6f2d101
#undef public_6f2d11c
#undef public_6f2d123
#undef public_6f2d146
