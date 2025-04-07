#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352e20);

PROC_DECLARE(0x6352e20, internal_6352e20, public_6352e20);
extern "C" NAKED register_t __cdecl internal_6352e20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+4]
        shr eax, 8
        and eax, 3
        xor eax, edx
        lea edx, ds:[eax*8]
        sub edx, eax
        lea eax, ds:[ecx+edx*4+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6352e20)
    }
}
