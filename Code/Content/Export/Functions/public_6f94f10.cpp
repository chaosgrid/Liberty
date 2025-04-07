#include "Content-PCH.h"

PROC_DECLARE(0x6f94f10, internal_6f94f10, public_6f94f10);
extern "C" NAKED register_t __cdecl internal_6f94f10()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6f94f10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3c34], eax
        ret 
        UNREACHABLE_TRAP(0x6f94f10)
    }
}
