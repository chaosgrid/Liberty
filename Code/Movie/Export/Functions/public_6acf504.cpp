#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf504);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0a8d);

PROC_DECLARE(0x6acf504, internal_6acf504, public_6acf504);
extern "C" NAKED register_t __cdecl internal_6acf504()
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
        call public_6ad0a8d
        add esp, 0x20
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6acf504)
    }
}
