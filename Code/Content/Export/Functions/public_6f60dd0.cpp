#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f60dd0);

PROC_DECLARE(0x6f60dd0, internal_6f60dd0, public_6f60dd0);
extern "C" NAKED register_t __cdecl internal_6f60dd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        push ecx
        call dword ptr ds : [public_6fb33d8]
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f60dd0)
    }
}
