#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_5012bb _public_5012bb
#define public_5012d0 _public_5012d0

PROC_DECLARE(0x5012a0, internal_5012a0, public_5012a0);
extern "C" NAKED register_t __cdecl internal_5012a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2A8]
        test ecx, ecx
        je public_5012d0
        test byte ptr ds : [ecx+0xB4], 8
        je public_5012bb
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_5012bb : nop
        mov ecx, dword ptr ds : [esi+0x2A8]
        call public_537ad0
        mov dword ptr ds : [esi+0x2A8], 0
        public_5012d0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5012a0)
    }
}

#undef public_5012bb
#undef public_5012d0
