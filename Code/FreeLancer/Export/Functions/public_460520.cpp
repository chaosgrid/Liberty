#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_460520);
CLANG_FORWARD_PROC_SYMBOL(public_462e30);

PROC_DECLARE(0x460520, internal_460520, public_460520);
extern "C" NAKED register_t __cdecl internal_460520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x32C], eax
        call public_462e30
        ret 4
        UNREACHABLE_TRAP(0x460520)
    }
}
