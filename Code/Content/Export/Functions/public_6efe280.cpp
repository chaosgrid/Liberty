#include "Content-PCH.h"

PROC_DECLARE(0x6efe280, internal_6efe280, public_6efe280);
extern "C" NAKED register_t __cdecl internal_6efe280()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6efe280*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3b4], eax
        ret 
        UNREACHABLE_TRAP(0x6efe280)
    }
}
