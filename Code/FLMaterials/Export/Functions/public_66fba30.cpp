#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66fba30);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

PROC_DECLARE(0x66fba30, internal_66fba30, public_66fba30);
extern "C" NAKED register_t __cdecl internal_66fba30()
{
    __asm
    {
/*FIXUP push offset _public_66f3cd0 @0x66fba30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
        push 1
        push 0x4C
/*FIXUP push offset public_67049e0 @0x66fba39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67049e0
        call public_670071b
        ret 
        UNREACHABLE_TRAP(0x66fba30)
    }
}
