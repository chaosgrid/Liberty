#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_6211850);
CLANG_FORWARD_PROC_SYMBOL(public_6234d60);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249da2);

#define public_6234d85 _public_6234d85
#define public_6234d87 _public_6234d87
#define public_6234da3 _public_6234da3
#define public_6234db8 _public_6234db8
#define public_6234dcd _public_6234dcd
#define public_6234de2 _public_6234de2
#define public_6234df6 _public_6234df6
#define public_6234e0e _public_6234e0e
#define public_6234e26 _public_6234e26
#define public_6234e4a _public_6234e4a
#define public_6234e84 _public_6234e84
#define public_6234ea7 _public_6234ea7

PROC_DECLARE(0x6234d60, internal_6234d60, public_6234d60);
extern "C" NAKED register_t __cdecl internal_6234d60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249da2 @0x6234d68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249da2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        je public_6234d85
        lea esi, ds:[ecx+4]
        jmp public_6234d87
        public_6234d85 : nop
        xor esi, esi
        public_6234d87 : nop
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x20], 4
        cmp eax, ebx
        je public_6234da3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6234da3 : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x20], 3
        cmp eax, ebx
        je public_6234db8
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_6234db8 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x20], 2
        cmp eax, ebx
        je public_6234dcd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_6234dcd : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x20], 1
        cmp eax, ebx
        je public_6234de2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_6234de2 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x20], bl
        cmp eax, ebx
        je public_6234df6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_6234df6 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x20], 6
        cmp eax, ebx
        je public_6234e0e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_6234e0e : nop
        push ebp
        mov ebp, dword ptr ds : [esi+0x50]
        push edi
        lea edi, ds:[esi+0x4C]
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ss : [esp+0x28], 5
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6234e4a
        public_6234e26 : nop
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
        jne public_6234e26
        public_6234e4a : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, offset public_624bd84
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x28], 7
        mov dword ptr ds : [esi+0x28], edi
        call public_620b350
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_6234e84
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_6234e84 : nop
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        pop edi
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        pop ebp
        je public_6234ea7
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_6234ea7
        push esi
        call public_62460e0
        add esp, 4
        public_6234ea7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6234d60)
    }
}

#undef public_6234d85
#undef public_6234d87
#undef public_6234da3
#undef public_6234db8
#undef public_6234dcd
#undef public_6234de2
#undef public_6234df6
#undef public_6234e0e
#undef public_6234e26
#undef public_6234e4a
#undef public_6234e84
#undef public_6234ea7
