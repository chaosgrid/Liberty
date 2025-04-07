#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405520);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

PROC_DECLARE(0x405520, internal_405520, public_405520);
extern "C" NAKED register_t __cdecl internal_405520()
{
    __asm
    {
        push 0x24
        call public_418a9e
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov byte ptr ds : [eax+0x21], 0
        ret 8
        UNREACHABLE_TRAP(0x405520)
    }
}
