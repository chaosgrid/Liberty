#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_62958f0);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393738);

#define public_6295926 _public_6295926

PROC_DECLARE(0x62958f0, internal_62958f0, public_62958f0);
extern "C" NAKED register_t __cdecl internal_62958f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393738 @0x62958f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393738
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639ccb4
        mov eax, dword ptr ds : [esi+0x4C]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6295926
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [esi+0x4C], ecx
        public_6295926 : nop
        mov ecx, esi
        call public_629edf0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6293160
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62958f0)
    }
}

#undef public_6295926
