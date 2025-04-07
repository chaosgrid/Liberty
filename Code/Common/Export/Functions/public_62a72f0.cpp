#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a72f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7c90);
CLANG_FORWARD_PROC_SYMBOL(public_62a7f40);
CLANG_FORWARD_PROC_SYMBOL(public_62a7f60);
CLANG_FORWARD_PROC_SYMBOL(public_62a80e0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_62a7310 _public_62a7310
#define public_62a7323 _public_62a7323
#define public_62a7326 _public_62a7326
#define public_62a732a _public_62a732a
#define public_62a7389 _public_62a7389
#define public_62a73a1 _public_62a73a1
#define public_62a73ab _public_62a73ab
#define public_62a73af _public_62a73af
#define public_62a73c0 _public_62a73c0
#define public_62a73fb _public_62a73fb
#define public_62a740a _public_62a740a
#define public_62a742b _public_62a742b
#define public_62a744c _public_62a744c
#define public_62a745a _public_62a745a
#define public_62a7479 _public_62a7479
#define public_62a7485 _public_62a7485
#define public_62a74a1 _public_62a74a1
#define public_62a74bc _public_62a74bc
#define public_62a74c3 _public_62a74c3
#define public_62a74e6 _public_62a74e6

PROC_DECLARE(0x62a72f0, internal_62a72f0, public_62a72f0);
extern "C" NAKED register_t __cdecl internal_62a72f0()
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
        je public_62a732a
        lea esp, ss:[esp]
        public_62a7310 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_62a7323
        mov ebp, dword ptr ss : [ebp]
        jmp public_62a7326
        public_62a7323 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_62a7326 : nop
        cmp ebp, edx
        jne public_62a7310
        public_62a732a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_62a74a1
        push 0
        push esi
        mov ecx, edi
        call public_62a7f40
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62a80e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_62a7389
        cmp ebp, dword ptr ds : [edi+8]
        jne public_62a7389
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_62a7389
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a73af
        mov dword ptr ds : [eax+8], ebx
        jmp public_62a73af
        public_62a7389 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_62a73a1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a73ab
        public_62a73a1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62a73ab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_62a73ab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62a73af : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_62a7485
        lea ecx, ds:[ecx]
        public_62a73c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x28]
        test cl, cl
        jne public_62a7485
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62a742b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_62a73fb
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_62a7479
        public_62a73fb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a740a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_62a740a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x28], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_62a7479
        public_62a742b : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_62a744c
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x28], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_62a7479
        public_62a744c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62a745a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_62a745a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_62a7479 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_62a73c0
        public_62a7485 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_62a74a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_62a74bc
        cmp esi, dword ptr ds : [ecx]
        je public_62a74c3
        lea ecx, ss:[esp+0x10]
        call public_62a7f60
        mov edx, dword ptr ss : [esp+0x10]
        public_62a74bc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_62a74e6
        public_62a74c3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_62a7c90
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
        public_62a74e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62a72f0)
    }
}

#undef public_62a7310
#undef public_62a7323
#undef public_62a7326
#undef public_62a732a
#undef public_62a7389
#undef public_62a73a1
#undef public_62a73ab
#undef public_62a73af
#undef public_62a73c0
#undef public_62a73fb
#undef public_62a740a
#undef public_62a742b
#undef public_62a744c
#undef public_62a745a
#undef public_62a7479
#undef public_62a7485
#undef public_62a74a1
#undef public_62a74bc
#undef public_62a74c3
#undef public_62a74e6
