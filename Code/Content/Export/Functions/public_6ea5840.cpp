#include "Content-PCH.h"

PROC_DECLARE(0x6ea5840, internal_6ea5840, public_6ea5840);
extern "C" NAKED register_t __cdecl internal_6ea5840()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6ea5840*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcecf0], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5840)
    }
}
