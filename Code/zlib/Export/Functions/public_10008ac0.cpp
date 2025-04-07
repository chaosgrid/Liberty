#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008760);
CLANG_FORWARD_PROC_SYMBOL(public_10008ac0);

PROC_DECLARE(0x10008ac0, internal_10008ac0, public_10008ac0);
extern "C" NAKED register_t __cdecl internal_10008ac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        call public_10008760
        add esp, 0x20
        ret 0x20
        UNREACHABLE_TRAP(0x10008ac0)
    }
}
