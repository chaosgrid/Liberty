#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

PROC_DECLARE(0x661a5a0, internal_661a5a0, public_661a5a0);
extern "C" NAKED register_t __cdecl internal_661a5a0()
{
    __asm
    {
        push 0x30
        call public_66281dc
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x2C], dl
        mov byte ptr ds : [eax+0x2D], 0
        ret 8
        UNREACHABLE_TRAP(0x661a5a0)
    }
}
