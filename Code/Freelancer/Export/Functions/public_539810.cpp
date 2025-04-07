#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539810);

PROC_DECLARE(0x539810, internal_539810, public_539810);
extern "C" NAKED register_t __cdecl internal_539810()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x64]
        ret 4
        UNREACHABLE_TRAP(0x539810)
    }
}
