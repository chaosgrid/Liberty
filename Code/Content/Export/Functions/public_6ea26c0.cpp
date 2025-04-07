#include "Content-PCH.h"

PROC_DECLARE(0x6ea26c0, internal_6ea26c0, public_6ea26c0);
extern "C" NAKED register_t __cdecl internal_6ea26c0()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6ea26c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcea04], eax
        ret 
        UNREACHABLE_TRAP(0x6ea26c0)
    }
}
