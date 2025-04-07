#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ab70);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f860);

PROC_DECLARE(0x6b3ab70, internal_6b3ab70, public_6b3ab70);
extern "C" NAKED register_t __cdecl internal_6b3ab70()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6bf54
        jmp public_6b4f860
        UNREACHABLE_TRAP(0x6b3ab70)
    }
}
