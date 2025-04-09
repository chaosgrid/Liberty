#include "FreeLancer-PCH.h"


#define public_509781 _public_509781

PROC_DECLARE(0x509770, internal_509770, public_509770);
extern "C" NAKED register_t __cdecl internal_509770()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2CC]
        test al, al
        je public_509781
        lea eax, ds:[ecx+0x2CD]
        ret 
        public_509781 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x509770)
    }
}

#undef public_509781
