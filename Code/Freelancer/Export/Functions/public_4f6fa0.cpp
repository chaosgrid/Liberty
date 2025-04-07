#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6fa0);

#define public_4f6fb9 _public_4f6fb9

PROC_DECLARE(0x4f6fa0, internal_4f6fa0, public_4f6fa0);
extern "C" NAKED register_t __cdecl internal_4f6fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674cdc]
        test eax, eax
        je public_4f6fb9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_674cdc], 0
        public_4f6fb9 : nop
        ret 
        UNREACHABLE_TRAP(0x4f6fa0)
    }
}

#undef public_4f6fb9
