#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a3b00);

#define public_5a46a2 _public_5a46a2

PROC_DECLARE(0x5a4690, internal_5a4690, public_5a4690);
extern "C" NAKED register_t __cdecl internal_5a4690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x2E
        je public_5a46a2
        mov dword ptr ss : [esp+4], eax
        jmp public_5a3b00
        public_5a46a2 : nop
        mov eax, dword ptr ds : [ecx+0x38C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x5a4690)
    }
}

#undef public_5a46a2
