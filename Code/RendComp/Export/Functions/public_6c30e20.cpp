#include "RendComp-PCH.h"

PROC_DECLARE(0x6c30e20, internal_6c30e20, public_6c30e20);
extern "C" NAKED register_t __cdecl internal_6c30e20()
{
    __asm
    {
/*FIXUP push offset public_6c37968 @0x6c30e20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37968
        push 0x18F
/*FIXUP push offset public_6c37778 @0x6c30e2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov eax, 0x100003
/*FIXUP push offset public_6c3702c @0x6c30e34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6c30e20)
    }
}
