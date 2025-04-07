#include "Alchemy-PCH.h"


#define public_62010f4 _public_62010f4

PROC_DECLARE(0x62010e0, internal_62010e0, public_62010e0);
extern "C" NAKED register_t __cdecl internal_62010e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257bc4]
        test eax, eax
        je public_62010f4
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x62010eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        public_62010f4 : nop
        mov dword ptr ds : [public_625791c], 0
        ret 
        UNREACHABLE_TRAP(0x62010e0)
    }
}

#undef public_62010f4
