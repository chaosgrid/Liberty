#include "Content-PCH.h"

PROC_DECLARE(0x6ea6f10, internal_6ea6f10, public_6ea6f10);
extern "C" NAKED register_t __cdecl internal_6ea6f10()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6ea6f10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcee1c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea6f10)
    }
}
