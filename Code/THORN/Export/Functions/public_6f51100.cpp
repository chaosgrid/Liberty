#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f290);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f51100);

PROC_DECLARE(0x6f51100, internal_6f51100, public_6f51100);
extern "C" NAKED register_t __cdecl internal_6f51100()
{
    __asm
    {
/*FIXUP push offset public_6f60e50 @0x6f51100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60e50
        call public_6f4f290
/*FIXUP push offset public_6f60ab4 @0x6f5110a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60ab4
        call public_6f4f290
        push 0x22
/*FIXUP push offset public_6f60ac8 @0x6f51116*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60ac8
        call public_6f4f760
/*FIXUP push offset public_6f60e48 @0x6f51120*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60e48
        call public_6f4b790
/*FIXUP push offset public_6f60e3c @0x6f5112a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60e3c
        call public_6f4b3b0
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f51100)
    }
}
