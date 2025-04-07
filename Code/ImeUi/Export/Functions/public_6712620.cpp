#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712620);
CLANG_FORWARD_PROC_SYMBOL(public_67144a0);

PROC_DECLARE(0x6712620, internal_6712620, public_6712620);
extern "C" NAKED register_t __cdecl internal_6712620()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push edx
        push eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], edx
        call public_67144a0
        add esp, 8
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6712620)
    }
}
