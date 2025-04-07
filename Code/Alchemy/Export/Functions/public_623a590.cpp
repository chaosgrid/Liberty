#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6211850);
CLANG_FORWARD_PROC_SYMBOL(public_623a590);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a2ab);

#define public_623a5b7 _public_623a5b7
#define public_623a5b9 _public_623a5b9
#define public_623a5db _public_623a5db
#define public_623a5f6 _public_623a5f6
#define public_623a60b _public_623a60b
#define public_623a620 _public_623a620
#define public_623a635 _public_623a635
#define public_623a64a _public_623a64a
#define public_623a65e _public_623a65e
#define public_623a676 _public_623a676
#define public_623a68c _public_623a68c
#define public_623a6b0 _public_623a6b0

PROC_DECLARE(0x623a590, internal_623a590, public_623a590);
extern "C" NAKED register_t __cdecl internal_623a590()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a2ab @0x623a598*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a2ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        cmp ecx, ebx
        push edi
        je public_623a5b7
        lea esi, ds:[ecx+4]
        jmp public_623a5b9
        public_623a5b7 : nop
        xor esi, esi
        public_623a5b9 : nop
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0x28], 6
        cmp eax, ebx
        je public_623a5db
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_623a5db : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov byte ptr ss : [esp+0x28], 5
        cmp eax, ebx
        je public_623a5f6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x80], ebx
        public_623a5f6 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov byte ptr ss : [esp+0x28], 4
        cmp eax, ebx
        je public_623a60b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_623a60b : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x28], 3
        cmp eax, ebx
        je public_623a620
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_623a620 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x28], 2
        cmp eax, ebx
        je public_623a635
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_623a635 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x28], 1
        cmp eax, ebx
        je public_623a64a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_623a64a : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x28], bl
        cmp eax, ebx
        je public_623a65e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_623a65e : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x28], 8
        cmp eax, ebx
        je public_623a676
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_623a676 : nop
        mov ebp, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        mov byte ptr ss : [esp+0x28], 7
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_623a6b0
        public_623a68c : nop
        lea eax, ss:[esp+0x18]
        push ebx
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6211850
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, edi
        call public_620c160
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_623a68c
        public_623a6b0 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, offset public_624bd84
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x28], 9
        mov dword ptr ds : [esi+0x28], edi
        call public_620b350
        lea ecx, ds:[esi+0x24]
        call public_620d1d0
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], edi
        call public_620b350
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x623a590)
    }
}

#undef public_623a5b7
#undef public_623a5b9
#undef public_623a5db
#undef public_623a5f6
#undef public_623a60b
#undef public_623a620
#undef public_623a635
#undef public_623a64a
#undef public_623a65e
#undef public_623a676
#undef public_623a68c
#undef public_623a6b0
