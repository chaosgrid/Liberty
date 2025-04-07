#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca370);

PROC_DECLARE(0x6eca370, internal_6eca370, public_6eca370);
extern "C" NAKED register_t __cdecl internal_6eca370()
{
    __asm
    {
/*FIXUP push offset public_6ed4f80 @0x6eca370*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4f80
        push 0x5D2
/*FIXUP push offset public_6ed4eb0 @0x6eca37a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4eb0
        mov eax, 0x100003
/*FIXUP push offset public_6ed40a0 @0x6eca384*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40a0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6eca370)
    }
}
