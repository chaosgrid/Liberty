#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

PROC_DECLARE(0x6d45770, internal_6d45770, public_6d45770);
extern "C" NAKED register_t __cdecl internal_6d45770()
{
    __asm
    {
        sub esp, 0x10
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov dl, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ecx
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        push 0x2C
        mov byte ptr ss : [esp+0x10], dl
        mov dword ptr ss : [esp+0x14], eax
        call public_6d43650
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x6d45770)
    }
}
