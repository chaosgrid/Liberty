#include "Content-PCH.h"

PROC_DECLARE(0x6ea6ed0, internal_6ea6ed0, public_6ea6ed0);
extern "C" NAKED register_t __cdecl internal_6ea6ed0()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6ea6ed0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcee24], eax
        ret 
        UNREACHABLE_TRAP(0x6ea6ed0)
    }
}
