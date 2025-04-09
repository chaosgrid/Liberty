#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b0830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5b0820, internal_5b0820, public_5b0820);
extern "C" NAKED register_t __cdecl internal_5b0820()
{
    __asm
    {
/*FIXUP push offset _public_5b0830 @0x5b0820*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b0830
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5b0820)
    }
}
