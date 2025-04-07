#include "Content-PCH.h"

PROC_DECLARE(0x6ea1f30, internal_6ea1f30, public_6ea1f30);
extern "C" NAKED register_t __cdecl internal_6ea1f30()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6ea1f30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce9b0], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1f30)
    }
}
