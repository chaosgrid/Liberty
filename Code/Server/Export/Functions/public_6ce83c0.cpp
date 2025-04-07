#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce83c0);

#define public_6ce83d2 _public_6ce83d2
#define public_6ce83d4 _public_6ce83d4

PROC_DECLARE(0x6ce83c0, internal_6ce83c0, public_6ce83c0);
extern "C" NAKED register_t __cdecl internal_6ce83c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ce83d2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce83d4
        public_6ce83d2 : nop
        xor eax, eax
        public_6ce83d4 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        ret 
        UNREACHABLE_TRAP(0x6ce83c0)
    }
}

#undef public_6ce83d2
#undef public_6ce83d4
