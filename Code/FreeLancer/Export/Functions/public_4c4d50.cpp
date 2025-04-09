#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4d50);

PROC_DECLARE(0x4c4d50, internal_4c4d50, public_4c4d50);
extern "C" NAKED register_t __cdecl internal_4c4d50()
{
    __asm
    {
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        neg edx
        push edx
        call dword ptr ds : [eax+0x88]
        ret 
        UNREACHABLE_TRAP(0x4c4d50)
    }
}
