#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e870);
CLANG_FORWARD_PROC_SYMBOL(public_630eb70);

PROC_DECLARE(0x630eb70, internal_630eb70, public_630eb70);
extern "C" NAKED register_t __cdecl internal_630eb70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push ecx
        push edx
        push eax
        call public_630e870
        add esp, 0x10
        test al, al
        setne al
        ret 
        UNREACHABLE_TRAP(0x630eb70)
    }
}
