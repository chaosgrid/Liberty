#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342880);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x6342880, internal_6342880, public_6342880);
extern "C" NAKED register_t __cdecl internal_6342880()
{
    __asm
    {
        push 0x28
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x24], dl
        mov byte ptr ds : [eax+0x25], 0
        ret 8
        UNREACHABLE_TRAP(0x6342880)
    }
}
