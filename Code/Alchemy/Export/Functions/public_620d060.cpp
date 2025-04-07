#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620d060);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247a99);

#define public_620d086 _public_620d086
#define public_620d088 _public_620d088
#define public_620d0aa _public_620d0aa
#define public_620d0c5 _public_620d0c5
#define public_620d0e0 _public_620d0e0
#define public_620d0f5 _public_620d0f5
#define public_620d10a _public_620d10a
#define public_620d11f _public_620d11f
#define public_620d134 _public_620d134
#define public_620d148 _public_620d148
#define public_620d160 _public_620d160

PROC_DECLARE(0x620d060, internal_620d060, public_620d060);
extern "C" NAKED register_t __cdecl internal_620d060()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247a99 @0x620d068*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247a99
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
        je public_620d086
        lea esi, ds:[ecx+4]
        jmp public_620d088
        public_620d086 : nop
        xor esi, esi
        public_620d088 : nop
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x88]
        mov dword ptr ss : [esp+0x1C], 7
        cmp eax, ebx
        je public_620d0aa
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x88], ebx
        public_620d0aa : nop
        mov eax, dword ptr ds : [esi+0x84]
        mov byte ptr ss : [esp+0x1C], 6
        cmp eax, ebx
        je public_620d0c5
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_620d0c5 : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov byte ptr ss : [esp+0x1C], 5
        cmp eax, ebx
        je public_620d0e0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x80], ebx
        public_620d0e0 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov byte ptr ss : [esp+0x1C], 4
        cmp eax, ebx
        je public_620d0f5
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_620d0f5 : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x1C], 3
        cmp eax, ebx
        je public_620d10a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_620d10a : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x1C], 2
        cmp eax, ebx
        je public_620d11f
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_620d11f : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x1C], 1
        cmp eax, ebx
        je public_620d134
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_620d134 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x1C], bl
        cmp eax, ebx
        je public_620d148
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_620d148 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x1C], 9
        cmp eax, ebx
        je public_620d160
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_620d160 : nop
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
        UNREACHABLE_TRAP(0x620d060)
    }
}

#undef public_620d086
#undef public_620d088
#undef public_620d0aa
#undef public_620d0c5
#undef public_620d0e0
#undef public_620d0f5
#undef public_620d10a
#undef public_620d11f
#undef public_620d134
#undef public_620d148
#undef public_620d160
