#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf370, internal_6daf370, public_6daf370);
extern "C" NAKED register_t __cdecl internal_6daf370()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
/*FIXUP push offset public_6db3d88 @0x6daf37e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
/*FIXUP push offset public_6db668c @0x6daf384*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db668c
        push ecx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6daf370)
    }
}
