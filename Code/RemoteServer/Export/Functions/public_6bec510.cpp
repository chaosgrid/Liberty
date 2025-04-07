#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bec510);
CLANG_FORWARD_PROC_SYMBOL(public_6becb30);
CLANG_FORWARD_PROC_SYMBOL(public_6becd80);
CLANG_FORWARD_PROC_SYMBOL(public_6becdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6bece30);
CLANG_FORWARD_PROC_SYMBOL(public_6bece50);
CLANG_FORWARD_PROC_SYMBOL(public_6becf00);

#define public_6bec530 _public_6bec530
#define public_6bec543 _public_6bec543
#define public_6bec546 _public_6bec546
#define public_6bec54a _public_6bec54a
#define public_6bec5a9 _public_6bec5a9
#define public_6bec5c1 _public_6bec5c1
#define public_6bec5cb _public_6bec5cb
#define public_6bec5cf _public_6bec5cf
#define public_6bec5e0 _public_6bec5e0
#define public_6bec61b _public_6bec61b
#define public_6bec62a _public_6bec62a
#define public_6bec64b _public_6bec64b
#define public_6bec66c _public_6bec66c
#define public_6bec67a _public_6bec67a
#define public_6bec699 _public_6bec699
#define public_6bec6a5 _public_6bec6a5
#define public_6bec6c1 _public_6bec6c1
#define public_6bec6dc _public_6bec6dc
#define public_6bec6e3 _public_6bec6e3
#define public_6bec706 _public_6bec706

PROC_DECLARE(0x6bec510, internal_6bec510, public_6bec510);
extern "C" NAKED register_t __cdecl internal_6bec510()
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
        je public_6bec54a
        lea esp, ss:[esp]
        public_6bec530 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0x10]
        mov esi, ebp
        setb al
        test al, al
        je public_6bec543
        mov ebp, dword ptr ss : [ebp]
        jmp public_6bec546
        public_6bec543 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6bec546 : nop
        cmp ebp, edx
        jne public_6bec530
        public_6bec54a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6bec6c1
        push 0
        push esi
        mov ecx, edi
        call public_6bece30
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0x10
        push ebx
        push eax
        call public_6becf00
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6bec5a9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6bec5a9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0x10]
        jb public_6bec5a9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6bec5cf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6bec5cf
        public_6bec5a9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6bec5c1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6bec5cb
        public_6bec5c1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6bec5cb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6bec5cb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6bec5cf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6bec6a5
        lea ecx, ds:[ecx]
        public_6bec5e0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x48]
        test cl, cl
        jne public_6bec6a5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6bec64b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6bec61b
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6bec699
        public_6bec61b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6bec62a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6becd80
        public_6bec62a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x48], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6becdd0
        jmp public_6bec699
        public_6bec64b : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6bec66c
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x48], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6bec699
        public_6bec66c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6bec67a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6becdd0
        public_6bec67a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6becd80
        public_6bec699 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6bec5e0
        public_6bec6a5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6bec6c1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6bec6dc
        cmp esi, dword ptr ds : [ecx]
        je public_6bec6e3
        lea ecx, ss:[esp+0x10]
        call public_6bece50
        mov edx, dword ptr ss : [esp+0x10]
        public_6bec6dc : nop
        mov eax, dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [ebx]
        jae public_6bec706
        public_6bec6e3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6becb30
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
        public_6bec706 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bec510)
    }
}

#undef public_6bec530
#undef public_6bec543
#undef public_6bec546
#undef public_6bec54a
#undef public_6bec5a9
#undef public_6bec5c1
#undef public_6bec5cb
#undef public_6bec5cf
#undef public_6bec5e0
#undef public_6bec61b
#undef public_6bec62a
#undef public_6bec64b
#undef public_6bec66c
#undef public_6bec67a
#undef public_6bec699
#undef public_6bec6a5
#undef public_6bec6c1
#undef public_6bec6dc
#undef public_6bec6e3
#undef public_6bec706
