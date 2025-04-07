#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_67167ee);

PROC_DECLARE(0x67160e2, internal_67160e2, public_67160e2);
extern "C" NAKED register_t __cdecl internal_67160e2()
{
    __asm
    {
/*FIXUP push offset _public_67167ee @0x67160e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_67167ee
        push dword ptr ds : [public_671d008]
/*FIXUP push offset public_6719354 @0x67160ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719354
/*FIXUP push offset public_67172ec @0x67160f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172ec
/*FIXUP push offset public_6717240 @0x67160f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719354]
        UNREACHABLE_TRAP(0x67160e2)
    }
}
