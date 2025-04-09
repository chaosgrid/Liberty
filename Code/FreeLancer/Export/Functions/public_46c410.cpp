#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c410);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb8e9);

#define public_46c484 _public_46c484

PROC_DECLARE(0x46c410, internal_46c410, public_46c410);
extern "C" NAKED register_t __cdecl internal_46c410()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bb8e9 @0x46c418*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb8e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x498]
        test eax, eax
        je public_46c484
        call public_57b370
        mov eax, dword ptr ds : [esi+0x498]
        add eax, 4
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+4], eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        call public_57b470
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call dword ptr ds : [public_5c62c8]
        mov edx, dword ptr ds : [esi+0x498]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x49C], eax
        public_46c484 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x46c410)
    }
}

#undef public_46c484
