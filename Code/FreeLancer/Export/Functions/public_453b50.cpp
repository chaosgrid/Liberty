#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_453b50);

#define public_453b5e _public_453b5e

PROC_DECLARE(0x453b50, internal_453b50, public_453b50);
extern "C" NAKED register_t __cdecl internal_453b50()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp edx, ecx
        je public_453b5e
        mov eax, dword ptr ds : [edx+8]
        public_453b5e : nop
        ret 
        UNREACHABLE_TRAP(0x453b50)
    }
}

#undef public_453b5e
