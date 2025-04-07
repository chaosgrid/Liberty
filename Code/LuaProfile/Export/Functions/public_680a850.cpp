#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680a800);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);
CLANG_FORWARD_PROC_SYMBOL(public_680bbe0);
CLANG_FORWARD_PROC_SYMBOL(public_680bc30);

PROC_DECLARE(0x680a850, internal_680a850, public_680a850);
extern "C" NAKED register_t __cdecl internal_680a850()
{
    __asm
    {
        push 0
        call public_680bbe0
        call public_680bc30
        mov ecx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call public_680a800
        UNREACHABLE_TRAP(0x680a850)
    }
}
