#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad98c9);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c74);

PROC_DECLARE(0x6ad98ac, internal_6ad98ac, public_6ad98ac);
extern "C" NAKED register_t __cdecl internal_6ad98ac()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_6ad98c9
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_6adb480 @0x6ad98be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb480
        push eax
        call public_6ad9c74
        UNREACHABLE_TRAP(0x6ad98ac)
    }
}
