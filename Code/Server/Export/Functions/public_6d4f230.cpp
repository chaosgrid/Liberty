#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4efc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f230);

PROC_DECLARE(0x6d4f230, internal_6d4f230, public_6d4f230);
extern "C" NAKED register_t __cdecl internal_6d4f230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push 0
        push eax
        mov eax, dword ptr ds : [public_6d64948]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push edx
        call public_6d4efc0
        ret 0x14
        UNREACHABLE_TRAP(0x6d4f230)
    }
}
