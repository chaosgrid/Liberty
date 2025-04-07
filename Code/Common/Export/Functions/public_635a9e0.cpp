#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635a9e0);

PROC_DECLARE(0x635a9e0, internal_635a9e0, public_635a9e0);
extern "C" NAKED register_t __cdecl internal_635a9e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_63ee4dc]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[eax+eax*4]
        mov dword ptr ds : [public_63ee4dc], eax
        and eax, 0xFFFF
        mov dword ptr ss : [esp], eax
        fild dword ptr ss : [esp]
        fmul dword ptr ds : [public_63a567c]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x635a9e0)
    }
}
