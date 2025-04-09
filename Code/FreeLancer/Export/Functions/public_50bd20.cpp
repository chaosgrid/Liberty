#include "FreeLancer-PCH.h"


#define public_50bd36 _public_50bd36

PROC_DECLARE(0x50bd20, internal_50bd20, public_50bd20);
extern "C" NAKED register_t __cdecl internal_50bd20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+0x3C]
        jge public_50bd36
        mov ecx, dword ptr ds : [ecx+0x40]
        lea eax, ds:[eax+eax*2]
        fld dword ptr ds : [ecx+eax*8+0x14]
        ret 4
        public_50bd36 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db318 @0x50bd3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db318
        push 0x284
/*FIXUP push offset public_5db2e4 @0x50bd46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db2e4
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x50bd50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [public_5c7474]
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x50bd20)
    }
}

#undef public_50bd36
