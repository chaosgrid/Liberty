#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43abf0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b91d9);

PROC_DECLARE(0x437640, internal_437640, public_437640);
extern "C" NAKED register_t __cdecl internal_437640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b91d9 @0x437642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b91d9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        lea ecx, ss:[esp]
        call dword ptr ds : [public_5c6114]
        mov eax, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ss : [esp+0x90]
        push eax
        push ecx
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c6110]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c610c]
        lea edx, ss:[esp]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x88], 0
        call dword ptr ds : [public_5c6108]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_668708
        call public_43abf0
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        call dword ptr ds : [public_5c6104]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr fs : [0], ecx
        add esp, 0x88
        ret 0xC
        UNREACHABLE_TRAP(0x437640)
    }
}
