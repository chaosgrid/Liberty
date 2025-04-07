#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4920);

PROC_DECLARE(0x4d4920, internal_4d4920, public_4d4920);
extern "C" NAKED register_t __cdecl internal_4d4920()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x4d4920)
    }
}
