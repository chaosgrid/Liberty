#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad52d7);

PROC_DECLARE(0x6ad531d, internal_6ad531d, public_6ad531d);
extern "C" NAKED register_t __cdecl internal_6ad531d()
{
    __asm
    {
/*FIXUP push offset _public_6ad52d7 @0x6ad531d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad52d7
        call dword ptr ds : [public_6ada0b4]
        mov dword ptr ds : [public_6ae1094], eax
        ret 
        UNREACHABLE_TRAP(0x6ad531d)
    }
}
