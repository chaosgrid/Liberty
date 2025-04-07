#include "Content-PCH.h"

PROC_DECLARE(0x6eb3f40, internal_6eb3f40, public_6eb3f40);
extern "C" NAKED register_t __cdecl internal_6eb3f40()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6eb3f40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcef60], eax
        ret 
        UNREACHABLE_TRAP(0x6eb3f40)
    }
}
