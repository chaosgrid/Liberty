#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553340);

PROC_DECLARE(0x53e3c0, internal_53e3c0, public_53e3c0);
extern "C" NAKED register_t __cdecl internal_53e3c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        call public_553340
        add esp, 0x18
        ret 0x1C
        UNREACHABLE_TRAP(0x53e3c0)
    }
}
