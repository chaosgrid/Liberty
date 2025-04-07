#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204670);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b390);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247759);

#define public_620aff7 _public_620aff7
#define public_620b017 _public_620b017
#define public_620b01b _public_620b01b
#define public_620b020 _public_620b020
#define public_620b071 _public_620b071
#define public_620b073 _public_620b073
#define public_620b084 _public_620b084
#define public_620b08a _public_620b08a
#define public_620b09f _public_620b09f
#define public_620b0d3 _public_620b0d3
#define public_620b0ee _public_620b0ee
#define public_620b109 _public_620b109
#define public_620b11e _public_620b11e
#define public_620b133 _public_620b133
#define public_620b148 _public_620b148
#define public_620b15d _public_620b15d
#define public_620b172 _public_620b172
#define public_620b18a _public_620b18a
#define public_620b1fa _public_620b1fa

PROC_DECLARE(0x620afc0, internal_620afc0, public_620afc0);
extern "C" NAKED register_t __cdecl internal_620afc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247759 @0x620afc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247759
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_620b1fa
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_620aff7 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_620b01b
        cmp cl, bl
        je public_620b017
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_620b01b
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_620aff7
        public_620b017 : nop
        xor eax, eax
        jmp public_620b020
        public_620b01b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620b020 : nop
        cmp eax, ebx
        jne public_620b1fa
        push 0x94
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_620b071
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_6204670
        mov dword ptr ds : [edi], offset public_624b9f0
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi], offset public_624b990
        mov dword ptr ds : [esi+0x90], 1
        mov ebp, esi
        jmp public_620b073
        public_620b071 : nop
        xor ebp, ebp
        public_620b073 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_620b09f
        mov eax, 0xFFFFFFFC
        public_620b084 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], ebp
        public_620b08a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_620b09f : nop
        mov edx, dword ptr ss : [ebp+4]
        lea esi, ss:[ebp+4]
        push edi
        push esi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], eax
        je public_620b084
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+0x88]
        mov dword ptr ss : [esp+0x24], 8
        cmp eax, ebx
        je public_620b0d3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x88], ebx
        public_620b0d3 : nop
        mov eax, dword ptr ds : [esi+0x84]
        mov byte ptr ss : [esp+0x24], 7
        cmp eax, ebx
        je public_620b0ee
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_620b0ee : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov byte ptr ss : [esp+0x24], 6
        cmp eax, ebx
        je public_620b109
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x80], ebx
        public_620b109 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov byte ptr ss : [esp+0x24], 5
        cmp eax, ebx
        je public_620b11e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_620b11e : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x24], 4
        cmp eax, ebx
        je public_620b133
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_620b133 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x24], 3
        cmp eax, ebx
        je public_620b148
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_620b148 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x24], 2
        cmp eax, ebx
        je public_620b15d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_620b15d : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x24], 1
        cmp eax, ebx
        je public_620b172
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_620b172 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x24], 0xA
        cmp eax, ebx
        je public_620b18a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_620b18a : nop
        mov eax, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x28], 9
        call public_620b3f0
        lea edx, ss:[esp+0x14]
        mov ecx, edi
        push edx
        call public_620b390
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_620b3a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_620b260
        push ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x2C]
        jmp public_620b08a
        public_620b1fa : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_620b08a
        UNREACHABLE_TRAP(0x620afc0)
    }
}

#undef public_620aff7
#undef public_620b017
#undef public_620b01b
#undef public_620b020
#undef public_620b071
#undef public_620b073
#undef public_620b084
#undef public_620b08a
#undef public_620b09f
#undef public_620b0d3
#undef public_620b0ee
#undef public_620b109
#undef public_620b11e
#undef public_620b133
#undef public_620b148
#undef public_620b15d
#undef public_620b172
#undef public_620b18a
#undef public_620b1fa
