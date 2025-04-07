#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46190);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f46190, internal_6f46190, public_6f46190);
extern "C" NAKED register_t __cdecl internal_6f46190()
{
    __asm
    {
        push 0x6C
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x68], dl
        mov byte ptr ds : [eax+0x69], 0
        ret 8
        UNREACHABLE_TRAP(0x6f46190)
    }
}
