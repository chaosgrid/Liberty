#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53020);
CLANG_FORWARD_PROC_SYMBOL(public_6f53050);

PROC_DECLARE(0x6f53020, internal_6f53020, public_6f53020);
extern "C" NAKED register_t __cdecl internal_6f53020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        sub ecx, eax
        sub ecx, 2
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6f53050
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f53020)
    }
}
