#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6eb1460, internal_6eb1460, public_6eb1460);
extern "C" NAKED register_t __cdecl internal_6eb1460()
{
    __asm
    {
        push 0xC8
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC4], dl
        mov byte ptr ds : [eax+0xC5], 0
        ret 8
        UNREACHABLE_TRAP(0x6eb1460)
    }
}
