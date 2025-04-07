#include "Freelancer-PCH.h"


#define public_454471 _public_454471
#define public_454478 _public_454478

PROC_DECLARE(0x454450, internal_454450, public_454450);
extern "C" NAKED register_t __cdecl internal_454450()
{
    __asm
    {
/*FIXUP push offset public_5cdea0 @0x454450*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cdea0
        call dword ptr ds : [public_5c61a8]
        mov cl, byte ptr ss : [esp+0xC]
        add esp, 4
        test cl, cl
        je public_454471
        test al, al
        mov byte ptr ds : [public_66d2a8], 1
        jne public_454478
        public_454471 : nop
        mov byte ptr ds : [public_66d2a8], 0
        public_454478 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x454450)
    }
}

#undef public_454471
#undef public_454478
