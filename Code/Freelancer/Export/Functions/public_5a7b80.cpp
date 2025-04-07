#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a7b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5a7b80, internal_5a7b80, public_5a7b80);
extern "C" NAKED register_t __cdecl internal_5a7b80()
{
    __asm
    {
        push 0x24
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov byte ptr ds : [eax+0x21], 0
        ret 8
        UNREACHABLE_TRAP(0x5a7b80)
    }
}
