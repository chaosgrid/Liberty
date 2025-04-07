#include "RendComp-PCH.h"

PROC_DECLARE(0x6c30e50, internal_6c30e50, public_6c30e50);
extern "C" NAKED register_t __cdecl internal_6c30e50()
{
    __asm
    {
/*FIXUP push offset public_6c37994 @0x6c30e50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37994
        push 0x196
/*FIXUP push offset public_6c37778 @0x6c30e5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov eax, 0x100003
/*FIXUP push offset public_6c3702c @0x6c30e64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6c30e50)
    }
}
