#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39910);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d02);

PROC_DECLARE(0x6b39910, internal_6b39910, public_6b39910);
extern "C" NAKED register_t __cdecl internal_6b39910()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6bea8
        jmp public_6b69d02
        UNREACHABLE_TRAP(0x6b39910)
    }
}
