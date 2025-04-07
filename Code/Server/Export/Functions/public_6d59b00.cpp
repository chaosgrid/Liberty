#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5be0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);
CLANG_FORWARD_PROC_SYMBOL(public_6d59b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a520);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5afd0);

#define public_6d59b18 _public_6d59b18
#define public_6d59b29 _public_6d59b29
#define public_6d59b45 _public_6d59b45
#define public_6d59b48 _public_6d59b48
#define public_6d59b4d _public_6d59b4d
#define public_6d59bb4 _public_6d59bb4
#define public_6d59bcd _public_6d59bcd
#define public_6d59bd7 _public_6d59bd7
#define public_6d59bdb _public_6d59bdb
#define public_6d59bf0 _public_6d59bf0
#define public_6d59c2b _public_6d59c2b
#define public_6d59c3a _public_6d59c3a
#define public_6d59c5b _public_6d59c5b
#define public_6d59c7c _public_6d59c7c
#define public_6d59c8a _public_6d59c8a
#define public_6d59ca9 _public_6d59ca9
#define public_6d59cb5 _public_6d59cb5
#define public_6d59cd1 _public_6d59cd1
#define public_6d59cea _public_6d59cea
#define public_6d59cf3 _public_6d59cf3
#define public_6d59d0c _public_6d59d0c
#define public_6d59d27 _public_6d59d27

PROC_DECLARE(0x6d59b00, internal_6d59b00, public_6d59b00);
extern "C" NAKED register_t __cdecl internal_6d59b00()
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
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_6d59b4d
        public_6d59b18 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, esi
        jne public_6d59b29
        mov eax, offset public_6d64efc
        public_6d59b29 : nop
        push ecx
        push eax
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push 0
        mov ecx, ebx
        call public_6d5afd0
        test eax, eax
        setl al
        test al, al
        je public_6d59b45
        mov esi, dword ptr ds : [esi]
        jmp public_6d59b48
        public_6d59b45 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d59b48 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d59b18
        public_6d59b4d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6d59cd1
        push 0
        push ebp
        mov ecx, edi
        call public_6ce4bb0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ce5be0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp ebp, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d59bb4
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d59bb4
        lea eax, ss:[ebp+0xC]
        push eax
        mov ecx, ebx
        call public_6d5af30
        test eax, eax
        jl public_6d59bb4
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_6d59bdb
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d59bdb
        public_6d59bb4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, eax
        jne public_6d59bcd
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d59bd7
        public_6d59bcd : nop
        cmp ebp, dword ptr ds : [eax]
        jne public_6d59bd7
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d59bd7 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d59bdb : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d59cb5
        lea esp, ss:[esp]
        public_6d59bf0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6d59cb5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d59c5b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6d59c2b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d59ca9
        public_6d59c2b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d59c3a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6d59c3a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6d59ca9
        public_6d59c5b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6d59c7c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d59ca9
        public_6d59c7c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d59c8a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6d59c8a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6d59ca9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d59bf0
        public_6d59cb5 : nop
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
        public_6d59cd1 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d59cf3
        mov ecx, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [ecx]
        jne public_6d59cea
        push ebx
        push ebp
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        jmp public_6d59d0c
        public_6d59cea : nop
        lea ecx, ss:[esp+0x10]
        call public_6d5a8d0
        public_6d59cf3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+0xC]
        push ebx
        call public_6d5af30
        test eax, eax
        jge public_6d59d27
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        public_6d59d0c : nop
        mov ecx, edi
        call public_6d5a520
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d59d27 : nop
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 0
        call public_6d0f600
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d59b00)
    }
}

#undef public_6d59b18
#undef public_6d59b29
#undef public_6d59b45
#undef public_6d59b48
#undef public_6d59b4d
#undef public_6d59bb4
#undef public_6d59bcd
#undef public_6d59bd7
#undef public_6d59bdb
#undef public_6d59bf0
#undef public_6d59c2b
#undef public_6d59c3a
#undef public_6d59c5b
#undef public_6d59c7c
#undef public_6d59c8a
#undef public_6d59ca9
#undef public_6d59cb5
#undef public_6d59cd1
#undef public_6d59cea
#undef public_6d59cf3
#undef public_6d59d0c
#undef public_6d59d27
