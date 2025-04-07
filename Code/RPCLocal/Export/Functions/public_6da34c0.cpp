#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da34c0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

PROC_DECLARE(0x6da34c0, internal_6da34c0, public_6da34c0);
extern "C" NAKED register_t __cdecl internal_6da34c0()
{
    __asm
    {
        push 0x24
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov byte ptr ds : [eax+0x21], 0
        ret 8
        UNREACHABLE_TRAP(0x6da34c0)
    }
}
