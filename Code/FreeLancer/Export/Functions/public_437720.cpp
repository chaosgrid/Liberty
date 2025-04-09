#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43ade0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b91fc);

PROC_DECLARE(0x437720, internal_437720, public_437720);
extern "C" NAKED register_t __cdecl internal_437720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b91fc @0x437722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b91fc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x278
        lea ecx, ss:[esp]
        call dword ptr ds : [public_5c6114]
        mov eax, dword ptr ss : [esp+0x290]
        mov ecx, dword ptr ss : [esp+0x28C]
        push eax
        push ecx
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c6110]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6120]
        lea edx, ss:[esp]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x284], 0
        call dword ptr ds : [public_5c611c]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_668708
        call public_43ade0
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x280], 0xFFFFFFFF
        call dword ptr ds : [public_5c6118]
        mov ecx, dword ptr ss : [esp+0x278]
        mov dword ptr fs : [0], ecx
        add esp, 0x284
        ret 0xC
        UNREACHABLE_TRAP(0x437720)
    }
}
