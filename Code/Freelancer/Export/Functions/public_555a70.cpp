#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555a70);

PROC_DECLARE(0x555a70, internal_555a70, public_555a70);
extern "C" NAKED register_t __cdecl internal_555a70()
{
    __asm
    {
        xor eax, eax
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+0x10], edx
        mov dword ptr ds : [ecx+0x14], eax
        ret 
        UNREACHABLE_TRAP(0x555a70)
    }
}
