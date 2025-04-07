#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436b30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x436b30, internal_436b30, public_436b30);
extern "C" NAKED register_t __cdecl internal_436b30()
{
    __asm
    {
        push 0x30
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x2C], dl
        mov byte ptr ds : [eax+0x2D], 0
        ret 8
        UNREACHABLE_TRAP(0x436b30)
    }
}
