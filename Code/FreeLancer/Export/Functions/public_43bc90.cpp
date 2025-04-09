#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bc90);

PROC_DECLARE(0x43bc90, internal_43bc90, public_43bc90);
extern "C" NAKED register_t __cdecl internal_43bc90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        ret 
        UNREACHABLE_TRAP(0x43bc90)
    }
}
