#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b52580);

PROC_DECLARE(0x6b52580, internal_6b52580, public_6b52580);
extern "C" NAKED register_t __cdecl internal_6b52580()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6cab0
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b52580)
    }
}
