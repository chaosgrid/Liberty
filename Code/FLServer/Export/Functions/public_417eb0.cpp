#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417ed0);
CLANG_FORWARD_PROC_SYMBOL(public_417f40);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x417eb0, internal_417eb0, public_417eb0);
extern "C" NAKED register_t __cdecl internal_417eb0()
{
    __asm
    {
        push 0
        mov ecx, offset public_42a618
        call public_417f40
/*FIXUP push offset _public_417ed0 @0x417ebc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_417ed0
        call public_419410
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x417eb0)
    }
}
