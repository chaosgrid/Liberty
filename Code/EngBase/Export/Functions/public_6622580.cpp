#include "EngBase-PCH.h"


#define public_662258d _public_662258d
#define public_6622592 _public_6622592
#define public_662259e _public_662259e

PROC_DECLARE(0x6622580, internal_6622580, public_6622580);
extern "C" NAKED register_t __cdecl internal_6622580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_662258d
        test eax, eax
        jne public_6622592
        public_662258d : nop
        xor eax, eax
        ret 8
        public_6622592 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_662259e
        xor eax, eax
        ret 8
        public_662259e : nop
        add eax, 0x5C
        ret 8
        UNREACHABLE_TRAP(0x6622580)
    }
}

#undef public_662258d
#undef public_6622592
#undef public_662259e
