#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x626b3a0, internal_626b3a0, public_626b3a0);
extern "C" NAKED register_t __cdecl internal_626b3a0()
{
    __asm
    {
        push 0x18
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x14], dl
        mov byte ptr ds : [eax+0x15], 0
        ret 8
        UNREACHABLE_TRAP(0x626b3a0)
    }
}
