#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf50);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);

#define public_6d5c620 _public_6d5c620
#define public_6d5c633 _public_6d5c633
#define public_6d5c636 _public_6d5c636
#define public_6d5c63a _public_6d5c63a
#define public_6d5c699 _public_6d5c699
#define public_6d5c6b1 _public_6d5c6b1
#define public_6d5c6bb _public_6d5c6bb
#define public_6d5c6bf _public_6d5c6bf
#define public_6d5c6d0 _public_6d5c6d0
#define public_6d5c70b _public_6d5c70b
#define public_6d5c71a _public_6d5c71a
#define public_6d5c73b _public_6d5c73b
#define public_6d5c75c _public_6d5c75c
#define public_6d5c76a _public_6d5c76a
#define public_6d5c789 _public_6d5c789
#define public_6d5c795 _public_6d5c795
#define public_6d5c7b1 _public_6d5c7b1
#define public_6d5c7cc _public_6d5c7cc
#define public_6d5c7d3 _public_6d5c7d3
#define public_6d5c7f6 _public_6d5c7f6

PROC_DECLARE(0x6d5c600, internal_6d5c600, public_6d5c600);
extern "C" NAKED register_t __cdecl internal_6d5c600()
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
        je public_6d5c63a
        lea esp, ss:[esp]
        public_6d5c620 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6d5c633
        mov ebp, dword ptr ss : [ebp]
        jmp public_6d5c636
        public_6d5c633 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6d5c636 : nop
        cmp ebp, edx
        jne public_6d5c620
        public_6d5c63a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6d5c7b1
        push 0
        push esi
        mov ecx, edi
        call public_6cfdf50
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d5c880
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d5c699
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6d5c699
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6d5c699
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5c6bf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d5c6bf
        public_6d5c699 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6d5c6b1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5c6bb
        public_6d5c6b1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d5c6bb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d5c6bb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d5c6bf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d5c795
        lea ecx, ds:[ecx]
        public_6d5c6d0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6d5c795
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d5c73b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d5c70b
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d5c789
        public_6d5c70b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5c71a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6d5c71a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6d5c789
        public_6d5c73b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d5c75c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d5c789
        public_6d5c75c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d5c76a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6d5c76a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6d5c789 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d5c6d0
        public_6d5c795 : nop
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
        public_6d5c7b1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6d5c7cc
        cmp esi, dword ptr ds : [ecx]
        je public_6d5c7d3
        lea ecx, ss:[esp+0x10]
        call public_6cfdf70
        mov edx, dword ptr ss : [esp+0x10]
        public_6d5c7cc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6d5c7f6
        public_6d5c7d3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6cfdca0
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
        public_6d5c7f6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d5c600)
    }
}

#undef public_6d5c620
#undef public_6d5c633
#undef public_6d5c636
#undef public_6d5c63a
#undef public_6d5c699
#undef public_6d5c6b1
#undef public_6d5c6bb
#undef public_6d5c6bf
#undef public_6d5c6d0
#undef public_6d5c70b
#undef public_6d5c71a
#undef public_6d5c73b
#undef public_6d5c75c
#undef public_6d5c76a
#undef public_6d5c789
#undef public_6d5c795
#undef public_6d5c7b1
#undef public_6d5c7cc
#undef public_6d5c7d3
#undef public_6d5c7f6
