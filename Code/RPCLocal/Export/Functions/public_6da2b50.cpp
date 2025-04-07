#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2060);
CLANG_FORWARD_PROC_SYMBOL(public_6da2b50);
CLANG_FORWARD_PROC_SYMBOL(public_6da3210);
CLANG_FORWARD_PROC_SYMBOL(public_6da3470);
CLANG_FORWARD_PROC_SYMBOL(public_6da34c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da3590);

#define public_6da2b68 _public_6da2b68
#define public_6da2b81 _public_6da2b81
#define public_6da2b84 _public_6da2b84
#define public_6da2b8d _public_6da2b8d
#define public_6da2bf7 _public_6da2bf7
#define public_6da2c0f _public_6da2c0f
#define public_6da2c19 _public_6da2c19
#define public_6da2c1d _public_6da2c1d
#define public_6da2c30 _public_6da2c30
#define public_6da2c6b _public_6da2c6b
#define public_6da2c7a _public_6da2c7a
#define public_6da2c9b _public_6da2c9b
#define public_6da2cbc _public_6da2cbc
#define public_6da2cca _public_6da2cca
#define public_6da2ce9 _public_6da2ce9
#define public_6da2cf5 _public_6da2cf5
#define public_6da2d11 _public_6da2d11
#define public_6da2d43 _public_6da2d43
#define public_6da2d4c _public_6da2d4c
#define public_6da2d89 _public_6da2d89

PROC_DECLARE(0x6da2b50, internal_6da2b50, public_6da2b50);
extern "C" NAKED register_t __cdecl internal_6da2b50()
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
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_6da2b8d
        public_6da2b68 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        mov esi, ebp
        call dword ptr ds : [public_6db3174]
        add esp, 8
        test al, al
        je public_6da2b81
        mov ebp, dword ptr ss : [ebp]
        jmp public_6da2b84
        public_6da2b81 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6da2b84 : nop
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_6da2b68
        public_6da2b8d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6da2d11
        push 0
        push esi
        mov ecx, edi
        call public_6da34c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6da3590
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6da2bf7
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6da2bf7
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [public_6db3174]
        add esp, 8
        test al, al
        jne public_6da2bf7
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6da2c1d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6da2c1d
        public_6da2bf7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6da2c0f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da2c19
        public_6da2c0f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6da2c19
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6da2c19 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6da2c1d : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6da2cf5
        nop 
        lea esp, ss:[esp]
        public_6da2c30 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6da2cf5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6da2c9b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6da2c6b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6da2ce9
        public_6da2c6b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6da2c7a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6da3470
        public_6da2c7a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6da2060
        jmp public_6da2ce9
        public_6da2c9b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6da2cbc
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6da2ce9
        public_6da2cbc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6da2cca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6da2060
        public_6da2cca : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6da3470
        public_6da2ce9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6da2c30
        public_6da2cf5 : nop
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
        public_6da2d11 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6da2d4c
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_6da2d43
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_6da3210
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6da2d43 : nop
        lea ecx, ss:[esp+0x10]
        call public_6da34e0
        public_6da2d4c : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_6db3174]
        add esp, 8
        test al, al
        je public_6da2d89
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6da3210
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6da2d89 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6da2b50)
    }
}

#undef public_6da2b68
#undef public_6da2b81
#undef public_6da2b84
#undef public_6da2b8d
#undef public_6da2bf7
#undef public_6da2c0f
#undef public_6da2c19
#undef public_6da2c1d
#undef public_6da2c30
#undef public_6da2c6b
#undef public_6da2c7a
#undef public_6da2c9b
#undef public_6da2cbc
#undef public_6da2cca
#undef public_6da2ce9
#undef public_6da2cf5
#undef public_6da2d11
#undef public_6da2d43
#undef public_6da2d4c
#undef public_6da2d89
