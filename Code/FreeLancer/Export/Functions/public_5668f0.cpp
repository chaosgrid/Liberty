#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b737a);

#define public_5669c9 _public_5669c9
#define public_5669ce _public_5669ce
#define public_5669df _public_5669df
#define public_566a41 _public_566a41
#define public_566a43 _public_566a43
#define public_566a4f _public_566a4f
#define public_566a61 _public_566a61
#define public_566a86 _public_566a86
#define public_566a88 _public_566a88

PROC_DECLARE(0x5668f0, internal_5668f0, public_5668f0);
extern "C" NAKED register_t __cdecl internal_5668f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        xor ebp, ebp
        push esi
        mov dword ptr ds : [esi+0x560], ebp
        mov dword ptr ds : [esi+0x564], 0x3FF00000
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        and cl, 0xFB
        or cl, 3
        mov byte ptr ds : [esi+0x6C], cl
        mov eax, dword ptr ds : [esi+0x54C]
        add esp, 0xC
        cmp eax, ebp
        jne public_566a4f
        mov edi, dword ptr ds : [public_5c6f0c]
        push 4
        lea edx, ss:[esp+0x30]
        push edx
        call edi
        test eax, eax
        mov ebx, dword ptr ds : [public_616418]
        jne public_5669df
        push 4
        lea eax, ss:[esp+0x14]
        push eax
        call edi
        test eax, eax
        jne public_5669df
/*FIXUP push offset public_5e2904 @0x566963*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2904
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [public_5c6f00]
        mov edi, eax
        cmp edi, ebp
        je public_566a43
/*FIXUP push offset public_5e28f4 @0x566980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e28f4
        push edi
        call ebx
        cmp eax, ebp
        je public_5669c9
        xor ecx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x18], 0x14
        call eax
        mov ebp, eax
        test ebp, ebp
        jl public_5669ce
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_5669ce
        public_5669c9 : nop
        mov ebp, 0x80004005
        public_5669ce : nop
        push edi
        call dword ptr ds : [public_5c6f08]
        cmp ebp, 0x80004005
        je public_566a41
        xor ebp, ebp
        public_5669df : nop
        cmp dword ptr ss : [esp+0x2C], 5
        jb public_566a43
/*FIXUP push offset public_5e28e8 @0x5669e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e28e8
        call dword ptr ds : [public_5c6f00]
        cmp eax, ebp
        mov dword ptr ds : [esi+0x54C], eax
        je public_566a43
/*FIXUP push offset public_5e28d8 @0x5669fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e28d8
        push eax
        call ebx
        cmp eax, ebp
        mov dword ptr ds : [esi+0x550], eax
        jne public_566a4f
        mov edx, dword ptr ds : [esi+0x54C]
        push edx
        call dword ptr ds : [public_5c6f08]
        test eax, eax
        jne public_566a43
        call dword ptr ds : [public_5c6f04]
        push eax
/*FIXUP push offset public_5e27a0 @0x566a25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e27a0
        push 2
        push 0x17D9
/*FIXUP push offset public_5e2724 @0x566a31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        call dword ptr ds : [public_5c6bd0]
        add esp, 0x14
        jmp public_566a43
        public_566a41 : nop
        xor ebp, ebp
        public_566a43 : nop
        mov dword ptr ds : [esi+0x550], ebp
        mov dword ptr ds : [esi+0x54C], ebp
        public_566a4f : nop
        mov ecx, offset public_67e7bc
        call public_5b737a
        test eax, eax
        jne public_566a61
        xor al, al
        jmp public_566a88
        public_566a61 : nop
        mov al, byte ptr ds : [public_614ae0]
        test al, al
        jne public_566a86
        mov eax, dword ptr ds : [esi+0x550]
        cmp eax, ebp
        je public_566a86
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x30], ebp
        call eax
        test eax, eax
        setne al
        jmp public_566a88
        public_566a86 : nop
        mov al, 1
        public_566a88 : nop
        mov byte ptr ds : [esi+0x34A], al
        mov dword ptr ds : [esi+0x554], 0x3E8
        call dword ptr ds : [public_5c72ec]
        pop edi
        mov dword ptr ds : [esi+0x558], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x5668f0)
    }
}

#undef public_5669c9
#undef public_5669ce
#undef public_5669df
#undef public_566a41
#undef public_566a43
#undef public_566a4f
#undef public_566a61
#undef public_566a86
#undef public_566a88
