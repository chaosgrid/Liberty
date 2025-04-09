#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7cdf);

PROC_DECLARE(0x5b756d, internal_5b756d, public_5b756d);
extern "C" NAKED register_t __cdecl internal_5b756d()
{
    __asm
    {
/*FIXUP push offset _public_5b7cdf @0x5b756d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7cdf
        push dword ptr ds : [public_67ee18]
/*FIXUP push offset public_616424 @0x5b7578*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616424
/*FIXUP push offset public_5e7300 @0x5b757d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7300
/*FIXUP push offset public_5e7284 @0x5b7582*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call public_5b7b3d
        jmp dword ptr ds : [public_616424]
        UNREACHABLE_TRAP(0x5b756d)
    }
}
