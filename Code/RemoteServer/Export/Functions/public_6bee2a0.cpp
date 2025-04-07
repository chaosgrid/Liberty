#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bee2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

PROC_DECLARE(0x6bee2a0, internal_6bee2a0, public_6bee2a0);
extern "C" NAKED register_t __cdecl internal_6bee2a0()
{
    __asm
    {
        push 0x24
        call public_6c09d26
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov byte ptr ds : [eax+0x21], 0
        ret 8
        UNREACHABLE_TRAP(0x6bee2a0)
    }
}
