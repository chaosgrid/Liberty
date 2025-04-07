#include "Content-PCH.h"

PROC_DECLARE(0x6f05d80, internal_6f05d80, public_6f05d80);
extern "C" NAKED register_t __cdecl internal_6f05d80()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6f05d80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0678], eax
        ret 
        UNREACHABLE_TRAP(0x6f05d80)
    }
}
