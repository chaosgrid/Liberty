#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_504880);

PROC_DECLARE(0x504880, internal_504880, public_504880);
extern "C" NAKED register_t __cdecl internal_504880()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x504880)
    }
}
