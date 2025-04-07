#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);

PROC_DECLARE(0x6b4e730, internal_6b4e730, public_6b4e730);
extern "C" NAKED register_t __cdecl internal_6b4e730()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6cb20
        jmp public_6b39e50
        UNREACHABLE_TRAP(0x6b4e730)
    }
}
