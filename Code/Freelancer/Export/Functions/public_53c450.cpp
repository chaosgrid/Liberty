#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8190);

PROC_DECLARE(0x53c450, internal_53c450, public_53c450);
extern "C" NAKED register_t __cdecl internal_53c450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_4c8190
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x53c450)
    }
}
