#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x62a7c30, internal_62a7c30, public_62a7c30);
extern "C" NAKED register_t __cdecl internal_62a7c30()
{
    __asm
    {
        push 0x6C
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x68], dl
        mov byte ptr ds : [eax+0x69], 0
        ret 8
        UNREACHABLE_TRAP(0x62a7c30)
    }
}
