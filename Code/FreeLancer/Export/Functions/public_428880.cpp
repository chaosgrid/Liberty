#include "FreeLancer-PCH.h"

PROC_DECLARE(0x428880, internal_428880, public_428880);
extern "C" NAKED register_t __cdecl internal_428880()
{
    __asm
    {
/*FIXUP push offset public_5ca130 @0x428880*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca130
        push 0x13F
/*FIXUP push offset public_5ca108 @0x42888a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca108
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x428894*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x428880)
    }
}
