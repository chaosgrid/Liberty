#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f02730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9036);

PROC_DECLARE(0x6f01c30, internal_6f01c30, public_6f01c30);
extern "C" NAKED register_t __cdecl internal_6f01c30()
{
    __asm
    {
/*FIXUP push offset _public_6f02730 @0x6f01c30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f02730
        push 0x108
        push 0x10
/*FIXUP push offset public_6fcf478 @0x6f01c3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcf478
        call public_6fa9036
        ret 
        UNREACHABLE_TRAP(0x6f01c30)
    }
}
