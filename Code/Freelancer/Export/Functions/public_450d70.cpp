#include "Freelancer-PCH.h"


#define public_450d88 _public_450d88

PROC_DECLARE(0x450d70, internal_450d70, public_450d70);
extern "C" NAKED register_t __cdecl internal_450d70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_450d88
        mov ecx, dword ptr ds : [eax+0xC]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x10]
        public_450d88 : nop
        mov ecx, dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x219
/*FIXUP push offset public_5ccdf0 @0x450d97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x450da1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x450d70)
    }
}

#undef public_450d88
