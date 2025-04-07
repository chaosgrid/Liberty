#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f50b0);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

PROC_DECLARE(0x66f50b0, internal_66f50b0, public_66f50b0);
extern "C" NAKED register_t __cdecl internal_66f50b0()
{
    __asm
    {
/*FIXUP push offset _public_66f3cd0 @0x66f50b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
        push 0xB
        push 0x4C
/*FIXUP push offset public_6705c20 @0x66f50b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705c20
        call public_670071b
        ret 
        UNREACHABLE_TRAP(0x66f50b0)
    }
}
