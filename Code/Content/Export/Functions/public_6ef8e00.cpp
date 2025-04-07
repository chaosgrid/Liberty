#include "Content-PCH.h"

PROC_DECLARE(0x6ef8e00, internal_6ef8e00, public_6ef8e00);
extern "C" NAKED register_t __cdecl internal_6ef8e00()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6ef8e00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf328], eax
        ret 
        UNREACHABLE_TRAP(0x6ef8e00)
    }
}
