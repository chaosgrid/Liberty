#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa2b60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4560);

#define public_6fa0ac0 _public_6fa0ac0
#define public_6fa0ad3 _public_6fa0ad3
#define public_6fa0ad6 _public_6fa0ad6
#define public_6fa0ada _public_6fa0ada
#define public_6fa0b39 _public_6fa0b39
#define public_6fa0b51 _public_6fa0b51
#define public_6fa0b5b _public_6fa0b5b
#define public_6fa0b5f _public_6fa0b5f
#define public_6fa0b70 _public_6fa0b70
#define public_6fa0bab _public_6fa0bab
#define public_6fa0bba _public_6fa0bba
#define public_6fa0bdb _public_6fa0bdb
#define public_6fa0bfc _public_6fa0bfc
#define public_6fa0c0a _public_6fa0c0a
#define public_6fa0c29 _public_6fa0c29
#define public_6fa0c35 _public_6fa0c35
#define public_6fa0c51 _public_6fa0c51
#define public_6fa0c6c _public_6fa0c6c
#define public_6fa0c73 _public_6fa0c73
#define public_6fa0c96 _public_6fa0c96

PROC_DECLARE(0x6fa0aa0, internal_6fa0aa0, public_6fa0aa0);
extern "C" NAKED register_t __cdecl internal_6fa0aa0()
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
        je public_6fa0ada
        lea esp, ss:[esp]
        public_6fa0ac0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6fa0ad3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6fa0ad6
        public_6fa0ad3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6fa0ad6 : nop
        cmp ebp, edx
        jne public_6fa0ac0
        public_6fa0ada : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6fa0c51
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
        call public_6fa4560
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6fa0b39
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6fa0b39
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6fa0b39
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa0b5f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa0b5f
        public_6fa0b39 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6fa0b51
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa0b5b
        public_6fa0b51 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa0b5b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6fa0b5b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6fa0b5f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6fa0c35
        lea ecx, ds:[ecx]
        public_6fa0b70 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6fa0c35
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6fa0bdb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6fa0bab
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6fa0c29
        public_6fa0bab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa0bba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6fa0bba : nop
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
        jmp public_6fa0c29
        public_6fa0bdb : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6fa0bfc
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6fa0c29
        public_6fa0bfc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa0c0a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6fa0c0a : nop
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
        public_6fa0c29 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6fa0b70
        public_6fa0c35 : nop
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
        public_6fa0c51 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6fa0c6c
        cmp esi, dword ptr ds : [ecx]
        je public_6fa0c73
        lea ecx, ss:[esp+0x10]
        call public_6f4e3f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6fa0c6c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6fa0c96
        public_6fa0c73 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6fa2b60
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
        public_6fa0c96 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6fa0aa0)
    }
}

#undef public_6fa0ac0
#undef public_6fa0ad3
#undef public_6fa0ad6
#undef public_6fa0ada
#undef public_6fa0b39
#undef public_6fa0b51
#undef public_6fa0b5b
#undef public_6fa0b5f
#undef public_6fa0b70
#undef public_6fa0bab
#undef public_6fa0bba
#undef public_6fa0bdb
#undef public_6fa0bfc
#undef public_6fa0c0a
#undef public_6fa0c29
#undef public_6fa0c35
#undef public_6fa0c51
#undef public_6fa0c6c
#undef public_6fa0c73
#undef public_6fa0c96
