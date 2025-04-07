#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278290);
CLANG_FORWARD_PROC_SYMBOL(public_6279af0);
CLANG_FORWARD_PROC_SYMBOL(public_631cd20);
CLANG_FORWARD_PROC_SYMBOL(public_631d190);
CLANG_FORWARD_PROC_SYMBOL(public_631d3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_631cd40 _public_631cd40
#define public_631cd53 _public_631cd53
#define public_631cd56 _public_631cd56
#define public_631cd5a _public_631cd5a
#define public_631cdb9 _public_631cdb9
#define public_631cdd1 _public_631cdd1
#define public_631cddb _public_631cddb
#define public_631cddf _public_631cddf
#define public_631cdf0 _public_631cdf0
#define public_631ce2b _public_631ce2b
#define public_631ce3a _public_631ce3a
#define public_631ce5b _public_631ce5b
#define public_631ce7c _public_631ce7c
#define public_631ce8a _public_631ce8a
#define public_631cea9 _public_631cea9
#define public_631ceb5 _public_631ceb5
#define public_631ced1 _public_631ced1
#define public_631ceec _public_631ceec
#define public_631cef3 _public_631cef3
#define public_631cf16 _public_631cf16

PROC_DECLARE(0x631cd20, internal_631cd20, public_631cd20);
extern "C" NAKED register_t __cdecl internal_631cd20()
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
        je public_631cd5a
        lea esp, ss:[esp]
        public_631cd40 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_631cd53
        mov ebp, dword ptr ss : [ebp]
        jmp public_631cd56
        public_631cd53 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_631cd56 : nop
        cmp ebp, edx
        jne public_631cd40
        public_631cd5a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_631ced1
        push 0
        push esi
        mov ecx, edi
        call public_6278290
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6279af0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_631cdb9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_631cdb9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_631cdb9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_631cddf
        mov dword ptr ds : [eax+8], ebx
        jmp public_631cddf
        public_631cdb9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_631cdd1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_631cddb
        public_631cdd1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_631cddb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_631cddb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_631cddf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_631ceb5
        lea ecx, ds:[ecx]
        public_631cdf0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x34]
        test cl, cl
        jne public_631ceb5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_631ce5b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_631ce2b
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_631cea9
        public_631ce2b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_631ce3a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_631ce3a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_631cea9
        public_631ce5b : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_631ce7c
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_631cea9
        public_631ce7c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_631ce8a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_631ce8a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_631cea9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_631cdf0
        public_631ceb5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_631ced1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_631ceec
        cmp esi, dword ptr ds : [ecx]
        je public_631cef3
        lea ecx, ss:[esp+0x10]
        call public_631d3e0
        mov edx, dword ptr ss : [esp+0x10]
        public_631ceec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_631cf16
        public_631cef3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_631d190
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
        public_631cf16 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x631cd20)
    }
}

#undef public_631cd40
#undef public_631cd53
#undef public_631cd56
#undef public_631cd5a
#undef public_631cdb9
#undef public_631cdd1
#undef public_631cddb
#undef public_631cddf
#undef public_631cdf0
#undef public_631ce2b
#undef public_631ce3a
#undef public_631ce5b
#undef public_631ce7c
#undef public_631ce8a
#undef public_631cea9
#undef public_631ceb5
#undef public_631ced1
#undef public_631ceec
#undef public_631cef3
#undef public_631cf16
