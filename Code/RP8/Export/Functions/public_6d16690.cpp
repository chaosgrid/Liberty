#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16690);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

PROC_DECLARE(0x6d16690, internal_6d16690, public_6d16690);
extern "C" NAKED register_t __cdecl internal_6d16690()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        push 0
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], eax
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d16690)
    }
}
