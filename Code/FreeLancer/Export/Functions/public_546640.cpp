#include "Freelancer-PCH.h"


#define public_546666 _public_546666
#define public_546668 _public_546668

PROC_DECLARE(0x546640, internal_546640, public_546640);
extern "C" NAKED register_t __cdecl internal_546640()
{
    __asm
    {
        lea eax, ds:[ecx-4]
        test eax, eax
        je public_546666
        add eax, 0xC
        test eax, eax
        je public_546666
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_546666
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_546668
        public_546666 : nop
        xor eax, eax
        public_546668 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6a3c]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x546640)
    }
}

#undef public_546666
#undef public_546668
