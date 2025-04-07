#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad87df);

PROC_DECLARE(0x6ad87df, internal_6ad87df, public_6ad87df);
extern "C" NAKED register_t __cdecl internal_6ad87df()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        lea eax, ds:[eax+eax*8]
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        lea eax, ds:[ecx+eax*4+0xC]
        push eax
        call dword ptr ds : [public_6ada104]
        ret 
        UNREACHABLE_TRAP(0x6ad87df)
    }
}
