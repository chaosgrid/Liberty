#include "Content-PCH.h"

PROC_DECLARE(0x6ea3940, internal_6ea3940, public_6ea3940);
extern "C" NAKED register_t __cdecl internal_6ea3940()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6ea3940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceb04], eax
        ret 
        UNREACHABLE_TRAP(0x6ea3940)
    }
}
