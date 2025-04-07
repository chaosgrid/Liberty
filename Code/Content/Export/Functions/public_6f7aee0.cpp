#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7aee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c300);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7db30);

#define public_6f7af00 _public_6f7af00
#define public_6f7af13 _public_6f7af13
#define public_6f7af16 _public_6f7af16
#define public_6f7af1a _public_6f7af1a
#define public_6f7af79 _public_6f7af79
#define public_6f7af91 _public_6f7af91
#define public_6f7af9b _public_6f7af9b
#define public_6f7af9f _public_6f7af9f
#define public_6f7afb0 _public_6f7afb0
#define public_6f7afeb _public_6f7afeb
#define public_6f7affa _public_6f7affa
#define public_6f7b01b _public_6f7b01b
#define public_6f7b03c _public_6f7b03c
#define public_6f7b04a _public_6f7b04a
#define public_6f7b069 _public_6f7b069
#define public_6f7b075 _public_6f7b075
#define public_6f7b091 _public_6f7b091
#define public_6f7b0ac _public_6f7b0ac
#define public_6f7b0b3 _public_6f7b0b3
#define public_6f7b0d6 _public_6f7b0d6

PROC_DECLARE(0x6f7aee0, internal_6f7aee0, public_6f7aee0);
extern "C" NAKED register_t __cdecl internal_6f7aee0()
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
        je public_6f7af1a
        lea esp, ss:[esp]
        public_6f7af00 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f7af13
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f7af16
        public_6f7af13 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f7af16 : nop
        cmp ebp, edx
        jne public_6f7af00
        public_6f7af1a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f7b091
        push 0
        push esi
        mov ecx, edi
        call public_6f7cc80
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f7db30
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f7af79
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f7af79
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f7af79
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f7af9f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f7af9f
        public_6f7af79 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f7af91
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7af9b
        public_6f7af91 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f7af9b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f7af9b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f7af9f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f7b075
        lea ecx, ds:[ecx]
        public_6f7afb0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x5C]
        test cl, cl
        jne public_6f7b075
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f7b01b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6f7afeb
        mov byte ptr ds : [eax+0x5C], 1
        mov byte ptr ds : [ecx+0x5C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f7b069
        public_6f7afeb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f7affa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f7affa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x5C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x5C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f7b069
        public_6f7b01b : nop
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6f7b03c
        mov byte ptr ds : [eax+0x5C], 1
        mov byte ptr ds : [ecx+0x5C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x5C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f7b069
        public_6f7b03c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f7b04a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f7b04a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x5C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f7b069 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f7afb0
        public_6f7b075 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x5C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f7b091 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f7b0ac
        cmp esi, dword ptr ds : [ecx]
        je public_6f7b0b3
        lea ecx, ss:[esp+0x10]
        call public_6f7cca0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f7b0ac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f7b0d6
        public_6f7b0b3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f7c300
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
        public_6f7b0d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f7aee0)
    }
}

#undef public_6f7af00
#undef public_6f7af13
#undef public_6f7af16
#undef public_6f7af1a
#undef public_6f7af79
#undef public_6f7af91
#undef public_6f7af9b
#undef public_6f7af9f
#undef public_6f7afb0
#undef public_6f7afeb
#undef public_6f7affa
#undef public_6f7b01b
#undef public_6f7b03c
#undef public_6f7b04a
#undef public_6f7b069
#undef public_6f7b075
#undef public_6f7b091
#undef public_6f7b0ac
#undef public_6f7b0b3
#undef public_6f7b0d6
