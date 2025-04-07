#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f1d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4cc9e);

PROC_DECLARE(0x6d4cc9e, internal_6d4cc9e, public_6d4cc9e);
extern "C" NAKED register_t __cdecl internal_6d4cc9e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        push dword ptr ds : [eax+0x5C]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+0x18]
        push 0
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ds : [eax]
        call public_6d45f1d
        add esp, 0x18
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4cc9e)
    }
}
