#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

PROC_DECLARE(0x6ce4bb0, internal_6ce4bb0, public_6ce4bb0);
extern "C" NAKED register_t __cdecl internal_6ce4bb0()
{
    __asm
    {
        push 0x24
        call public_6d60012
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov byte ptr ds : [eax+0x21], 0
        ret 8
        UNREACHABLE_TRAP(0x6ce4bb0)
    }
}
