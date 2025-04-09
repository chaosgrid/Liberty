#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ece0);

PROC_DECLARE(0x44ece0, internal_44ece0, public_44ece0);
extern "C" NAKED register_t __cdecl internal_44ece0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x30], eax
        mov dword ptr ds : [ecx+0x34], edx
        ret 8
        UNREACHABLE_TRAP(0x44ece0)
    }
}
