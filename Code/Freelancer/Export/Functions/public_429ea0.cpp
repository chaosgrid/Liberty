#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429ea0);

PROC_DECLARE(0x429ea0, internal_429ea0, public_429ea0);
extern "C" NAKED register_t __cdecl internal_429ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x54], eax
        mov dword ptr ds : [ecx+0x58], edx
        ret 8
        UNREACHABLE_TRAP(0x429ea0)
    }
}
