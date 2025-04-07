#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f860);

PROC_DECLARE(0x6b3c5a0, internal_6b3c5a0, public_6b3c5a0);
extern "C" NAKED register_t __cdecl internal_6b3c5a0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6c064
        jmp public_6b4f860
        UNREACHABLE_TRAP(0x6b3c5a0)
    }
}
