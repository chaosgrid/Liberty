#include "Common-PCH.h"


#define public_62cd91f _public_62cd91f
#define public_62cd92c _public_62cd92c
#define public_62cd931 _public_62cd931
#define public_62cd947 _public_62cd947

PROC_DECLARE(0x62cd910, internal_62cd910, public_62cd910);
extern "C" NAKED register_t __cdecl internal_62cd910()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x28]
        xor eax, eax
        test dl, 2
        jne public_62cd91f
        mov eax, 2
        public_62cd91f : nop
        mov edx, dword ptr ds : [ecx+0x10]
        cmp edx, 2
        je public_62cd92c
        cmp edx, 3
        jne public_62cd931
        public_62cd92c : nop
        mov eax, 2
        public_62cd931 : nop
        mov dl, byte ptr ds : [ecx+0x29]
        test dl, dl
        je public_62cd947
        mov dword ptr ds : [ecx+0xC], 3
        mov eax, 3
        ret 4
        public_62cd947 : nop
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x62cd910)
    }
}

#undef public_62cd91f
#undef public_62cd92c
#undef public_62cd931
#undef public_62cd947
