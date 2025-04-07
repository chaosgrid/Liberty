#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368540);

#define public_6368549 _public_6368549
#define public_6368557 _public_6368557

PROC_DECLARE(0x6368540, internal_6368540, public_6368540);
extern "C" NAKED register_t __cdecl internal_6368540()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x20]
        xor eax, eax
        test ecx, ecx
        je public_6368557
        public_6368549 : nop
        mov edx, dword ptr ds : [ecx+0x64]
        test edx, edx
        jge public_6368557
        mov ecx, dword ptr ds : [ecx]
        inc eax
        test ecx, ecx
        jne public_6368549
        public_6368557 : nop
        ret 
        UNREACHABLE_TRAP(0x6368540)
    }
}

#undef public_6368549
#undef public_6368557
