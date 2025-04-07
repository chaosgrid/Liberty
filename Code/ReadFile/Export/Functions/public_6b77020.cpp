#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77020);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

PROC_DECLARE(0x6b77020, internal_6b77020, public_6b77020);
extern "C" NAKED register_t __cdecl internal_6b77020()
{
    __asm
    {
        push 0x28
        call public_6b782ac
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x24], dl
        mov byte ptr ds : [eax+0x25], 0
        ret 8
        UNREACHABLE_TRAP(0x6b77020)
    }
}
