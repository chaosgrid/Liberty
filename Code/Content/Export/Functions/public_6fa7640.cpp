#include "Content-PCH.h"

PROC_DECLARE(0x6fa7640, internal_6fa7640, public_6fa7640);
extern "C" NAKED register_t __cdecl internal_6fa7640()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6fa7640*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3dcc], eax
        ret 
        UNREACHABLE_TRAP(0x6fa7640)
    }
}
