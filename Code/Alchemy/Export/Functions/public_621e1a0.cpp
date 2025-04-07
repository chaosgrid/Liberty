#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_621e1a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248a99);

#define public_621e1c3 _public_621e1c3
#define public_621e1c5 _public_621e1c5
#define public_621e1e1 _public_621e1e1
#define public_621e1f6 _public_621e1f6
#define public_621e20b _public_621e20b
#define public_621e220 _public_621e220
#define public_621e234 _public_621e234
#define public_621e24c _public_621e24c
#define public_621e261 _public_621e261
#define public_621e276 _public_621e276
#define public_621e28b _public_621e28b
#define public_621e2a0 _public_621e2a0
#define public_621e2b5 _public_621e2b5
#define public_621e2ca _public_621e2ca

PROC_DECLARE(0x621e1a0, internal_621e1a0, public_621e1a0);
extern "C" NAKED register_t __cdecl internal_621e1a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248a99 @0x621e1a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248a99
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        je public_621e1c3
        lea esi, ds:[ecx+4]
        jmp public_621e1c5
        public_621e1c3 : nop
        xor esi, esi
        public_621e1c5 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x14], 4
        cmp eax, ebx
        je public_621e1e1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_621e1e1 : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x14], 3
        cmp eax, ebx
        je public_621e1f6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_621e1f6 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x14], 2
        cmp eax, ebx
        je public_621e20b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_621e20b : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_621e220
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_621e220 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_621e234
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_621e234 : nop
        mov eax, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x14], 0xB
        cmp eax, ebx
        je public_621e24c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x68], ebx
        public_621e24c : nop
        mov eax, dword ptr ds : [esi+0x60]
        mov byte ptr ss : [esp+0x14], 0xA
        cmp eax, ebx
        je public_621e261
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x60], ebx
        public_621e261 : nop
        mov eax, dword ptr ds : [esi+0x5C]
        mov byte ptr ss : [esp+0x14], 9
        cmp eax, ebx
        je public_621e276
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x5C], ebx
        public_621e276 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov byte ptr ss : [esp+0x14], 8
        cmp eax, ebx
        je public_621e28b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_621e28b : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov byte ptr ss : [esp+0x14], 7
        cmp eax, ebx
        je public_621e2a0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x54], ebx
        public_621e2a0 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x14], 6
        cmp eax, ebx
        je public_621e2b5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_621e2b5 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], 5
        cmp eax, ebx
        je public_621e2ca
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_621e2ca : nop
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x14], 0xC
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        call public_620b350
        lea ecx, ds:[esi+0x24]
        call public_620d1d0
        lea ecx, ds:[esi+4]
        call public_620b300
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621e1a0)
    }
}

#undef public_621e1c3
#undef public_621e1c5
#undef public_621e1e1
#undef public_621e1f6
#undef public_621e20b
#undef public_621e220
#undef public_621e234
#undef public_621e24c
#undef public_621e261
#undef public_621e276
#undef public_621e28b
#undef public_621e2a0
#undef public_621e2b5
#undef public_621e2ca
