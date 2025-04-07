#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x632d3f0, internal_632d3f0, public_632d3f0);
extern "C" NAKED register_t __cdecl internal_632d3f0()
{
    __asm
    {
        push 0x20
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x1C], dl
        mov byte ptr ds : [eax+0x1D], 0
        ret 8
        UNREACHABLE_TRAP(0x632d3f0)
    }
}
