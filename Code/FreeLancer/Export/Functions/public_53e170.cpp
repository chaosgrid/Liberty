#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bc10);

PROC_DECLARE(0x53e170, internal_53e170, public_53e170);
extern "C" NAKED register_t __cdecl internal_53e170()
{
    __asm
    {
/*FIXUP push offset public_5cc404 @0x53e170*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        call public_54bc10
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x53e170)
    }
}
