#include "Common-PCH.h"


#define public_629e250 _public_629e250
#define public_629e258 _public_629e258
#define public_629e260 _public_629e260

PROC_DECLARE(0x629e240, internal_629e240, public_629e240);
extern "C" NAKED register_t __cdecl internal_629e240()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x54]
        mov ecx, dword ptr ds : [ecx+0x58]
        xor eax, eax
        cmp edx, ecx
        je public_629e260
        push esi
        lea ecx, ds:[ecx]
        public_629e250 : nop
        mov esi, dword ptr ds : [edx+4]
        test esi, esi
        je public_629e258
        inc eax
        public_629e258 : nop
        add edx, 0x24
        cmp edx, ecx
        jne public_629e250
        pop esi
        public_629e260 : nop
        ret 
        UNREACHABLE_TRAP(0x629e240)
    }
}

#undef public_629e250
#undef public_629e258
#undef public_629e260
