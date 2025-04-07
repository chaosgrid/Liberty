#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_62fd060);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6322310 _public_6322310
#define public_6322323 _public_6322323
#define public_6322326 _public_6322326
#define public_632232a _public_632232a
#define public_6322389 _public_6322389
#define public_63223a1 _public_63223a1
#define public_63223ab _public_63223ab
#define public_63223af _public_63223af
#define public_63223c0 _public_63223c0
#define public_63223fb _public_63223fb
#define public_632240a _public_632240a
#define public_632242b _public_632242b
#define public_632244c _public_632244c
#define public_632245a _public_632245a
#define public_6322479 _public_6322479
#define public_6322485 _public_6322485
#define public_63224a1 _public_63224a1
#define public_63224bc _public_63224bc
#define public_63224c3 _public_63224c3
#define public_63224e6 _public_63224e6

PROC_DECLARE(0x63222f0, internal_63222f0, public_63222f0);
extern "C" NAKED register_t __cdecl internal_63222f0()
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
        je public_632232a
        lea esp, ss:[esp]
        public_6322310 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6322323
        mov ebp, dword ptr ss : [ebp]
        jmp public_6322326
        public_6322323 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6322326 : nop
        cmp ebp, edx
        jne public_6322310
        public_632232a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_63224a1
        push 0
        push esi
        mov ecx, edi
        call public_626b3a0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62bee40
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6322389
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6322389
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6322389
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_63223af
        mov dword ptr ds : [eax+8], ebx
        jmp public_63223af
        public_6322389 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_63223a1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_63223ab
        public_63223a1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_63223ab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_63223ab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_63223af : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6322485
        lea ecx, ds:[ecx]
        public_63223c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6322485
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_632242b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_63223fb
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6322479
        public_63223fb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_632240a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_632240a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6322479
        public_632242b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_632244c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6322479
        public_632244c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_632245a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_632245a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6322479 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_63223c0
        public_6322485 : nop
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
        public_63224a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_63224bc
        cmp esi, dword ptr ds : [ecx]
        je public_63224c3
        lea ecx, ss:[esp+0x10]
        call public_626ba00
        mov edx, dword ptr ss : [esp+0x10]
        public_63224bc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_63224e6
        public_63224c3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_62fd060
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
        public_63224e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x63222f0)
    }
}

#undef public_6322310
#undef public_6322323
#undef public_6322326
#undef public_632232a
#undef public_6322389
#undef public_63223a1
#undef public_63223ab
#undef public_63223af
#undef public_63223c0
#undef public_63223fb
#undef public_632240a
#undef public_632242b
#undef public_632244c
#undef public_632245a
#undef public_6322479
#undef public_6322485
#undef public_63224a1
#undef public_63224bc
#undef public_63224c3
#undef public_63224e6
