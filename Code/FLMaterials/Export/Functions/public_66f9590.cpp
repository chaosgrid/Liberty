#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f9590);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

PROC_DECLARE(0x66f9590, internal_66f9590, public_66f9590);
extern "C" NAKED register_t __cdecl internal_66f9590()
{
    __asm
    {
/*FIXUP push offset _public_66f3cd0 @0x66f9590*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
        push 9
        push 0x4C
/*FIXUP push offset public_6704d40 @0x66f9599*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704d40
        call public_670071b
        ret 
        UNREACHABLE_TRAP(0x66f9590)
    }
}
