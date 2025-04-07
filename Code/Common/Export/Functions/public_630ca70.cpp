#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630ca70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x630ca70, internal_630ca70, public_630ca70);
extern "C" NAKED register_t __cdecl internal_630ca70()
{
    __asm
    {
        push 0x74
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x70], dl
        mov byte ptr ds : [eax+0x71], 0
        ret 8
        UNREACHABLE_TRAP(0x630ca70)
    }
}
