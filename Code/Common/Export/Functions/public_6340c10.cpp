#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340c10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x6340c10, internal_6340c10, public_6340c10);
extern "C" NAKED register_t __cdecl internal_6340c10()
{
    __asm
    {
        push 0xAC
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xA8], dl
        mov byte ptr ds : [eax+0xA9], 0
        ret 8
        UNREACHABLE_TRAP(0x6340c10)
    }
}
