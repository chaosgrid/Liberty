#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611a40);

PROC_DECLARE(0x6616b70, internal_6616b70, public_6616b70);
extern "C" NAKED register_t __cdecl internal_6616b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push edx
        call public_6611a40
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6616b70)
    }
}
