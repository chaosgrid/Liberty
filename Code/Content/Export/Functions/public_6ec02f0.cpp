#include "Content-PCH.h"

PROC_DECLARE(0x6ec02f0, internal_6ec02f0, public_6ec02f0);
extern "C" NAKED register_t __cdecl internal_6ec02f0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb57f8 @0x6ec02fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57f8
        push eax
        call dword ptr ds : [public_6fb3380]
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec02f0)
    }
}
