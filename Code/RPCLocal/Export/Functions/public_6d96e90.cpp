#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96e90);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

PROC_DECLARE(0x6d96e90, internal_6d96e90, public_6d96e90);
extern "C" NAKED register_t __cdecl internal_6d96e90()
{
    __asm
    {
        push 0x18
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x14], dl
        mov byte ptr ds : [eax+0x15], 0
        ret 8
        UNREACHABLE_TRAP(0x6d96e90)
    }
}
