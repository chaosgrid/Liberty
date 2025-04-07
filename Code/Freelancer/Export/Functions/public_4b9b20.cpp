#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9b20);

PROC_DECLARE(0x4b9b20, internal_4b9b20, public_4b9b20);
extern "C" NAKED register_t __cdecl internal_4b9b20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67240c], eax
        ret 
        UNREACHABLE_TRAP(0x4b9b20)
    }
}
