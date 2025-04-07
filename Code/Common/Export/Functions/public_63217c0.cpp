#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63217c0);
CLANG_FORWARD_PROC_SYMBOL(public_63217e0);

PROC_DECLARE(0x63217c0, internal_63217c0, public_63217c0);
extern "C" NAKED register_t __cdecl internal_63217c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push 0
        push eax
        push ecx
        push edx
        call public_63217e0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63217c0)
    }
}
