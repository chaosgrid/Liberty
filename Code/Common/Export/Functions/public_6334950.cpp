#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63034f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334900);

PROC_DECLARE(0x6334950, internal_6334950, public_6334950);
extern "C" NAKED register_t __cdecl internal_6334950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ecx
/*FIXUP push offset _public_6334900 @0x6334955*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6334900
        push eax
        mov dword ptr ds : [ecx+0x1C], 0
        call public_63034f0
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6334950)
    }
}
