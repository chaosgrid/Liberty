#include "RendComp-PCH.h"


#define public_6c30be1 _public_6c30be1

PROC_DECLARE(0x6c30bd0, internal_6c30bd0, public_6c30bd0);
extern "C" NAKED register_t __cdecl internal_6c30bd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jge public_6c30be1
        or eax, 0xFFFFFFFF
        ret 8
        public_6c30be1 : nop
        mov ecx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c37890 @0x6c30be7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37890
        push 0xEE
/*FIXUP push offset public_6c37778 @0x6c30bf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov eax, 0x100003
/*FIXUP push offset public_6c3702c @0x6c30bfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6c30bd0)
    }
}

#undef public_6c30be1
