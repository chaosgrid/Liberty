#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48c50);

PROC_DECLARE(0x6f48c50, internal_6f48c50, public_6f48c50);
extern "C" NAKED register_t __cdecl internal_6f48c50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE0]
        lea edx, ds:[eax+1]
        mov dword ptr ds : [ecx+0xE0], edx
        ret 
        UNREACHABLE_TRAP(0x6f48c50)
    }
}
