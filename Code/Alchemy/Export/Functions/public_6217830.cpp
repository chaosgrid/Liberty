#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6216550);
CLANG_FORWARD_PROC_SYMBOL(public_6216f20);

#define public_6217853 _public_6217853

PROC_DECLARE(0x6217830, internal_6217830, public_6217830);
extern "C" NAKED register_t __cdecl internal_6217830()
{
    __asm
    {
        mov edx, dword ptr ds : [public_62578f0]
        inc edx
        mov dword ptr ds : [public_62578f0], edx
        mov eax, dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 2
        cmp dl, 2
        jne public_6217853
        jmp public_6216550
        public_6217853 : nop
        jmp public_6216f20
        UNREACHABLE_TRAP(0x6217830)
    }
}

#undef public_6217853
