#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4037f0);
CLANG_FORWARD_PROC_SYMBOL(public_403850);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x4037d0, internal_4037d0, public_4037d0);
extern "C" NAKED register_t __cdecl internal_4037d0()
{
    __asm
    {
        push 0
        mov ecx, offset public_425f98
        call public_403850
/*FIXUP push offset _public_4037f0 @0x4037dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4037f0
        call public_419410
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4037d0)
    }
}
