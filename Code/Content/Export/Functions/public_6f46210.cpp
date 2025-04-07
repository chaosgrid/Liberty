#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46210);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f46210, internal_6f46210, public_6f46210);
extern "C" NAKED register_t __cdecl internal_6f46210()
{
    __asm
    {
        push 0x50
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x4C], dl
        mov byte ptr ds : [eax+0x4D], 0
        ret 8
        UNREACHABLE_TRAP(0x6f46210)
    }
}
