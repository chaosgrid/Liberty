#include "Content-PCH.h"

PROC_DECLARE(0x6ea3840, internal_6ea3840, public_6ea3840);
extern "C" NAKED register_t __cdecl internal_6ea3840()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6ea3840*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceb24], eax
        ret 
        UNREACHABLE_TRAP(0x6ea3840)
    }
}
