#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469090);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x469070, internal_469070, public_469070);
extern "C" NAKED register_t __cdecl internal_469070()
{
    __asm
    {
        mov ecx, offset public_66d400
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_469090 @0x46907b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_469090
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x469070)
    }
}
