#include "Common-PCH.h"


#define public_62bf222 _public_62bf222
#define public_62bf224 _public_62bf224

PROC_DECLARE(0x62bf210, internal_62bf210, public_62bf210);
extern "C" NAKED register_t __cdecl internal_62bf210()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62bf222
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_62bf224
        public_62bf222 : nop
        xor eax, eax
        public_62bf224 : nop
        mov eax, dword ptr ds : [eax+0xB0]
        ret 
        UNREACHABLE_TRAP(0x62bf210)
    }
}

#undef public_62bf222
#undef public_62bf224
