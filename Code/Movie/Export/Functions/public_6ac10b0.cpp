#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac10b0);

PROC_DECLARE(0x6ac10b0, internal_6ac10b0, public_6ac10b0);
/* CHUNK of public_6ac1a00 */
extern "C" NAKED register_t __cdecl internal_6ac10b0()
{
    __asm
    {
        push 0
        call dword ptr ds : [public_6ada064]
        push eax
/*FIXUP push offset public_6ada1d4 @0x6ac10b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada1d4
        call dword ptr ds : [public_6ada16c]
        ret 
        UNREACHABLE_TRAP(0x6ac10b0)
    }
}
