#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712720);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);

PROC_DECLARE(0x6712720, internal_6712720, public_6712720);
extern "C" NAKED register_t __cdecl internal_6712720()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov dword ptr ds : [ecx], offset public_6717188
        push eax
        call public_67169d0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6712720)
    }
}
