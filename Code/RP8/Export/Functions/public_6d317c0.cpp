#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317c0);

PROC_DECLARE(0x6d317c0, internal_6d317c0, public_6d317c0);
extern "C" NAKED register_t __cdecl internal_6d317c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC8
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0xC8]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        pop ecx
        pop ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d317c0)
    }
}
