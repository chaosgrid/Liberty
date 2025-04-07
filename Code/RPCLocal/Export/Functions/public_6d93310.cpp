#include "RPCLocal-PCH.h"


#define public_6d93342 _public_6d93342

PROC_DECLARE(0x6d93310, internal_6d93310, public_6d93310);
extern "C" NAKED register_t __cdecl internal_6d93310()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_6d93342
        push esi
        mov esi, dword ptr ds : [public_6db3194]
/*FIXUP push offset public_6db3d88 @0x6d9331e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
        mov eax, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6db3dac @0x6d93328*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3dac
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        pop esi
        public_6d93342 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d93310)
    }
}

#undef public_6d93342
