#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_622df30);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249739);

#define public_622df56 _public_622df56
#define public_622df58 _public_622df58
#define public_622df7a _public_622df7a
#define public_622df95 _public_622df95
#define public_622dfb0 _public_622dfb0
#define public_622dfc5 _public_622dfc5
#define public_622dfda _public_622dfda
#define public_622dfef _public_622dfef
#define public_622e004 _public_622e004
#define public_622e018 _public_622e018
#define public_622e030 _public_622e030

PROC_DECLARE(0x622df30, internal_622df30, public_622df30);
extern "C" NAKED register_t __cdecl internal_622df30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249739 @0x622df38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249739
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        cmp ecx, ebx
        push edi
        je public_622df56
        lea esi, ds:[ecx+4]
        jmp public_622df58
        public_622df56 : nop
        xor esi, esi
        public_622df58 : nop
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x88]
        mov dword ptr ss : [esp+0x1C], 7
        cmp eax, ebx
        je public_622df7a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x88], ebx
        public_622df7a : nop
        mov eax, dword ptr ds : [esi+0x84]
        mov byte ptr ss : [esp+0x1C], 6
        cmp eax, ebx
        je public_622df95
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_622df95 : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov byte ptr ss : [esp+0x1C], 5
        cmp eax, ebx
        je public_622dfb0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x80], ebx
        public_622dfb0 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov byte ptr ss : [esp+0x1C], 4
        cmp eax, ebx
        je public_622dfc5
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_622dfc5 : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x1C], 3
        cmp eax, ebx
        je public_622dfda
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_622dfda : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x1C], 2
        cmp eax, ebx
        je public_622dfef
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_622dfef : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x1C], 1
        cmp eax, ebx
        je public_622e004
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_622e004 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x1C], bl
        cmp eax, ebx
        je public_622e018
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_622e018 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x1C], 9
        cmp eax, ebx
        je public_622e030
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_622e030 : nop
        mov eax, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        push eax
        lea edx, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, edi
        call public_620b3a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, offset public_624bd84
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x1C], 0xA
        mov dword ptr ds : [esi+0x28], edi
        call public_620b350
        lea ecx, ds:[esi+0x24]
        call public_620d1d0
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], edi
        call public_620b350
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x622df30)
    }
}

#undef public_622df56
#undef public_622df58
#undef public_622df7a
#undef public_622df95
#undef public_622dfb0
#undef public_622dfc5
#undef public_622dfda
#undef public_622dfef
#undef public_622e004
#undef public_622e018
#undef public_622e030
