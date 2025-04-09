#include "FreeLancer-PCH.h"


#define public_50bcf6 _public_50bcf6

PROC_DECLARE(0x50bce0, internal_50bce0, public_50bce0);
extern "C" NAKED register_t __cdecl internal_50bce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+0x3C]
        jge public_50bcf6
        mov ecx, dword ptr ds : [ecx+0x40]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*8+8]
        ret 4
        public_50bcf6 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db318 @0x50bcfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db318
        push 0x279
/*FIXUP push offset public_5db2e4 @0x50bd06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db2e4
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x50bd10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x50bce0)
    }
}

#undef public_50bcf6
