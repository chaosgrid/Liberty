#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d490);

PROC_DECLARE(0x6c2d490, internal_6c2d490, public_6c2d490);
extern "C" NAKED register_t __cdecl internal_6c2d490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c37d5c]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x18
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        ret 
        UNREACHABLE_TRAP(0x6c2d490)
    }
}
