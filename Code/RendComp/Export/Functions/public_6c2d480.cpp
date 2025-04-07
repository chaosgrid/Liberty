#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d480);

PROC_DECLARE(0x6c2d480, internal_6c2d480, public_6c2d480);
extern "C" NAKED register_t __cdecl internal_6c2d480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c37d58]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x14
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        ret 
        UNREACHABLE_TRAP(0x6c2d480)
    }
}
