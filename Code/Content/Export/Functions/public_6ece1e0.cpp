#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eba430);

PROC_DECLARE(0x6ece1e0, internal_6ece1e0, public_6ece1e0);
extern "C" NAKED register_t __cdecl internal_6ece1e0()
{
    __asm
    {
        lea eax, ds:[ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        call public_6eba430
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ece1e0)
    }
}
