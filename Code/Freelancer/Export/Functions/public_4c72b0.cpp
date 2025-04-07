#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72b0);

#define public_4c72c7 _public_4c72c7

PROC_DECLARE(0x4c72b0, internal_4c72b0, public_4c72b0);
extern "C" NAKED register_t __cdecl internal_4c72b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_673514]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+4]
        je public_4c72c7
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [public_673514], eax
        ret 
        public_4c72c7 : nop
        mov dword ptr ds : [public_673510], eax
        mov dword ptr ds : [public_673514], eax
        ret 
        UNREACHABLE_TRAP(0x4c72b0)
    }
}

#undef public_4c72c7
