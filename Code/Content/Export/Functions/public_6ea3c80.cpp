#include "Content-PCH.h"

PROC_DECLARE(0x6ea3c80, internal_6ea3c80, public_6ea3c80);
extern "C" NAKED register_t __cdecl internal_6ea3c80()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6ea3c80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceb70], eax
        ret 
        UNREACHABLE_TRAP(0x6ea3c80)
    }
}
