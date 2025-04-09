#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420c20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x420c20, internal_420c20, public_420c20);
extern "C" NAKED register_t __cdecl internal_420c20()
{
    __asm
    {
        push 0x5C
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x58], dl
        mov byte ptr ds : [eax+0x59], 0
        ret 8
        UNREACHABLE_TRAP(0x420c20)
    }
}
