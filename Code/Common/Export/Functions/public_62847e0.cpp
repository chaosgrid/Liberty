#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62847e0);
CLANG_FORWARD_PROC_SYMBOL(public_6343940);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_JUMP_SYMBOL(public_6392f38);

#define public_6284837 _public_6284837
#define public_6284882 _public_6284882
#define public_62848dc _public_62848dc
#define public_62848fb _public_62848fb

PROC_DECLARE(0x62847e0, internal_62847e0, public_62847e0);
extern "C" NAKED register_t __cdecl internal_62847e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6392f38 @0x62847e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392f38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [edi+0x54]
        xor ebx, ebx
        cmp eax, ebx
        je public_62848fb
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_63486c0
        mov esi, dword ptr ss : [esp+0x88]
        mov cl, byte ptr ds : [esi+0x10]
        cmp cl, bl
        lea eax, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x7C], ebx
        je public_6284837
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6348720
        public_6284837 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x38], eax
        cmp byte ptr ds : [esi+0x1C], bl
        je public_6284882
        fld dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        fld dword ptr ds : [esi+0x24]
        mov edx, ecx
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], 0
        public_6284882 : nop
        fld dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x54], eax
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, ecx
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [public_63fc0bc]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], edx
        cmp dword ptr ds : [eax+4], 3
        pop esi
        jne public_62848dc
        mov ecx, dword ptr ds : [eax+0x94]
        mov dword ptr ss : [esp+0x64], ecx
        public_62848dc : nop
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call public_6343940
        add esp, 8
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call public_6348710
        public_62848fb : nop
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edi+0x74], ebx
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x62847e0)
    }
}

#undef public_6284837
#undef public_6284882
#undef public_62848dc
#undef public_62848fb
