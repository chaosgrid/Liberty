#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7a00);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4c7a10 _public_4c7a10

PROC_DECLARE(0x4c7a00, internal_4c7a00, public_4c7a00);
extern "C" NAKED register_t __cdecl internal_4c7a00()
{
    __asm
    {
        call public_54baf0
        test eax, eax
        jne public_4c7a10
        fld dword ptr ds : [public_5c7474]
        ret 
        public_4c7a10 : nop
        call public_54baf0
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_673564 @0x4c7a17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_673564
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        fld dword ptr ds : [public_673564]
        ret 
        UNREACHABLE_TRAP(0x4c7a00)
    }
}

#undef public_4c7a10
