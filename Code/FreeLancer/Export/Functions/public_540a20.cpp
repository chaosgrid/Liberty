#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540a20);

#define public_540a34 _public_540a34

PROC_DECLARE(0x540a20, internal_540a20, public_540a20);
extern "C" NAKED register_t __cdecl internal_540a20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov ecx, eax
        cmp ecx, dword ptr ds : [public_678ac8]
        je public_540a34
        mov eax, dword ptr ds : [ecx]
        ret 
        public_540a34 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x540a20)
    }
}

#undef public_540a34
