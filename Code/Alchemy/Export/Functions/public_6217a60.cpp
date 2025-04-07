#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6216550);
CLANG_FORWARD_PROC_SYMBOL(public_6216f20);

#define public_6217a8c _public_6217a8c

PROC_DECLARE(0x6217a60, internal_6217a60, public_6217a60);
extern "C" NAKED register_t __cdecl internal_6217a60()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_62578f0]
        inc ecx
        mov dword ptr ds : [public_62578f0], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 2
        cmp dl, 2
        jne public_6217a8c
        call public_6216550
        xor eax, eax
        ret 4
        public_6217a8c : nop
        call public_6216f20
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6217a60)
    }
}

#undef public_6217a8c
