#include "FreeLancer-PCH.h"


#define public_450fe8 _public_450fe8

PROC_DECLARE(0x450fd0, internal_450fd0, public_450fd0);
extern "C" NAKED register_t __cdecl internal_450fd0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        je public_450fe8
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x20]
        public_450fe8 : nop
        mov ecx, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x281
/*FIXUP push offset public_5ccdf0 @0x450ff7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x451001*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x450fd0)
    }
}

#undef public_450fe8
