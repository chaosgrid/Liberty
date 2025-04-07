#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_621c9c0);
CLANG_FORWARD_JUMP_SYMBOL(public_62488ce);

#define public_621c9e3 _public_621c9e3
#define public_621c9e5 _public_621c9e5
#define public_621ca01 _public_621ca01
#define public_621ca16 _public_621ca16
#define public_621ca2b _public_621ca2b
#define public_621ca3f _public_621ca3f
#define public_621ca57 _public_621ca57
#define public_621ca6c _public_621ca6c
#define public_621ca81 _public_621ca81
#define public_621ca96 _public_621ca96
#define public_621caab _public_621caab
#define public_621cac0 _public_621cac0
#define public_621cad5 _public_621cad5

PROC_DECLARE(0x621c9c0, internal_621c9c0, public_621c9c0);
extern "C" NAKED register_t __cdecl internal_621c9c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62488ce @0x621c9c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62488ce
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
        je public_621c9e3
        lea esi, ds:[ecx+4]
        jmp public_621c9e5
        public_621c9e3 : nop
        xor esi, esi
        public_621c9e5 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x78]
        mov dword ptr ss : [esp+0x14], 3
        cmp eax, ebx
        je public_621ca01
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_621ca01 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x14], 2
        cmp eax, ebx
        je public_621ca16
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_621ca16 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_621ca2b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_621ca2b : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_621ca3f
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_621ca3f : nop
        mov eax, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x14], 0xA
        cmp eax, ebx
        je public_621ca57
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x68], ebx
        public_621ca57 : nop
        mov eax, dword ptr ds : [esi+0x60]
        mov byte ptr ss : [esp+0x14], 9
        cmp eax, ebx
        je public_621ca6c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x60], ebx
        public_621ca6c : nop
        mov eax, dword ptr ds : [esi+0x5C]
        mov byte ptr ss : [esp+0x14], 8
        cmp eax, ebx
        je public_621ca81
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x5C], ebx
        public_621ca81 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov byte ptr ss : [esp+0x14], 7
        cmp eax, ebx
        je public_621ca96
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_621ca96 : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov byte ptr ss : [esp+0x14], 6
        cmp eax, ebx
        je public_621caab
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x54], ebx
        public_621caab : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x14], 5
        cmp eax, ebx
        je public_621cac0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_621cac0 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], 4
        cmp eax, ebx
        je public_621cad5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_621cad5 : nop
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x14], 0xB
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        call public_620b350
        lea ecx, ds:[esi+0x24]
        call public_620d1d0
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], offset public_624bd84
        call public_620b350
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621c9c0)
    }
}

#undef public_621c9e3
#undef public_621c9e5
#undef public_621ca01
#undef public_621ca16
#undef public_621ca2b
#undef public_621ca3f
#undef public_621ca57
#undef public_621ca6c
#undef public_621ca81
#undef public_621ca96
#undef public_621caab
#undef public_621cac0
#undef public_621cad5
