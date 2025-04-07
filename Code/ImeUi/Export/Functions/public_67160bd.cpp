#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_6716800);

PROC_DECLARE(0x67160bd, internal_67160bd, public_67160bd);
extern "C" NAKED register_t __cdecl internal_67160bd()
{
    __asm
    {
/*FIXUP push offset _public_6716800 @0x67160bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716800
        push dword ptr ds : [public_671d00c]
/*FIXUP push offset public_671935c @0x67160c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671935c
/*FIXUP push offset public_67172d8 @0x67160cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172d8
/*FIXUP push offset public_6717240 @0x67160d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_671935c]
        UNREACHABLE_TRAP(0x67160bd)
    }
}
