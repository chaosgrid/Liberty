#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5610);

PROC_DECLARE(0x6ac2b60, internal_6ac2b60, public_6ac2b60);
extern "C" NAKED register_t __cdecl internal_6ac2b60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        push 0x3C
        push 4
        push ecx
        call public_6ac5610
        ret 0x14
        UNREACHABLE_TRAP(0x6ac2b60)
    }
}
