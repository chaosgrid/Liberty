#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb3b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394e7a);

#define public_62cb3ec _public_62cb3ec
#define public_62cb408 _public_62cb408
#define public_62cb424 _public_62cb424
#define public_62cb43a _public_62cb43a
#define public_62cb450 _public_62cb450

PROC_DECLARE(0x62cb3b0, internal_62cb3b0, public_62cb3b0);
extern "C" NAKED register_t __cdecl internal_62cb3b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394e7a @0x62cb3b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394e7a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x1F0]
        test eax, eax
        lea ecx, ds:[esi+0x1F0]
        mov dword ptr ss : [esp+0x10], 4
        je public_62cb3ec
        push 0
        call public_6341610
        public_62cb3ec : nop
        mov eax, dword ptr ds : [esi+0x164]
        test eax, eax
        lea ecx, ds:[esi+0x164]
        mov byte ptr ss : [esp+0x10], 3
        je public_62cb408
        push 0
        call public_6341610
        public_62cb408 : nop
        mov eax, dword ptr ds : [esi+0xA4]
        test eax, eax
        lea ecx, ds:[esi+0xA4]
        mov byte ptr ss : [esp+0x10], 2
        je public_62cb424
        push 0
        call public_6341610
        public_62cb424 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        lea ecx, ds:[esi+0x48]
        mov byte ptr ss : [esp+0x10], 1
        je public_62cb43a
        push 0
        call public_6341610
        public_62cb43a : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        lea ecx, ds:[esi+0x2C]
        mov byte ptr ss : [esp+0x10], 0
        je public_62cb450
        push 0
        call public_6341610
        public_62cb450 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62cb3b0)
    }
}

#undef public_62cb3ec
#undef public_62cb408
#undef public_62cb424
#undef public_62cb43a
#undef public_62cb450
