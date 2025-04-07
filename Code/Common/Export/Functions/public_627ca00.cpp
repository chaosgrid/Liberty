#include "Common-PCH.h"


#define public_627ca10 _public_627ca10
#define public_627ca17 _public_627ca17

PROC_DECLARE(0x627ca00, internal_627ca00, public_627ca00);
extern "C" NAKED register_t __cdecl internal_627ca00()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        test ecx, ecx
        je public_627ca17
        lea esp, ss:[esp]
        public_627ca10 : nop
        mov ecx, dword ptr ds : [ecx]
        inc eax
        test ecx, ecx
        jne public_627ca10
        public_627ca17 : nop
        ret 
        UNREACHABLE_TRAP(0x627ca00)
    }
}

#undef public_627ca10
#undef public_627ca17
