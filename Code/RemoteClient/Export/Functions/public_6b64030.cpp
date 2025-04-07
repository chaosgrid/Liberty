#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b64030);

PROC_DECLARE(0x6b64030, internal_6b64030, public_6b64030);
extern "C" NAKED register_t __cdecl internal_6b64030()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6dc84
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b64030)
    }
}
