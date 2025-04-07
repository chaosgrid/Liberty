#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4152b0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

PROC_DECLARE(0x4152b0, internal_4152b0, public_4152b0);
extern "C" NAKED register_t __cdecl internal_4152b0()
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
        UNREACHABLE_TRAP(0x4152b0)
    }
}
