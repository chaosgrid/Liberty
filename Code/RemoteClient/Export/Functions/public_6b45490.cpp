#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b45490);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f860);

PROC_DECLARE(0x6b45490, internal_6b45490, public_6b45490);
extern "C" NAKED register_t __cdecl internal_6b45490()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6c2c8
        jmp public_6b4f860
        UNREACHABLE_TRAP(0x6b45490)
    }
}
