#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a1f20);

#define public_5a1f42 _public_5a1f42

PROC_DECLARE(0x5a1f20, internal_5a1f20, public_5a1f20);
extern "C" NAKED register_t __cdecl internal_5a1f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFF
        je public_5a1f42
        cmp eax, dword ptr ds : [ecx+0x8A4]
        jge public_5a1f42
        cmp eax, 0x100
        jge public_5a1f42
        mov eax, dword ptr ds : [ecx+eax*4+0x8C]
        ret 4
        public_5a1f42 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x5a1f20)
    }
}

#undef public_5a1f42
