#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31070);

PROC_DECLARE(0x6c31070, internal_6c31070, public_6c31070);
extern "C" NAKED register_t __cdecl internal_6c31070()
{
    __asm
    {
/*FIXUP push offset public_6c379dc @0x6c31070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c379dc
        push 0x211
/*FIXUP push offset public_6c37778 @0x6c3107a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov eax, 0x100003
/*FIXUP push offset public_6c3702c @0x6c31084*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x6c31070)
    }
}
