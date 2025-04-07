#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327780);
CLANG_FORWARD_PROC_SYMBOL(public_63277b0);
CLANG_FORWARD_PROC_SYMBOL(public_63277d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6327750, internal_6327750, public_6327750);
extern "C" NAKED register_t __cdecl internal_6327750()
{
    __asm
    {
/*FIXUP push offset _public_63277d0 @0x6327750*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63277d0
/*FIXUP push offset _public_63277b0 @0x6327755*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63277b0
        push 0x100
        push 0x7C
/*FIXUP push offset public_6401968 @0x6327761*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6401968
        call public_6391ef0
/*FIXUP push offset _public_6327780 @0x632776b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6327780
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6327750)
    }
}
