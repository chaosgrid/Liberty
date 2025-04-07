#include "Common-PCH.h"


#define public_628691c _public_628691c

PROC_DECLARE(0x6286900, internal_6286900, public_6286900);
extern "C" NAKED register_t __cdecl internal_6286900()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [eax+0x90]
        test edx, edx
        je public_628691c
        mov dx, word ptr ss : [esp+4]
        mov word ptr ds : [ecx+0xF8], dx
        public_628691c : nop
        ret 4
        UNREACHABLE_TRAP(0x6286900)
    }
}

#undef public_628691c
