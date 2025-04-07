#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f01c50);
CLANG_FORWARD_PROC_SYMBOL(public_6f02730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9174);

PROC_DECLARE(0x6f01c00, internal_6f01c00, public_6f01c00);
extern "C" NAKED register_t __cdecl internal_6f01c00()
{
    __asm
    {
/*FIXUP push offset _public_6f02730 @0x6f01c00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f02730
/*FIXUP push offset _public_6f01c50 @0x6f01c05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f01c50
        push 0x108
        push 0x10
/*FIXUP push offset public_6fcf478 @0x6f01c11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcf478
        call public_6fa9174
/*FIXUP push offset _public_6f01c30 @0x6f01c1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f01c30
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f01c00)
    }
}
