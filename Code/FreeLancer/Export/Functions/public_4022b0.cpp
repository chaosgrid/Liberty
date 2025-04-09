#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022b0);

PROC_DECLARE(0x4022b0, internal_4022b0, public_4022b0);
extern "C" NAKED register_t __cdecl internal_4022b0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [public_616470], al
        mov dword ptr ds : [public_6101d4], ecx
        ret 
        UNREACHABLE_TRAP(0x4022b0)
    }
}
