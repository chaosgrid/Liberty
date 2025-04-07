#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf876);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c1a);

PROC_DECLARE(0x6ad9c1a, internal_6ad9c1a, public_6ad9c1a);
extern "C" NAKED register_t __cdecl internal_6ad9c1a()
{
    __asm
    {
/*FIXUP push offset _public_6ac1ce0 @0x6ad9c1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ac1ce0
        call public_6acf876
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad9c1a)
    }
}
