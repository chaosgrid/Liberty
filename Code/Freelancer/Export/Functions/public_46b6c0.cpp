#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_46b6e0);

PROC_DECLARE(0x46b6c0, internal_46b6c0, public_46b6c0);
extern "C" NAKED register_t __cdecl internal_46b6c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_66da74]
        push eax
        call public_46b6e0
        ret 
        UNREACHABLE_TRAP(0x46b6c0)
    }
}
