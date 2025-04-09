#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43b080);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9219);

PROC_DECLARE(0x437800, internal_437800, public_437800);
extern "C" NAKED register_t __cdecl internal_437800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9219 @0x437802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9219
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6114]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6110]
        lea ecx, ss:[esp]
        call dword ptr ds : [public_5c612c]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [public_5c6128]
        lea eax, ss:[esp]
        push eax
        mov ecx, offset public_668708
        call public_43b080
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_5c6124]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x437800)
    }
}
