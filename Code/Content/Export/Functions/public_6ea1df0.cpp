#include "Content-PCH.h"

PROC_DECLARE(0x6ea1df0, internal_6ea1df0, public_6ea1df0);
extern "C" NAKED register_t __cdecl internal_6ea1df0()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6ea1df0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce9d8], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1df0)
    }
}
