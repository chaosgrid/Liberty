#include "FreeLancer-PCH.h"


#define public_5586cf _public_5586cf
#define public_5586e6 _public_5586e6

PROC_DECLARE(0x5586c0, internal_5586c0, public_5586c0);
extern "C" NAKED register_t __cdecl internal_5586c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x58]
        test eax, eax
        jbe public_5586cf
        dec eax
        mov dword ptr ds : [ecx+0x58], eax
        public_5586cf : nop
        mov eax, dword ptr ds : [ecx+0x58]
        test eax, eax
        jne public_5586e6
        mov dword ptr ds : [ecx+0x58], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x44]
        xor eax, eax
        public_5586e6 : nop
        ret 4
        UNREACHABLE_TRAP(0x5586c0)
    }
}

#undef public_5586cf
#undef public_5586e6
