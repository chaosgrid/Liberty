#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433650);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x433650, internal_433650, public_433650);
extern "C" NAKED register_t __cdecl internal_433650()
{
    __asm
    {
        push 0x28
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x24], dl
        mov byte ptr ds : [eax+0x25], 0
        ret 8
        UNREACHABLE_TRAP(0x433650)
    }
}
