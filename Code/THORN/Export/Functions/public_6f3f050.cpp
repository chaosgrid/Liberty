#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f050);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

PROC_DECLARE(0x6f3f050, internal_6f3f050, public_6f3f050);
extern "C" NAKED register_t __cdecl internal_6f3f050()
{
    __asm
    {
        push 0x28
        call public_6f57e9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x24], dl
        mov byte ptr ds : [eax+0x25], 0
        ret 8
        UNREACHABLE_TRAP(0x6f3f050)
    }
}
