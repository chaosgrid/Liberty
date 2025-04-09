#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540a00);

#define public_540a17 _public_540a17

PROC_DECLARE(0x540a00, internal_540a00, public_540a00);
extern "C" NAKED register_t __cdecl internal_540a00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_678ac4]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [public_678ac4]
        cmp eax, dword ptr ds : [public_678ac8]
        je public_540a17
        mov eax, dword ptr ds : [eax]
        ret 
        public_540a17 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x540a00)
    }
}

#undef public_540a17
