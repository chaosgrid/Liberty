#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53a9f0);

#define public_53a9fe _public_53a9fe

PROC_DECLARE(0x53a9f0, internal_53a9f0, public_53a9f0);
extern "C" NAKED register_t __cdecl internal_53a9f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x7C]
        cmp eax, dword ptr ds : [public_610850]
        je public_53a9fe
        xor al, al
        ret 
        public_53a9fe : nop
        mov al, byte ptr ds : [ecx+0x44]
        shr al, 3
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x53a9f0)
    }
}

#undef public_53a9fe
