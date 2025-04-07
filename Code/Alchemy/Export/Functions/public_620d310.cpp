#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_620d310);
CLANG_FORWARD_PROC_SYMBOL(public_6246194);

PROC_DECLARE(0x620d310, internal_620d310, public_620d310);
extern "C" NAKED register_t __cdecl internal_620d310()
{
    __asm
    {
/*FIXUP push offset _public_62084b0 @0x620d310*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62084b0
        push 9
        add ecx, 0xC
        push 4
        push ecx
        call public_6246194
        ret 
        UNREACHABLE_TRAP(0x620d310)
    }
}
