#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f81a0);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

PROC_DECLARE(0x66f81a0, internal_66f81a0, public_66f81a0);
extern "C" NAKED register_t __cdecl internal_66f81a0()
{
    __asm
    {
/*FIXUP push offset _public_66f3cd0 @0x66f81a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
        push 0xA
        push 0x4C
/*FIXUP push offset public_6705000 @0x66f81a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705000
        call public_670071b
        ret 
        UNREACHABLE_TRAP(0x66f81a0)
    }
}
