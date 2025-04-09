#include "FreeLancer-PCH.h"


#define public_450d38 _public_450d38

PROC_DECLARE(0x450d20, internal_450d20, public_450d20);
extern "C" NAKED register_t __cdecl internal_450d20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_450d38
        mov ecx, dword ptr ds : [eax+0xC]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xC]
        public_450d38 : nop
        mov ecx, dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x20C
/*FIXUP push offset public_5ccdf0 @0x450d47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x450d51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x450d20)
    }
}

#undef public_450d38
