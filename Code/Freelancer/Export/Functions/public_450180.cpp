#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x450180, internal_450180, public_450180);
extern "C" NAKED register_t __cdecl internal_450180()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x28]
        inc ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x450180)
    }
}
