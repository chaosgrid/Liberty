#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6170);

PROC_DECLARE(0x4f6170, internal_4f6170, public_4f6170);
extern "C" NAKED register_t __cdecl internal_4f6170()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        ret 
        UNREACHABLE_TRAP(0x4f6170)
    }
}
