#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6dab);
CLANG_FORWARD_PROC_SYMBOL(public_65d81bb);

PROC_DECLARE(0x65d6d8e, internal_65d6d8e, public_65d6d8e);
extern "C" NAKED register_t __cdecl internal_65d6d8e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_65d6dab
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_65e2320 @0x65d6da0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e2320
        push eax
        call public_65d81bb
        UNREACHABLE_TRAP(0x65d6d8e)
    }
}
