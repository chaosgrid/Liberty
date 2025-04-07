#include "Alchemy-PCH.h"


#define public_62013d4 _public_62013d4

PROC_DECLARE(0x62013c0, internal_62013c0, public_62013c0);
extern "C" NAKED register_t __cdecl internal_62013c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257bc4]
        test eax, eax
        je public_62013d4
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x62013cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        public_62013d4 : nop
        mov dword ptr ds : [public_625791c], 0
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62013c0)
    }
}

#undef public_62013d4
