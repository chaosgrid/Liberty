#include "Content-PCH.h"

PROC_DECLARE(0x6ea77d0, internal_6ea77d0, public_6ea77d0);
extern "C" NAKED register_t __cdecl internal_6ea77d0()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6ea77d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceeb0], eax
        ret 
        UNREACHABLE_TRAP(0x6ea77d0)
    }
}
