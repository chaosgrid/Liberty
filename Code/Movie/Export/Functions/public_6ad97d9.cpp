#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad984f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c74);

PROC_DECLARE(0x6ad97d9, internal_6ad97d9, public_6ad97d9);
extern "C" NAKED register_t __cdecl internal_6ad97d9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_6ad984f
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_6adb4f0 @0x6ad97eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb4f0
        push eax
        call public_6ad9c74
        UNREACHABLE_TRAP(0x6ad97d9)
    }
}
