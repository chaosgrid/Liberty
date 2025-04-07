#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f4380);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

PROC_DECLARE(0x66f4380, internal_66f4380, public_66f4380);
extern "C" NAKED register_t __cdecl internal_66f4380()
{
    __asm
    {
/*FIXUP push offset _public_66f3cd0 @0x66f4380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
        push 0xA
        push 0x4C
/*FIXUP push offset public_6705f80 @0x66f4389*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705f80
        call public_670071b
        ret 
        UNREACHABLE_TRAP(0x66f4380)
    }
}
