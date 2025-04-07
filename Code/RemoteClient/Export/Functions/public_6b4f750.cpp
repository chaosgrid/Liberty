#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f750);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

PROC_DECLARE(0x6b4f750, internal_6b4f750, public_6b4f750);
extern "C" NAKED register_t __cdecl internal_6b4f750()
{
    __asm
    {
        push 0x50
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x48], dl
        mov byte ptr ds : [eax+0x49], 0
        ret 8
        UNREACHABLE_TRAP(0x6b4f750)
    }
}
