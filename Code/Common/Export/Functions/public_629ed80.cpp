#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ed80);

PROC_DECLARE(0x629ed80, internal_629ed80, public_629ed80);
extern "C" NAKED register_t __cdecl internal_629ed80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x64]
        xor ecx, ecx
        cmp eax, 0xFFFFFFFF
        setne cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x629ed80)
    }
}
