#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a240);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

PROC_DECLARE(0x661a240, internal_661a240, public_661a240);
extern "C" NAKED register_t __cdecl internal_661a240()
{
    __asm
    {
        push 0x34
        call public_66281dc
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x30], dl
        mov byte ptr ds : [eax+0x31], 0
        ret 8
        UNREACHABLE_TRAP(0x661a240)
    }
}
