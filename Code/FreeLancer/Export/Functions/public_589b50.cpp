#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415850);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_589b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);

PROC_DECLARE(0x589b50, internal_589b50, public_589b50);
extern "C" NAKED register_t __cdecl internal_589b50()
{
    __asm
    {
/*FIXUP push offset _public_444e20 @0x589b50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444e20
/*FIXUP push offset _public_415850 @0x589b55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_415850
        push 0x64
        push 8
/*FIXUP push offset public_67d540 @0x589b5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67d540
        call public_5b7fba
/*FIXUP push offset _public_589b80 @0x589b68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_589b80
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x589b50)
    }
}
