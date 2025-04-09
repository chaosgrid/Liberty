#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ca00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x42ca00, internal_42ca00, public_42ca00);
extern "C" NAKED register_t __cdecl internal_42ca00()
{
    __asm
    {
        push 0x3C
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x38], dl
        mov byte ptr ds : [eax+0x39], 0
        ret 8
        UNREACHABLE_TRAP(0x42ca00)
    }
}
