#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a6a50);
CLANG_FORWARD_PROC_SYMBOL(public_62a79a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7c30);
CLANG_FORWARD_PROC_SYMBOL(public_62a7ee0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_62a6a70 _public_62a6a70
#define public_62a6a83 _public_62a6a83
#define public_62a6a86 _public_62a6a86
#define public_62a6a8a _public_62a6a8a
#define public_62a6ae9 _public_62a6ae9
#define public_62a6b01 _public_62a6b01
#define public_62a6b0b _public_62a6b0b
#define public_62a6b0f _public_62a6b0f
#define public_62a6b20 _public_62a6b20
#define public_62a6b5b _public_62a6b5b
#define public_62a6b6a _public_62a6b6a
#define public_62a6b8b _public_62a6b8b
#define public_62a6bac _public_62a6bac
#define public_62a6bba _public_62a6bba
#define public_62a6bd9 _public_62a6bd9
#define public_62a6be5 _public_62a6be5
#define public_62a6c01 _public_62a6c01
#define public_62a6c1c _public_62a6c1c
#define public_62a6c23 _public_62a6c23
#define public_62a6c46 _public_62a6c46

PROC_DECLARE(0x62a6a50, internal_62a6a50, public_62a6a50);
extern "C" NAKED register_t __cdecl internal_62a6a50()
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
        je public_62a6a8a
        lea esp, ss:[esp]
        public_62a6a70 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_62a6a83
        mov ebp, dword ptr ss : [ebp]
        jmp public_62a6a86
        public_62a6a83 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_62a6a86 : nop
        cmp ebp, edx
        jne public_62a6a70
        public_62a6a8a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_62a6c01
        push 0
        push esi
        mov ecx, edi
        call public_62a7c30
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62a7fc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_62a6ae9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_62a6ae9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_62a6ae9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a6b0f
        mov dword ptr ds : [eax+8], ebx
        jmp public_62a6b0f
        public_62a6ae9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_62a6b01
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a6b0b
        public_62a6b01 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62a6b0b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_62a6b0b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62a6b0f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_62a6be5
        lea ecx, ds:[ecx]
        public_62a6b20 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x68]
        test cl, cl
        jne public_62a6be5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62a6b8b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_62a6b5b
        mov byte ptr ds : [eax+0x68], 1
        mov byte ptr ds : [ecx+0x68], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_62a6bd9
        public_62a6b5b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a6b6a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_62a6b6a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x68], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x68], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_62a6bd9
        public_62a6b8b : nop
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_62a6bac
        mov byte ptr ds : [eax+0x68], 1
        mov byte ptr ds : [ecx+0x68], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x68], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_62a6bd9
        public_62a6bac : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62a6bba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_62a6bba : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x68], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_62a6bd9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_62a6b20
        public_62a6be5 : nop
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
        public_62a6c01 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_62a6c1c
        cmp esi, dword ptr ds : [ecx]
        je public_62a6c23
        lea ecx, ss:[esp+0x10]
        call public_62a7ee0
        mov edx, dword ptr ss : [esp+0x10]
        public_62a6c1c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_62a6c46
        public_62a6c23 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_62a79a0
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
        public_62a6c46 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62a6a50)
    }
}

#undef public_62a6a70
#undef public_62a6a83
#undef public_62a6a86
#undef public_62a6a8a
#undef public_62a6ae9
#undef public_62a6b01
#undef public_62a6b0b
#undef public_62a6b0f
#undef public_62a6b20
#undef public_62a6b5b
#undef public_62a6b6a
#undef public_62a6b8b
#undef public_62a6bac
#undef public_62a6bba
#undef public_62a6bd9
#undef public_62a6be5
#undef public_62a6c01
#undef public_62a6c1c
#undef public_62a6c23
#undef public_62a6c46
