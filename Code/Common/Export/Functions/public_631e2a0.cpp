#include "Common-PCH.h"


#define public_631e2b9 _public_631e2b9
#define public_631e2d2 _public_631e2d2

PROC_DECLARE(0x631e2a0, internal_631e2a0, public_631e2a0);
extern "C" NAKED register_t __cdecl internal_631e2a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_631e2b9
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx]
        lea eax, ds:[edx+eax*2-1]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi], eax
        public_631e2b9 : nop
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_631e2d2
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        lea eax, ds:[ecx+eax*2-1]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi], eax
        public_631e2d2 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x631e2a0)
    }
}

#undef public_631e2b9
#undef public_631e2d2
