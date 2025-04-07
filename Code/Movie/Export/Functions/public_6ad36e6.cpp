#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad36b1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad36e6);

PROC_DECLARE(0x6ad36e6, internal_6ad36e6, public_6ad36e6);
extern "C" NAKED register_t __cdecl internal_6ad36e6()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        and eax, 0xFFF7FFFF
        push eax
        push dword ptr ss : [esp+8]
        call public_6ad36b1
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad36e6)
    }
}
