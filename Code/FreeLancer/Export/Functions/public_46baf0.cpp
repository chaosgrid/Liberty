#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46baf0);

PROC_DECLARE(0x46baf0, internal_46baf0, public_46baf0);
extern "C" NAKED register_t __cdecl internal_46baf0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x46baf0)
    }
}
