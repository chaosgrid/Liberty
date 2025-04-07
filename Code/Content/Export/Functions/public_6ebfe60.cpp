#include "Content-PCH.h"

PROC_DECLARE(0x6ebfe60, internal_6ebfe60, public_6ebfe60);
extern "C" NAKED register_t __cdecl internal_6ebfe60()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x54]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb57e0 @0x6ebfe74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57e0
        push eax
        call dword ptr ds : [public_6fb3380]
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6ebfe60)
    }
}
