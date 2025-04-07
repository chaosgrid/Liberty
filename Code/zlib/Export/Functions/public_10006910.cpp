#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006910);

PROC_DECLARE(0x10006910, internal_10006910, public_10006910);
extern "C" NAKED register_t __cdecl internal_10006910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0xC]
        and eax, 0x20
        ret 8
        UNREACHABLE_TRAP(0x10006910)
    }
}
