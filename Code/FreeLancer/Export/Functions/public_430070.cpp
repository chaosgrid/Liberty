#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430070);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x430070, internal_430070, public_430070);
extern "C" NAKED register_t __cdecl internal_430070()
{
    __asm
    {
        push 0x4C
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x48], dl
        mov byte ptr ds : [eax+0x49], 0
        ret 8
        UNREACHABLE_TRAP(0x430070)
    }
}
