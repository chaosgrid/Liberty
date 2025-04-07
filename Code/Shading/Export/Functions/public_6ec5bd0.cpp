#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec55d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6410);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6660);
CLANG_FORWARD_PROC_SYMBOL(public_6ec69f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecec60);

#define public_6ec5bf0 _public_6ec5bf0
#define public_6ec5c03 _public_6ec5c03
#define public_6ec5c06 _public_6ec5c06
#define public_6ec5c0a _public_6ec5c0a
#define public_6ec5c69 _public_6ec5c69
#define public_6ec5c81 _public_6ec5c81
#define public_6ec5c8b _public_6ec5c8b
#define public_6ec5c8f _public_6ec5c8f
#define public_6ec5ca0 _public_6ec5ca0
#define public_6ec5cdb _public_6ec5cdb
#define public_6ec5cea _public_6ec5cea
#define public_6ec5d0b _public_6ec5d0b
#define public_6ec5d2c _public_6ec5d2c
#define public_6ec5d3a _public_6ec5d3a
#define public_6ec5d59 _public_6ec5d59
#define public_6ec5d65 _public_6ec5d65
#define public_6ec5d81 _public_6ec5d81
#define public_6ec5d9c _public_6ec5d9c
#define public_6ec5da3 _public_6ec5da3
#define public_6ec5dc6 _public_6ec5dc6

PROC_DECLARE(0x6ec5bd0, internal_6ec5bd0, public_6ec5bd0);
extern "C" NAKED register_t __cdecl internal_6ec5bd0()
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
        je public_6ec5c0a
        lea esp, ss:[esp]
        public_6ec5bf0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6ec5c03
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ec5c06
        public_6ec5c03 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ec5c06 : nop
        cmp ebp, edx
        jne public_6ec5bf0
        public_6ec5c0a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ec5d81
        push 0
        push esi
        mov ecx, edi
        call public_6ec6660
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ec69f0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ec5c69
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ec5c69
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6ec5c69
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec5c8f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec5c8f
        public_6ec5c69 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6ec5c81
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec5c8b
        public_6ec5c81 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ec5c8b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6ec5c8b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ec5c8f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6ec5d65
        lea ecx, ds:[ecx]
        public_6ec5ca0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6ec5d65
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ec5d0b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec5cdb
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6ec5d59
        public_6ec5cdb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec5cea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ecec60
        public_6ec5cea : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6ec55d0
        jmp public_6ec5d59
        public_6ec5d0b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec5d2c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6ec5d59
        public_6ec5d2c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ec5d3a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ec55d0
        public_6ec5d3a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6ecec60
        public_6ec5d59 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6ec5ca0
        public_6ec5d65 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6ec5d81 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6ec5d9c
        cmp esi, dword ptr ds : [ecx]
        je public_6ec5da3
        lea ecx, ss:[esp+0x10]
        call public_6ec7da0
        mov edx, dword ptr ss : [esp+0x10]
        public_6ec5d9c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6ec5dc6
        public_6ec5da3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ec6410
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
        public_6ec5dc6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec5bd0)
    }
}

#undef public_6ec5bf0
#undef public_6ec5c03
#undef public_6ec5c06
#undef public_6ec5c0a
#undef public_6ec5c69
#undef public_6ec5c81
#undef public_6ec5c8b
#undef public_6ec5c8f
#undef public_6ec5ca0
#undef public_6ec5cdb
#undef public_6ec5cea
#undef public_6ec5d0b
#undef public_6ec5d2c
#undef public_6ec5d3a
#undef public_6ec5d59
#undef public_6ec5d65
#undef public_6ec5d81
#undef public_6ec5d9c
#undef public_6ec5da3
#undef public_6ec5dc6
