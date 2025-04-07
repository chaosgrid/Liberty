#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daaee0, internal_6daaee0, public_6daaee0);
extern "C" NAKED register_t __cdecl internal_6daaee0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x2C]
/*FIXUP push offset public_6db3d88 @0x6daaef2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
/*FIXUP push offset public_6db6364 @0x6daaef8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db6364
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db3180]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x30]
        add esp, 8
/*FIXUP push offset public_6db3d88 @0x6daaf14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push ecx
/*FIXUP push offset public_6db635c @0x6daaf1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db635c
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db3180]
        push eax
        call esi
        mov edx, dword ptr ds : [edi+0x34]
        add esp, 8
/*FIXUP push offset public_6db3d88 @0x6daaf36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push edx
/*FIXUP push offset public_6db6354 @0x6daaf3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db6354
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db3180]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6daaee0)
    }
}
