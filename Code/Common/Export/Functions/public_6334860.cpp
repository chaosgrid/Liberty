#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63034f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334820);

PROC_DECLARE(0x6334860, internal_6334860, public_6334860);
extern "C" NAKED register_t __cdecl internal_6334860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ecx
/*FIXUP push offset _public_6334820 @0x6334865*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6334820
        push eax
        mov dword ptr ds : [ecx+4], 0
        call public_63034f0
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6334860)
    }
}
