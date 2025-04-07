#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f60dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);

PROC_DECLARE(0x6f72930, internal_6f72930, public_6f72930);
extern "C" NAKED register_t __cdecl internal_6f72930()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push 1
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push edx
        push ecx
        mov dword ptr ss : [esp+0x2C], 1
        call public_6f60dd0
        add esp, 0x30
        ret 0x1C
        UNREACHABLE_TRAP(0x6f72930)
    }
}
