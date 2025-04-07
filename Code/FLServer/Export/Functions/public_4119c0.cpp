#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4119c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

PROC_DECLARE(0x4119c0, internal_4119c0, public_4119c0);
extern "C" NAKED register_t __cdecl internal_4119c0()
{
    __asm
    {
        push 0x18
        call public_418a9e
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x14], dl
        mov byte ptr ds : [eax+0x15], 0
        ret 8
        UNREACHABLE_TRAP(0x4119c0)
    }
}
