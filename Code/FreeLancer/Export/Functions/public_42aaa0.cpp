#include "Freelancer-PCH.h"

PROC_DECLARE(0x42aaa0, internal_42aaa0, public_42aaa0);
extern "C" NAKED register_t __cdecl internal_42aaa0()
{
    __asm
    {
/*FIXUP push offset public_5ca360 @0x42aaa0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca360
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_667cd4], eax
        ret 
        UNREACHABLE_TRAP(0x42aaa0)
    }
}
