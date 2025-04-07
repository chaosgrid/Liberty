#include "DALib-PCH.h"

PROC_DECLARE(0x65c45a0, internal_65c45a0, public_65c45a0);
extern "C" NAKED register_t __cdecl internal_65c45a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0x28]
        push eax
        push ecx
        call dword ptr ds : [public_65c7034]
        ret 4
        UNREACHABLE_TRAP(0x65c45a0)
    }
}
