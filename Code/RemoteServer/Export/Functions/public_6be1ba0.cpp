#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6be2210);
CLANG_FORWARD_PROC_SYMBOL(public_6be2490);
CLANG_FORWARD_PROC_SYMBOL(public_6be24e0);
CLANG_FORWARD_PROC_SYMBOL(public_6be2540);
CLANG_FORWARD_PROC_SYMBOL(public_6be2560);
CLANG_FORWARD_PROC_SYMBOL(public_6be25c0);

#define public_6be1bc0 _public_6be1bc0
#define public_6be1bd3 _public_6be1bd3
#define public_6be1bd6 _public_6be1bd6
#define public_6be1bda _public_6be1bda
#define public_6be1c39 _public_6be1c39
#define public_6be1c51 _public_6be1c51
#define public_6be1c5b _public_6be1c5b
#define public_6be1c5f _public_6be1c5f
#define public_6be1c70 _public_6be1c70
#define public_6be1cab _public_6be1cab
#define public_6be1cba _public_6be1cba
#define public_6be1cdb _public_6be1cdb
#define public_6be1cfc _public_6be1cfc
#define public_6be1d0a _public_6be1d0a
#define public_6be1d29 _public_6be1d29
#define public_6be1d35 _public_6be1d35
#define public_6be1d51 _public_6be1d51
#define public_6be1d6c _public_6be1d6c
#define public_6be1d73 _public_6be1d73
#define public_6be1d96 _public_6be1d96

PROC_DECLARE(0x6be1ba0, internal_6be1ba0, public_6be1ba0);
extern "C" NAKED register_t __cdecl internal_6be1ba0()
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
        je public_6be1bda
        lea esp, ss:[esp]
        public_6be1bc0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6be1bd3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6be1bd6
        public_6be1bd3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6be1bd6 : nop
        cmp ebp, edx
        jne public_6be1bc0
        public_6be1bda : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6be1d51
        push 0
        push esi
        mov ecx, edi
        call public_6be2540
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6be25c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6be1c39
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6be1c39
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6be1c39
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6be1c5f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6be1c5f
        public_6be1c39 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6be1c51
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6be1c5b
        public_6be1c51 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6be1c5b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6be1c5b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6be1c5f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6be1d35
        lea ecx, ds:[ecx]
        public_6be1c70 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6be1d35
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6be1cdb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6be1cab
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6be1d29
        public_6be1cab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6be1cba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6be2490
        public_6be1cba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6be24e0
        jmp public_6be1d29
        public_6be1cdb : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6be1cfc
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6be1d29
        public_6be1cfc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6be1d0a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6be24e0
        public_6be1d0a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6be2490
        public_6be1d29 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6be1c70
        public_6be1d35 : nop
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
        public_6be1d51 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6be1d6c
        cmp esi, dword ptr ds : [ecx]
        je public_6be1d73
        lea ecx, ss:[esp+0x10]
        call public_6be2560
        mov edx, dword ptr ss : [esp+0x10]
        public_6be1d6c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6be1d96
        public_6be1d73 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6be2210
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
        public_6be1d96 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6be1ba0)
    }
}

#undef public_6be1bc0
#undef public_6be1bd3
#undef public_6be1bd6
#undef public_6be1bda
#undef public_6be1c39
#undef public_6be1c51
#undef public_6be1c5b
#undef public_6be1c5f
#undef public_6be1c70
#undef public_6be1cab
#undef public_6be1cba
#undef public_6be1cdb
#undef public_6be1cfc
#undef public_6be1d0a
#undef public_6be1d29
#undef public_6be1d35
#undef public_6be1d51
#undef public_6be1d6c
#undef public_6be1d73
#undef public_6be1d96
