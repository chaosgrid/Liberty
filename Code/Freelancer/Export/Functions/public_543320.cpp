#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_543320);

#define public_543343 _public_543343
#define public_543345 _public_543345

PROC_DECLARE(0x543320, internal_543320, public_543320);
extern "C" NAKED register_t __cdecl internal_543320()
{
    __asm
    {
        test ecx, ecx
        je public_543343
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_543343
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_543343
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_543345
        public_543343 : nop
        xor eax, eax
        public_543345 : nop
        ret 
        UNREACHABLE_TRAP(0x543320)
    }
}

#undef public_543343
#undef public_543345
