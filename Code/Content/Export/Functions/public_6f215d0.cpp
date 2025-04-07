#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f215d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f215d0, internal_6f215d0, public_6f215d0);
extern "C" NAKED register_t __cdecl internal_6f215d0()
{
    __asm
    {
        push 0x30
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x2C], dl
        mov byte ptr ds : [eax+0x2D], 0
        ret 8
        UNREACHABLE_TRAP(0x6f215d0)
    }
}
