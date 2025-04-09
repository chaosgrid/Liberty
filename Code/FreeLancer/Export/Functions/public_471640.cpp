#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471640);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x471640, internal_471640, public_471640);
extern "C" NAKED register_t __cdecl internal_471640()
{
    __asm
    {
        push 0x1C
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x18], dl
        mov byte ptr ds : [eax+0x19], 0
        ret 8
        UNREACHABLE_TRAP(0x471640)
    }
}
