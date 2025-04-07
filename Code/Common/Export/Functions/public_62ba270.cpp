#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba270);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x62ba270, internal_62ba270, public_62ba270);
extern "C" NAKED register_t __cdecl internal_62ba270()
{
    __asm
    {
        push 0x34
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x30], dl
        mov byte ptr ds : [eax+0x31], 0
        ret 8
        UNREACHABLE_TRAP(0x62ba270)
    }
}
