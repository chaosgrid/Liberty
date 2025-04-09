#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44cde0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x44cde0, internal_44cde0, public_44cde0);
extern "C" NAKED register_t __cdecl internal_44cde0()
{
    __asm
    {
        push 0x10
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xD], dl
        mov byte ptr ds : [eax+0xE], 0
        ret 8
        UNREACHABLE_TRAP(0x44cde0)
    }
}
