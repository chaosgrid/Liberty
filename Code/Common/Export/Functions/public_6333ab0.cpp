#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6333ab0, internal_6333ab0, public_6333ab0);
extern "C" NAKED register_t __cdecl internal_6333ab0()
{
    __asm
    {
/*FIXUP push offset _public_6333ac0 @0x6333ab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6333ac0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6333ab0)
    }
}
