#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7093);
CLANG_FORWARD_PROC_SYMBOL(public_65d866f);

PROC_DECLARE(0x65d7093, internal_65d7093, public_65d7093);
extern "C" NAKED register_t __cdecl internal_65d7093()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cld 
        mov eax, dword ptr ss : [ebp+0xC]
        push 0
        push eax
        push dword ptr ds : [eax+0x10]
        push dword ptr ds : [eax+8]
        push 0
        push dword ptr ss : [ebp+0x10]
        push dword ptr ds : [eax+0xC]
        push dword ptr ss : [ebp+8]
        call public_65d866f
        add esp, 0x20
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d7093)
    }
}
