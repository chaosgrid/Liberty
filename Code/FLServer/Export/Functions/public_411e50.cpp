#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411e50);
CLANG_FORWARD_PROC_SYMBOL(public_419224);
CLANG_FORWARD_PROC_SYMBOL(public_41922a);
CLANG_FORWARD_PROC_SYMBOL(public_419230);
CLANG_FORWARD_JUMP_SYMBOL(public_41a656);

#define public_411e99 _public_411e99

PROC_DECLARE(0x411e50, internal_411e50, public_411e50);
extern "C" NAKED register_t __cdecl internal_411e50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a656 @0x411e52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a656
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_41dda8
        mov eax, dword ptr ds : [esi+0x20C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_411e99
        push eax
        call dword ptr ds : [public_41b970]
        add esp, 4
        mov dword ptr ds : [esi+0x20C], 0
        public_411e99 : nop
        lea ecx, ds:[esi+0x144]
        call public_419224
        lea ecx, ds:[esi+0xC4]
        mov byte ptr ss : [esp+0x10], 0
        call public_41922a
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_419230
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x411e50)
    }
}

#undef public_411e99
