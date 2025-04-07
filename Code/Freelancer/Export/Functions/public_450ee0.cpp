#include "Freelancer-PCH.h"


#define public_450f00 _public_450f00

PROC_DECLARE(0x450ee0, internal_450ee0, public_450ee0);
extern "C" NAKED register_t __cdecl internal_450ee0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        je public_450f00
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xC]
        public_450f00 : nop
        mov ecx, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x25A
/*FIXUP push offset public_5ccdf0 @0x450f0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x450f19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x450ee0)
    }
}

#undef public_450f00
