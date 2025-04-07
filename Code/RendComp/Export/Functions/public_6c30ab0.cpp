#include "RendComp-PCH.h"

PROC_DECLARE(0x6c30ab0, internal_6c30ab0, public_6c30ab0);
extern "C" NAKED register_t __cdecl internal_6c30ab0()
{
    __asm
    {
/*FIXUP push offset public_6c377f0 @0x6c30ab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c377f0
        push 0xA5
/*FIXUP push offset public_6c37778 @0x6c30aba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov eax, 0x100003
/*FIXUP push offset public_6c3702c @0x6c30ac4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6c30ab0)
    }
}
