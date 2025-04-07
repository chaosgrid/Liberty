#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4084d0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

PROC_DECLARE(0x4084d0, internal_4084d0, public_4084d0);
extern "C" NAKED register_t __cdecl internal_4084d0()
{
    __asm
    {
        push 0x14
        call public_418a9e
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x10], dl
        mov byte ptr ds : [eax+0x11], 0
        ret 8
        UNREACHABLE_TRAP(0x4084d0)
    }
}
