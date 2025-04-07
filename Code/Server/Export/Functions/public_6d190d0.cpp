#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d190d0);

PROC_DECLARE(0x6d190d0, internal_6d190d0, public_6d190d0);
extern "C" NAKED register_t __cdecl internal_6d190d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        movzx ecx, word ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        lea eax, ss:[esp]
        push eax
        mov eax, dword ptr ds : [public_6d8f5dc]
        push 8
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [public_6d8fb18]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [edx]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d190d0)
    }
}
