#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71060);
CLANG_FORWARD_PROC_SYMBOL(public_6f71070);
CLANG_FORWARD_PROC_SYMBOL(public_6f7298c);

PROC_DECLARE(0x6f71060, internal_6f71060, public_6f71060);
extern "C" NAKED register_t __cdecl internal_6f71060()
{
    __asm
    {
/*FIXUP push offset _public_6f71070 @0x6f71060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f71070
        call public_6f7298c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f71060)
    }
}
