#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5afe40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5afe40, internal_5afe40, public_5afe40);
extern "C" NAKED register_t __cdecl internal_5afe40()
{
    __asm
    {
        push 0x14
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x10], dl
        mov byte ptr ds : [eax+0x11], 0
        ret 8
        UNREACHABLE_TRAP(0x5afe40)
    }
}
