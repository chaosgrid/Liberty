#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb890);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

PROC_DECLARE(0x6ecb890, internal_6ecb890, public_6ecb890);
extern "C" NAKED register_t __cdecl internal_6ecb890()
{
    __asm
    {
        push 0x1C
        call public_6ed0c5c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x18], dl
        mov byte ptr ds : [eax+0x19], 0
        ret 8
        UNREACHABLE_TRAP(0x6ecb890)
    }
}
