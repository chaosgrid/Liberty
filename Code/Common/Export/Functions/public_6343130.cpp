#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343130);
CLANG_FORWARD_PROC_SYMBOL(public_6345f90);

PROC_DECLARE(0x6343130, internal_6343130, public_6343130);
extern "C" NAKED register_t __cdecl internal_6343130()
{
    __asm
    {
        push 1
        lea eax, ds:[ecx+4]
        lea edx, ds:[ecx+0x14]
        mov ecx, dword ptr ds : [ecx+0x58]
        push eax
        push edx
        call public_6345f90
        ret 4
        UNREACHABLE_TRAP(0x6343130)
    }
}
