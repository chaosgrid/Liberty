#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344400);
CLANG_FORWARD_PROC_SYMBOL(public_6344710);
CLANG_FORWARD_PROC_SYMBOL(public_6344cf0);
CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_63525f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397a3a);

#define public_63447bf _public_63447bf
#define public_63447c1 _public_63447c1
#define public_63447f3 _public_63447f3
#define public_63447ff _public_63447ff
#define public_6344805 _public_6344805
#define public_6344848 _public_6344848
#define public_634484a _public_634484a
#define public_634487c _public_634487c
#define public_6344888 _public_6344888
#define public_634488e _public_634488e
#define public_63448ba _public_63448ba
#define public_63448d0 _public_63448d0
#define public_6344908 _public_6344908
#define public_6344912 _public_6344912
#define public_6344956 _public_6344956
#define public_634495f _public_634495f
#define public_6344966 _public_6344966
#define public_6344972 _public_6344972
#define public_63449b9 _public_63449b9

PROC_DECLARE(0x6344710, internal_6344710, public_6344710);
extern "C" NAKED register_t __cdecl internal_6344710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397a3a @0x6344712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397a3a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        xor ebx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov word ptr ss : [ebp+8], bx
        mov word ptr ss : [ebp+0xA], bx
        mov dword ptr ss : [ebp+0xC], ebx
        lea esi, ss:[ebp+0x10]
        push 0x10
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x18], esi
        call public_63522a0
        mov dword ptr ds : [esi], offset public_63a5408
        push ebx
        lea ecx, ds:[esi+0x10]
        mov byte ptr ss : [esp+0x24], 1
        call public_6344cf0
        mov dword ptr ds : [esi], offset public_63a5410
        mov eax, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp], eax
        cmp dword ptr ds : [edi], ebx
        mov byte ptr ss : [esp+0x20], 2
        je public_63447ff
        push 0x18
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x20], 3
        je public_63447bf
        push 0x10
        mov ecx, esi
        call public_63522a0
        mov dword ptr ds : [esi], offset public_63a5430
        push ebx
        lea ecx, ds:[esi+0x10]
        mov byte ptr ss : [esp+0x24], 4
        call public_6344cf0
        mov dword ptr ds : [esi], offset public_63a5428
        jmp public_63447c1
        public_63447bf : nop
        xor esi, esi
        public_63447c1 : nop
        push 0x14
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ss : [ebp+0x28], esi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 5
        je public_63447f3
        push 0x10
        mov ecx, eax
        call public_63525f0
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ss : [ebp+0x2C], eax
        jmp public_6344805
        public_63447f3 : nop
        xor eax, eax
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ss : [ebp+0x2C], eax
        jmp public_6344805
        public_63447ff : nop
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        public_6344805 : nop
        cmp dword ptr ds : [edi+4], ebx
        je public_6344888
        push 0x18
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x20], 6
        je public_6344848
        push 0x10
        mov ecx, esi
        call public_63522a0
        mov dword ptr ds : [esi], offset public_63a5420
        push ebx
        lea ecx, ds:[esi+0x10]
        mov byte ptr ss : [esp+0x24], 7
        call public_6344cf0
        mov dword ptr ds : [esi], offset public_63a5418
        jmp public_634484a
        public_6344848 : nop
        xor esi, esi
        public_634484a : nop
        push 0x14
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ss : [ebp+0x34], esi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 8
        je public_634487c
        push 0x10
        mov ecx, eax
        call public_63525f0
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ss : [ebp+0x30], eax
        jmp public_634488e
        public_634487c : nop
        xor eax, eax
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ss : [ebp+0x30], eax
        jmp public_634488e
        public_6344888 : nop
        mov dword ptr ss : [ebp+0x34], ebx
        mov dword ptr ss : [ebp+0x30], ebx
        public_634488e : nop
        cmp dword ptr ds : [edi+8], ebx
        jne public_63448ba
        mov eax, dword ptr ss : [ebp]
        cmp byte ptr ds : [eax+0x78], 0x10
        jne public_63448ba
        mov ecx, dword ptr ds : [eax+0x78]
        and ecx, 0xFFFFFF09
        or ecx, 9
        mov dword ptr ds : [eax+0x78], ecx
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [edx+0x10]
        push eax
        call public_634ebd0
        public_63448ba : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x40], ecx
        mov edi, dword ptr ds : [edx+0x24]
        cmp edi, ebx
        je public_6344908
        public_63448d0 : nop
        movsx esi, word ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi+edi+0x14]
        add esi, edi
        and eax, 0xFFFFDFFF
        or eax, 0x1000
        push esi
        mov ecx, ebp
        mov dword ptr ds : [esi+0x14], eax
        call public_6344400
        mov ecx, dword ptr ds : [esi+0x14]
        and ecx, 0xFFFFF7FF
        or ecx, 0x400
        mov dword ptr ds : [esi+0x14], ecx
        mov edi, dword ptr ds : [edi+8]
        cmp edi, ebx
        jne public_63448d0
        public_6344908 : nop
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x20]
        cmp edi, ebx
        je public_6344966
        public_6344912 : nop
        movsx esi, word ptr ds : [edi+0x18]
        fld dword ptr ds : [esi+edi+0x54]
        mov ecx, dword ptr ds : [esi+edi+0x14]
        add esi, edi
        and ecx, 0xFFFFDFFF
        fcomp dword ptr ds : [public_63a53d4]
        or ecx, 0x1000
        mov dword ptr ds : [esi+0x14], ecx
        fnstsw ax
        test ah, 1
        je public_6344956
        push esi
        mov ecx, ebp
        call public_6344400
        mov eax, dword ptr ds : [esi+0x14]
        and eax, 0xFFFFF7FF
        or eax, 0x400
        mov dword ptr ds : [esi+0x14], eax
        jmp public_634495f
        public_6344956 : nop
        and ecx, 0xFFFFF3FF
        mov dword ptr ds : [esi+0x14], ecx
        public_634495f : nop
        mov edi, dword ptr ds : [edi+8]
        cmp edi, ebx
        jne public_6344912
        public_6344966 : nop
        mov ebx, dword ptr ss : [ebp]
        add ebx, 0x64
        xor edi, edi
        mov di, word ptr ds : [ebx+0xE]
        public_6344972 : nop
        cmp edi, 0xFFFF
        je public_63449b9
        mov ecx, dword ptr ds : [ebx+4]
        shl edi, 4
        mov esi, dword ptr ds : [edi+ecx+0xC]
        lea eax, ds:[edi+ecx]
        xor edi, edi
        test esi, esi
        mov di, word ptr ds : [eax+4]
        je public_63449b9
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6344972
        movsx ecx, word ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx+esi+0x14]
        add ecx, esi
        test ah, 0x30
        jne public_6344972
        and eax, 0xFFFFDFFF
        or eax, 0x1000
        mov dword ptr ds : [ecx+0x14], eax
        jmp public_6344972
        public_63449b9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6344710)
    }
}

#undef public_63447bf
#undef public_63447c1
#undef public_63447f3
#undef public_63447ff
#undef public_6344805
#undef public_6344848
#undef public_634484a
#undef public_634487c
#undef public_6344888
#undef public_634488e
#undef public_63448ba
#undef public_63448d0
#undef public_6344908
#undef public_6344912
#undef public_6344956
#undef public_634495f
#undef public_6344966
#undef public_6344972
#undef public_63449b9
