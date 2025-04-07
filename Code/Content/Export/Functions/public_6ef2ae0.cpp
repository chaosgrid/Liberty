#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2f00);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3480);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d30);

#define public_6ef2af6 _public_6ef2af6
#define public_6ef2b02 _public_6ef2b02
#define public_6ef2b22 _public_6ef2b22
#define public_6ef2b26 _public_6ef2b26
#define public_6ef2b2b _public_6ef2b2b
#define public_6ef2b39 _public_6ef2b39
#define public_6ef2b3c _public_6ef2b3c
#define public_6ef2b41 _public_6ef2b41
#define public_6ef2b95 _public_6ef2b95
#define public_6ef2bb5 _public_6ef2bb5
#define public_6ef2bb9 _public_6ef2bb9
#define public_6ef2bbe _public_6ef2bbe
#define public_6ef2bda _public_6ef2bda
#define public_6ef2bee _public_6ef2bee
#define public_6ef2bf4 _public_6ef2bf4
#define public_6ef2c04 _public_6ef2c04
#define public_6ef2c42 _public_6ef2c42
#define public_6ef2c51 _public_6ef2c51
#define public_6ef2c72 _public_6ef2c72
#define public_6ef2c93 _public_6ef2c93
#define public_6ef2ca1 _public_6ef2ca1
#define public_6ef2cc0 _public_6ef2cc0
#define public_6ef2ccc _public_6ef2ccc
#define public_6ef2cea _public_6ef2cea
#define public_6ef2d22 _public_6ef2d22
#define public_6ef2d2b _public_6ef2d2b
#define public_6ef2d40 _public_6ef2d40
#define public_6ef2d60 _public_6ef2d60
#define public_6ef2d64 _public_6ef2d64
#define public_6ef2d69 _public_6ef2d69
#define public_6ef2d96 _public_6ef2d96

PROC_DECLARE(0x6ef2ae0, internal_6ef2ae0, public_6ef2ae0);
extern "C" NAKED register_t __cdecl internal_6ef2ae0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_6ef2b41
        public_6ef2af6 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, ebp
        lea esi, ss:[ebp+0x10]
        add eax, 4
        public_6ef2b02 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ef2b26
        test cl, cl
        je public_6ef2b22
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ef2b26
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef2b02
        public_6ef2b22 : nop
        xor eax, eax
        jmp public_6ef2b2b
        public_6ef2b26 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef2b2b : nop
        test eax, eax
        setl al
        test al, al
        je public_6ef2b39
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ef2b3c
        public_6ef2b39 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ef2b3c : nop
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ef2af6
        public_6ef2b41 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6ef2cea
        push 0
        push ebx
        mov ecx, edi
        call public_6f96d10
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, eax
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+8]
        push edx
        lea eax, ds:[esi+0xC]
        push eax
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi+8], ecx
        call public_6ef3480
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp ebx, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ef2bda
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ef2bda
        mov ecx, dword ptr ss : [esp+0x20]
        lea esi, ds:[ebx+0x10]
        lea eax, ds:[ecx+4]
        public_6ef2b95 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ef2bb9
        test cl, cl
        je public_6ef2bb5
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ef2bb9
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef2b95
        public_6ef2bb5 : nop
        xor eax, eax
        jmp public_6ef2bbe
        public_6ef2bb9 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef2bbe : nop
        test eax, eax
        mov esi, dword ptr ss : [esp+0x10]
        jl public_6ef2bda
        mov eax, esi
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [eax+8]
        jne public_6ef2bf4
        mov ecx, esi
        mov dword ptr ds : [eax+8], ecx
        jmp public_6ef2bf4
        public_6ef2bda : nop
        mov dword ptr ds : [ebx], esi
        mov eax, dword ptr ds : [edi+4]
        cmp ebx, eax
        jne public_6ef2bee
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], esi
        jmp public_6ef2bf4
        public_6ef2bee : nop
        cmp ebx, dword ptr ds : [eax]
        jne public_6ef2bf4
        mov dword ptr ds : [eax], esi
        public_6ef2bf4 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [esp+0x10]
        cmp ebx, dword ptr ds : [eax+4]
        je public_6ef2ccc
        public_6ef2c04 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x50]
        test cl, cl
        jne public_6ef2ccc
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ef2c72
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6ef2c42
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [eax+4]
        jmp public_6ef2cc0
        public_6ef2c42 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ef2c51
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6ef2c51 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x50], 0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, edi
        call public_6f46410
        jmp public_6ef2cc0
        public_6ef2c72 : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6ef2c93
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6ef2cc0
        public_6ef2c93 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ef2ca1
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6ef2ca1 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x50], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f7cc30
        public_6ef2cc0 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edx+4]
        jne public_6ef2c04
        public_6ef2ccc : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov byte ptr ds : [ecx+0x50], 1
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        add esp, 8
        ret 8
        public_6ef2cea : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        je public_6ef2d2b
        mov eax, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [eax]
        jne public_6ef2d22
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebx
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, edi
        call public_6ef2f00
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 8
        ret 8
        public_6ef2d22 : nop
        lea ecx, ss:[esp+0x14]
        call public_6f96d30
        public_6ef2d2b : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        lea esi, ds:[edx+4]
        add eax, 0x10
        lea esp, ss:[esp]
        public_6ef2d40 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ef2d64
        test cl, cl
        je public_6ef2d60
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ef2d64
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef2d40
        public_6ef2d60 : nop
        xor eax, eax
        jmp public_6ef2d69
        public_6ef2d64 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef2d69 : nop
        test eax, eax
        jge public_6ef2d96
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebx
        push ebp
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        call public_6ef2f00
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        add esp, 8
        ret 8
        public_6ef2d96 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ef2ae0)
    }
}

#undef public_6ef2af6
#undef public_6ef2b02
#undef public_6ef2b22
#undef public_6ef2b26
#undef public_6ef2b2b
#undef public_6ef2b39
#undef public_6ef2b3c
#undef public_6ef2b41
#undef public_6ef2b95
#undef public_6ef2bb5
#undef public_6ef2bb9
#undef public_6ef2bbe
#undef public_6ef2bda
#undef public_6ef2bee
#undef public_6ef2bf4
#undef public_6ef2c04
#undef public_6ef2c42
#undef public_6ef2c51
#undef public_6ef2c72
#undef public_6ef2c93
#undef public_6ef2ca1
#undef public_6ef2cc0
#undef public_6ef2ccc
#undef public_6ef2cea
#undef public_6ef2d22
#undef public_6ef2d2b
#undef public_6ef2d40
#undef public_6ef2d60
#undef public_6ef2d64
#undef public_6ef2d69
#undef public_6ef2d96
