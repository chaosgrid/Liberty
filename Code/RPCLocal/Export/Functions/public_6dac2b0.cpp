#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac2b0, internal_6dac2b0, public_6dac2b0);
extern "C" NAKED register_t __cdecl internal_6dac2b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x20]
/*FIXUP push offset public_6db3d88 @0x6dac2c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
/*FIXUP push offset public_6db64b0 @0x6dac2c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db64b0
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x24]
        add esp, 8
/*FIXUP push offset public_6db3d88 @0x6dac2e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push ecx
/*FIXUP push offset public_6db649c @0x6dac2ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db649c
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        mov edx, dword ptr ds : [edi+0x28]
        add esp, 8
/*FIXUP push offset public_6db3d88 @0x6dac306*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push edx
/*FIXUP push offset public_6db6488 @0x6dac30c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db6488
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db3188]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6dac2b0)
    }
}
