#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62963f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b3730);

#define public_6296408 _public_6296408
#define public_629640a _public_629640a

PROC_DECLARE(0x62963f0, internal_62963f0, public_62963f0);
extern "C" NAKED register_t __cdecl internal_62963f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6296408
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_629640a
        public_6296408 : nop
        xor eax, eax
        public_629640a : nop
        mov ecx, eax
        call public_62b3730
        fmul dword ptr ds : [public_63eb5cc]
        fmul dword ptr ss : [esp+4]
        ret 4
        UNREACHABLE_TRAP(0x62963f0)
    }
}

#undef public_6296408
#undef public_629640a
