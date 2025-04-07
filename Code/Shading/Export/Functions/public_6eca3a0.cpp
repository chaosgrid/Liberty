#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca3a0);

PROC_DECLARE(0x6eca3a0, internal_6eca3a0, public_6eca3a0);
extern "C" NAKED register_t __cdecl internal_6eca3a0()
{
    __asm
    {
/*FIXUP push offset public_6ed4fd8 @0x6eca3a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4fd8
        push 0x5D9
/*FIXUP push offset public_6ed4eb0 @0x6eca3aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4eb0
        mov eax, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6eca3b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6eca3a0)
    }
}
