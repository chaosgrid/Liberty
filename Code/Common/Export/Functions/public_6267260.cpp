#include "Common-PCH.h"


#define public_6267271 _public_6267271
#define public_6267280 _public_6267280

PROC_DECLARE(0x6267260, internal_6267260, public_6267260);
extern "C" NAKED register_t __cdecl internal_6267260()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        push esi
        lea esi, ds:[edx-2]
        lea eax, ds:[esi+2]
        cmp eax, edx
        je public_6267280
        sub esi, eax
        push edi
        public_6267271 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [esi+eax], di
        add eax, 2
        cmp eax, edx
        jne public_6267271
        pop edi
        public_6267280 : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFFE
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6267260)
    }
}

#undef public_6267271
#undef public_6267280
