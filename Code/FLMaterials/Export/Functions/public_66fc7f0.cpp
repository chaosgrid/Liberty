#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66fc7f0);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

PROC_DECLARE(0x66fc7f0, internal_66fc7f0, public_66fc7f0);
extern "C" NAKED register_t __cdecl internal_66fc7f0()
{
    __asm
    {
/*FIXUP push offset _public_66f3cd0 @0x66fc7f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
        push 1
        push 0x4C
/*FIXUP push offset public_6704980 @0x66fc7f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704980
        call public_670071b
        ret 
        UNREACHABLE_TRAP(0x66fc7f0)
    }
}
