#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

PROC_DECLARE(0x65f65a0, internal_65f65a0, public_65f65a0);
extern "C" NAKED register_t __cdecl internal_65f65a0()
{
    __asm
    {
        push 0x1C
        call public_6600bb6
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x18], dl
        mov byte ptr ds : [eax+0x19], 0
        ret 8
        UNREACHABLE_TRAP(0x65f65a0)
    }
}
