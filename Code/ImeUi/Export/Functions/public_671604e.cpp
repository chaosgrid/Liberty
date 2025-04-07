#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_6716934);

PROC_DECLARE(0x671604e, internal_671604e, public_671604e);
extern "C" NAKED register_t __cdecl internal_671604e()
{
    __asm
    {
/*FIXUP push offset _public_6716934 @0x671604e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716934
        push dword ptr ds : [public_671d018]
/*FIXUP push offset public_671938c @0x6716059*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671938c
/*FIXUP push offset public_67172b4 @0x671605e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172b4
/*FIXUP push offset public_6717224 @0x6716063*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717224
        call public_671669b
        jmp dword ptr ds : [public_671938c]
        UNREACHABLE_TRAP(0x671604e)
    }
}
