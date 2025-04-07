#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48d4a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9259);

PROC_DECLARE(0x4379b0, internal_4379b0, public_4379b0);
extern "C" NAKED register_t __cdecl internal_4379b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9259 @0x4379b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9259
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        lea ecx, ss:[esp]
        call dword ptr ds : [public_5c6114]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c6110]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6144]
        lea edx, ss:[esp]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_5c6140]
        lea eax, ss:[esp+0x18]
        push eax
        call public_48d4a0
        add esp, 4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c613c]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x4379b0)
    }
}
