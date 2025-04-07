#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d310);

PROC_DECLARE(0x44d310, internal_44d310, public_44d310);
extern "C" NAKED register_t __cdecl internal_44d310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        ret 8
        UNREACHABLE_TRAP(0x44d310)
    }
}
