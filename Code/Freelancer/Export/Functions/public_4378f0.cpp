#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a960);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9239);

PROC_DECLARE(0x4378f0, internal_4378f0, public_4378f0);
extern "C" NAKED register_t __cdecl internal_4378f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9239 @0x4378f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9239
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        lea ecx, ss:[esp]
        call dword ptr ds : [public_5c6114]
        mov eax, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ss : [esp+0x8C]
        push eax
        push ecx
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c6110]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6138]
        lea edx, ss:[esp]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x84], 0
        call dword ptr ds : [public_5c6134]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_668708
        call public_43a960
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call dword ptr ds : [public_5c6130]
        mov ecx, dword ptr ss : [esp+0x78]
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 0xC
        UNREACHABLE_TRAP(0x4378f0)
    }
}
