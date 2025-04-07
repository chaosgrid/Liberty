#include "Content-PCH.h"

PROC_DECLARE(0x6ec16c0, internal_6ec16c0, public_6ec16c0);
extern "C" NAKED register_t __cdecl internal_6ec16c0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb58c0 @0x6ec16cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb58c0
        push eax
        call dword ptr ds : [public_6fb3380]
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec16c0)
    }
}
