#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f521f0);

PROC_DECLARE(0x6f521f0, internal_6f521f0, public_6f521f0);
extern "C" NAKED register_t __cdecl internal_6f521f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+eax*4+0x7C]
        ret 4
        UNREACHABLE_TRAP(0x6f521f0)
    }
}
