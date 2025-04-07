#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf760, internal_6daf760, public_6daf760);
extern "C" NAKED register_t __cdecl internal_6daf760()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xAC]
        mov edx, dword ptr ds : [ecx+0xA8]
        push esi
/*FIXUP push offset public_6db3d88 @0x6daf76d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
        mov eax, dword ptr ds : [ecx+0xA4]
        mov esi, dword ptr ds : [public_6db3194]
/*FIXUP push offset public_6db66d8 @0x6daf77f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db66d8
        push edx
        mov edx, dword ptr ds : [ecx+0xA0]
/*FIXUP push offset public_6db66cc @0x6daf78b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db66cc
        push eax
        mov eax, dword ptr ss : [esp+0x20]
/*FIXUP push offset public_6db66c0 @0x6daf795*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db66c0
        push edx
/*FIXUP push offset public_6db66b4 @0x6daf79b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db66b4
        add ecx, 0x20
        push ecx
/*FIXUP push offset public_6db66a8 @0x6daf7a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db66a8
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db318c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6daf760)
    }
}
