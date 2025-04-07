#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daff50, internal_6daff50, public_6daff50);
extern "C" NAKED register_t __cdecl internal_6daff50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
/*FIXUP push offset public_6db3d88 @0x6daff5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        add ecx, 0x20
        push ecx
/*FIXUP push offset public_6db6718 @0x6daff64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db6718
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db318c]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6daff50)
    }
}
