#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32910);

PROC_DECLARE(0x6f32910, internal_6f32910, public_6f32910);
extern "C" NAKED register_t __cdecl internal_6f32910()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6f32910)
    }
}
