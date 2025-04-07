#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4b87);
CLANG_FORWARD_PROC_SYMBOL(public_6ef78c1);

PROC_DECLARE(0x6ef4b87, internal_6ef4b87, public_6ef4b87);
extern "C" NAKED register_t __cdecl internal_6ef4b87()
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
        call public_6ef78c1
        add esp, 0x20
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef4b87)
    }
}
