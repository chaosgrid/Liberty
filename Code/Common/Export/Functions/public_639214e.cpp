#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391df6);
CLANG_FORWARD_PROC_SYMBOL(public_639214e);
CLANG_FORWARD_PROC_SYMBOL(public_6392172);

PROC_DECLARE(0x639214e, internal_639214e, public_639214e);
extern "C" NAKED register_t __cdecl internal_639214e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push 0
        lea ecx, ss:[ebp-0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6392172
        lea eax, ss:[ebp-0x10]
/*FIXUP push offset public_63b30c8 @0x6392167*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63b30c8
        push eax
        call public_6391df6
        UNREACHABLE_TRAP(0x639214e)
    }
}
