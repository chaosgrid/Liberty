#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6700480);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

PROC_DECLARE(0x6700480, internal_6700480, public_6700480);
extern "C" NAKED register_t __cdecl internal_6700480()
{
    __asm
    {
/*FIXUP push offset _public_66f3cd0 @0x6700480*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
        push 0xA
        push 0x4C
/*FIXUP push offset public_6704680 @0x6700489*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704680
        call public_670071b
        ret 
        UNREACHABLE_TRAP(0x6700480)
    }
}
