#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418bdc);

PROC_DECLARE(0x406690, internal_406690, public_406690);
extern "C" NAKED register_t __cdecl internal_406690()
{
    __asm
    {
/*FIXUP push offset public_42543c @0x406690*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42543c
        call public_418bdc
        ret 
        UNREACHABLE_TRAP(0x406690)
    }
}
