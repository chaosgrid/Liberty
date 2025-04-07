#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6fa3cb0, internal_6fa3cb0, public_6fa3cb0);
extern "C" NAKED register_t __cdecl internal_6fa3cb0()
{
    __asm
    {
        push 0x128
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x124], dl
        mov byte ptr ds : [eax+0x125], 0
        ret 8
        UNREACHABLE_TRAP(0x6fa3cb0)
    }
}
