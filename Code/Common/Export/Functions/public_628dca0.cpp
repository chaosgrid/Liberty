#include "Common-PCH.h"


#define public_628dcb1 _public_628dcb1
#define public_628dcbe _public_628dcbe

PROC_DECLARE(0x628dca0, internal_628dca0, public_628dca0);
extern "C" NAKED register_t __cdecl internal_628dca0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        push esi
        lea esi, ds:[edx-4]
        lea eax, ds:[esi+4]
        cmp eax, edx
        je public_628dcbe
        sub esi, eax
        push edi
        public_628dcb1 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edi
        add eax, 4
        cmp eax, edx
        jne public_628dcb1
        pop edi
        public_628dcbe : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFFC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x628dca0)
    }
}

#undef public_628dcb1
#undef public_628dcbe
