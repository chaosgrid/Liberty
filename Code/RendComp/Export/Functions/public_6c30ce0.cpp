#include "RendComp-PCH.h"

PROC_DECLARE(0x6c30ce0, internal_6c30ce0, public_6c30ce0);
extern "C" NAKED register_t __cdecl internal_6c30ce0()
{
    __asm
    {
/*FIXUP push offset public_6c378cc @0x6c30ce0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c378cc
        push 0x13F
/*FIXUP push offset public_6c37778 @0x6c30cea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov eax, 0x100003
/*FIXUP push offset public_6c3702c @0x6c30cf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFF9
        ret 0x18
        UNREACHABLE_TRAP(0x6c30ce0)
    }
}
