#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_524ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5394b0);

PROC_DECLARE(0x524ec0, internal_524ec0, public_524ec0);
extern "C" NAKED register_t __cdecl internal_524ec0()
{
    __asm
    {
        mov dword ptr ds : [ecx-0xC], offset public_5dca14
        mov dword ptr ds : [ecx-8], offset public_5dc994
        mov dword ptr ds : [ecx], offset public_5dc98c
        jmp public_5394b0
        UNREACHABLE_TRAP(0x524ec0)
    }
}
