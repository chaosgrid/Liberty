#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_67168d0);

PROC_DECLARE(0x6715fdf, internal_6715fdf, public_6715fdf);
extern "C" NAKED register_t __cdecl internal_6715fdf()
{
    __asm
    {
/*FIXUP push offset _public_67168d0 @0x6715fdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_67168d0
        push dword ptr ds : [public_671d024]
/*FIXUP push offset public_671936c @0x6715fea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671936c
/*FIXUP push offset public_671726c @0x6715fef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671726c
/*FIXUP push offset public_6717240 @0x6715ff4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_671936c]
        UNREACHABLE_TRAP(0x6715fdf)
    }
}
