#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dafab0, internal_6dafab0, public_6dafab0);
extern "C" NAKED register_t __cdecl internal_6dafab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
/*FIXUP push offset public_6db3d88 @0x6dafabb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        add ecx, 0x20
        push ecx
/*FIXUP push offset public_6db66f0 @0x6dafac4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db66f0
        push eax
        call esi
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6dafab0)
    }
}
