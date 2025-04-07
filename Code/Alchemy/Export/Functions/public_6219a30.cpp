#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_62144a0);
CLANG_FORWARD_PROC_SYMBOL(public_6219a30);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248623);

#define public_6219a81 _public_6219a81
#define public_6219ab2 _public_6219ab2
#define public_6219ab4 _public_6219ab4
#define public_6219ae8 _public_6219ae8
#define public_6219aea _public_6219aea
#define public_6219b28 _public_6219b28
#define public_6219b58 _public_6219b58
#define public_6219b5a _public_6219b5a
#define public_6219b8e _public_6219b8e
#define public_6219b90 _public_6219b90
#define public_6219bce _public_6219bce
#define public_6219bfe _public_6219bfe
#define public_6219c00 _public_6219c00
#define public_6219c34 _public_6219c34
#define public_6219c36 _public_6219c36

PROC_DECLARE(0x6219a30, internal_6219a30, public_6219a30);
extern "C" NAKED register_t __cdecl internal_6219a30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248623 @0x6219a32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248623
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_623f7b0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi], offset public_624ce90
        mov eax, dword ptr ds : [esi+0x4C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 3
        je public_6219a81
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_6219a81 : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x24], 4
        je public_6219ab2
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], 1
        mov ebp, edi
        jmp public_6219ab4
        public_6219ab2 : nop
        xor ebp, ebp
        public_6219ab4 : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 5
        call public_6209fd0
        push 0x10
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 6
        je public_6219ae8
        mov ecx, eax
        call public_62144a0
        mov edi, eax
        jmp public_6219aea
        public_6219ae8 : nop
        xor edi, edi
        public_6219aea : nop
        mov edx, dword ptr ds : [edi]
        push 0x3F333333
        push edi
        mov byte ptr ss : [esp+0x2C], 5
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ss : [ebp]
        push edi
        push ebx
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x4C], ebp
        mov byte ptr ss : [esp+0x24], 3
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, ebx
        je public_6219b28
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_6219b28 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x24], 7
        je public_6219b58
        mov ecx, ebp
        call public_6212db0
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6219b5a
        public_6219b58 : nop
        xor ebp, ebp
        public_6219b5a : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 8
        call public_6209fd0
        push 0x10
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 9
        je public_6219b8e
        mov ecx, eax
        call public_62144a0
        mov edi, eax
        jmp public_6219b90
        public_6219b8e : nop
        xor edi, edi
        public_6219b90 : nop
        mov edx, dword ptr ds : [edi]
        push 0x41200000
        push edi
        mov byte ptr ss : [esp+0x2C], 8
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ss : [ebp]
        push edi
        push ebx
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x50], ebp
        mov byte ptr ss : [esp+0x24], 3
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x54]
        cmp eax, ebx
        je public_6219bce
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x54], ebx
        public_6219bce : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x24], 0xA
        je public_6219bfe
        mov ecx, ebp
        call public_6212db0
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6219c00
        public_6219bfe : nop
        xor ebp, ebp
        public_6219c00 : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0xB
        call public_6209fd0
        push 0x10
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 0xC
        je public_6219c34
        mov ecx, eax
        call public_62144a0
        mov edi, eax
        jmp public_6219c36
        public_6219c34 : nop
        xor edi, edi
        public_6219c36 : nop
        mov edx, dword ptr ds : [edi]
        push 0x41200000
        push edi
        mov byte ptr ss : [esp+0x2C], 0xB
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ss : [ebp]
        push edi
        push ebx
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x54], ebp
        mov byte ptr ss : [esp+0x24], 3
        call public_6209fd0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6219a30)
    }
}

#undef public_6219a81
#undef public_6219ab2
#undef public_6219ab4
#undef public_6219ae8
#undef public_6219aea
#undef public_6219b28
#undef public_6219b58
#undef public_6219b5a
#undef public_6219b8e
#undef public_6219b90
#undef public_6219bce
#undef public_6219bfe
#undef public_6219c00
#undef public_6219c34
#undef public_6219c36
