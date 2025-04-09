#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417e20);

#define public_417e32 _public_417e32
#define public_417e46 _public_417e46

PROC_DECLARE(0x417e20, internal_417e20, public_417e20);
extern "C" NAKED register_t __cdecl internal_417e20()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x118]
        xor eax, eax
        cmp edx, eax
        je public_417e32
        mov dword ptr ds : [ecx+0x118], eax
        public_417e32 : nop
        cmp dword ptr ds : [ecx+0xD8], eax
        mov dword ptr ds : [ecx+0x158], eax
        je public_417e46
        mov dword ptr ds : [ecx+0xD8], eax
        public_417e46 : nop
        ret 
        UNREACHABLE_TRAP(0x417e20)
    }
}

#undef public_417e32
#undef public_417e46
