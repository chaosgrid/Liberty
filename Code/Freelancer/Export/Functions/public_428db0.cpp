#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428db0);

#define public_428dcf _public_428dcf

PROC_DECLARE(0x428db0, internal_428db0, public_428db0);
extern "C" NAKED register_t __cdecl internal_428db0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667ca8]
        test eax, eax
        jne public_428dcf
        mov eax, dword ptr ds : [public_6108e8]
        mov ecx, dword ptr ds : [public_6108e4]
        mov dword ptr ds : [public_610904], eax
        mov dword ptr ds : [public_667ca0], ecx
        public_428dcf : nop
        inc dword ptr ds : [public_667ca8]
        ret 
        UNREACHABLE_TRAP(0x428db0)
    }
}

#undef public_428dcf
