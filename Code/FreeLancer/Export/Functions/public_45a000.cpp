#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x45a000, internal_45a000, public_45a000);
extern "C" NAKED register_t __cdecl internal_45a000()
{
    __asm
    {
        push 0x20
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x1C], dl
        mov byte ptr ds : [eax+0x1D], 0
        ret 8
        UNREACHABLE_TRAP(0x45a000)
    }
}
