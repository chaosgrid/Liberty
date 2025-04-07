#include "Common-PCH.h"


#define public_6286983 _public_6286983

PROC_DECLARE(0x6286970, internal_6286970, public_6286970);
extern "C" NAKED register_t __cdecl internal_6286970()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x11C]
        test al, al
        lea eax, ds:[ecx+0x110]
        jne public_6286983
        lea eax, ds:[ecx+0x2C]
        public_6286983 : nop
        ret 
        UNREACHABLE_TRAP(0x6286970)
    }
}

#undef public_6286983
