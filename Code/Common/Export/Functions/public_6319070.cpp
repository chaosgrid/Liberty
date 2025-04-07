#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x6319070, internal_6319070, public_6319070);
extern "C" NAKED register_t __cdecl internal_6319070()
{
    __asm
    {
        push 0x14
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x10], dl
        mov byte ptr ds : [eax+0x11], 0
        ret 8
        UNREACHABLE_TRAP(0x6319070)
    }
}
