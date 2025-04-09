#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285c0);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);

PROC_DECLARE(0x5646e0, internal_5646e0, public_5646e0);
extern "C" NAKED register_t __cdecl internal_5646e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax*4+public_67a4a8]
        mov dword ptr ss : [esp+4], ecx
        jmp public_4285c0
        UNREACHABLE_TRAP(0x5646e0)
    }
}
