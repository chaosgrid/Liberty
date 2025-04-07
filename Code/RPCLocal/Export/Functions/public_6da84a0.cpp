#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da84a0, internal_6da84a0, public_6da84a0);
extern "C" NAKED register_t __cdecl internal_6da84a0()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
/*FIXUP push offset public_6db3d88 @0x6da84b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
/*FIXUP push offset public_6db6284 @0x6da84b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db6284
        push ecx
        call esi
        add esp, 8
        push eax
        call dword ptr ds : [public_6db317c]
        add esp, 8
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da84a0)
    }
}
