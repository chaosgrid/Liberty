#include "FreeLancer-PCH.h"


#define public_450dd4 _public_450dd4

PROC_DECLARE(0x450dc0, internal_450dc0, public_450dc0);
extern "C" NAKED register_t __cdecl internal_450dc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x6C]
        test eax, eax
        je public_450dd4
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x2C]
        public_450dd4 : nop
        mov ecx, dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x226
/*FIXUP push offset public_5ccdf0 @0x450de3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x450ded*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x450dc0)
    }
}

#undef public_450dd4
