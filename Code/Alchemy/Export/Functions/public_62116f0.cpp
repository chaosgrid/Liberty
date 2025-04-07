#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_62116f0);
CLANG_FORWARD_PROC_SYMBOL(public_6211850);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247eb2);

#define public_6211715 _public_6211715
#define public_6211717 _public_6211717
#define public_6211733 _public_6211733
#define public_6211748 _public_6211748
#define public_621175d _public_621175d
#define public_6211772 _public_6211772
#define public_6211786 _public_6211786
#define public_621179e _public_621179e
#define public_62117b6 _public_62117b6
#define public_62117da _public_62117da
#define public_6211814 _public_6211814
#define public_6211837 _public_6211837

PROC_DECLARE(0x62116f0, internal_62116f0, public_62116f0);
extern "C" NAKED register_t __cdecl internal_62116f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247eb2 @0x62116f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247eb2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        je public_6211715
        lea esi, ds:[ecx+4]
        jmp public_6211717
        public_6211715 : nop
        xor esi, esi
        public_6211717 : nop
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x20], 4
        cmp eax, ebx
        je public_6211733
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6211733 : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x20], 3
        cmp eax, ebx
        je public_6211748
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_6211748 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x20], 2
        cmp eax, ebx
        je public_621175d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_621175d : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x20], 1
        cmp eax, ebx
        je public_6211772
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_6211772 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x20], bl
        cmp eax, ebx
        je public_6211786
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_6211786 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x20], 6
        cmp eax, ebx
        je public_621179e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_621179e : nop
        push ebp
        mov ebp, dword ptr ds : [esi+0x50]
        push edi
        lea edi, ds:[esi+0x4C]
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ss : [esp+0x28], 5
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_62117da
        public_62117b6 : nop
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
        jne public_62117b6
        public_62117da : nop
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
        je public_6211814
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_6211814 : nop
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        pop edi
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        pop ebp
        je public_6211837
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_6211837
        push esi
        call public_62460e0
        add esp, 4
        public_6211837 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62116f0)
    }
}

#undef public_6211715
#undef public_6211717
#undef public_6211733
#undef public_6211748
#undef public_621175d
#undef public_6211772
#undef public_6211786
#undef public_621179e
#undef public_62117b6
#undef public_62117da
#undef public_6211814
#undef public_6211837
