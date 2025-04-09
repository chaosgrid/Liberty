#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c350);
CLANG_FORWARD_PROC_SYMBOL(public_59cc80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c330, internal_59c330, public_59c330);
extern "C" NAKED register_t __cdecl internal_59c330()
{
    __asm
    {
/*FIXUP push offset public_5e5440 @0x59c330*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5440
        mov ecx, offset public_67da3c
        call public_59cc80
/*FIXUP push offset _public_59c350 @0x59c33f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c350
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c330)
    }
}
