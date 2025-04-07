#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf397);
CLANG_FORWARD_PROC_SYMBOL(public_6acf876);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c26);

PROC_DECLARE(0x6ad9c26, internal_6ad9c26, public_6ad9c26);
extern "C" NAKED register_t __cdecl internal_6ad9c26()
{
    __asm
    {
/*FIXUP push offset _public_6acf397 @0x6ad9c26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6acf397
        call public_6acf876
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad9c26)
    }
}
