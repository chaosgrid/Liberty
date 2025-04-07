#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63195e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x63195e0, internal_63195e0, public_63195e0);
extern "C" NAKED register_t __cdecl internal_63195e0()
{
    __asm
    {
        push 0x44
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x40], dl
        mov byte ptr ds : [eax+0x41], 0
        ret 8
        UNREACHABLE_TRAP(0x63195e0)
    }
}
