#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6e62);
CLANG_FORWARD_PROC_SYMBOL(public_65d81bb);

PROC_DECLARE(0x65d6e45, internal_65d6e45, public_65d6e45);
extern "C" NAKED register_t __cdecl internal_65d6e45()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_65d6e62
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_65e22b0 @0x65d6e57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e22b0
        push eax
        call public_65d81bb
        UNREACHABLE_TRAP(0x65d6e45)
    }
}
