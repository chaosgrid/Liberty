#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f3800);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x4f3800, internal_4f3800, public_4f3800);
extern "C" NAKED register_t __cdecl internal_4f3800()
{
    __asm
    {
        push 0x48
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x44], dl
        mov byte ptr ds : [eax+0x45], 0
        ret 8
        UNREACHABLE_TRAP(0x4f3800)
    }
}
