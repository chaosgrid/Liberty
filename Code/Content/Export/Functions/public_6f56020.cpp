#include "Content-PCH.h"

PROC_DECLARE(0x6f56020, internal_6f56020, public_6f56020);
extern "C" NAKED register_t __cdecl internal_6f56020()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6f56020*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0d40], eax
        ret 
        UNREACHABLE_TRAP(0x6f56020)
    }
}
