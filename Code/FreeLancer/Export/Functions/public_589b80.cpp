#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_589b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

PROC_DECLARE(0x589b80, internal_589b80, public_589b80);
extern "C" NAKED register_t __cdecl internal_589b80()
{
    __asm
    {
/*FIXUP push offset _public_444e20 @0x589b80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444e20
        push 0x64
        push 8
/*FIXUP push offset public_67d540 @0x589b89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67d540
        call public_5b7ec6
        ret 
        UNREACHABLE_TRAP(0x589b80)
    }
}
