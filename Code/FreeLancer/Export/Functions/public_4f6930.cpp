#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421030);

PROC_DECLARE(0x4f6930, internal_4f6930, public_4f6930);
extern "C" NAKED register_t __cdecl internal_4f6930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+4]
        call public_421030
        ret 4
        UNREACHABLE_TRAP(0x4f6930)
    }
}
